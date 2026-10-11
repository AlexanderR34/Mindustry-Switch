#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Boolf_7.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/world/blocks/units/UnitBlock_UnitBuild.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Boolf_4.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Boolf_5.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Func_1.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Cons_4.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Cons_5.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/ItemSelection.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "arc/util/Structs.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Cons_6.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Cons_7.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Prov_2.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_arc_func_Prov_3.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/io/TypeIO.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_java_lang_Runnable_5.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_java_lang_Runnable_4.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_java_lang_Runnable_7.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild_invoke_java_lang_Runnable_6.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "java/lang/Iterable.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/UnitBlock.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Scaling.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/io/Reads.h"
#include "mindustry/world/blocks/units/UnitFactory.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_units_UnitBlock$UnitBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) object;
	if (self->F_commandPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandPos)->clazz)->markFunction)((jobject) self->F_commandPos, mark, depth + 1);
	if (self->F_command)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_command)->clazz)->markFunction)((jobject) self->F_command, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_units_UnitBlock$UnitBuild(ctx);
}

void init_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_world_blocks_units_UnitFactory(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_units_UnitBlock$UnitBuild_mindustry_world_blocks_units_UnitBlock(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(228);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan = (jint(-1));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:fraction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	jfloat temp1 = temp0 / ((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_time);
	sp[0].f = temp1;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_canSetCommand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:canSetCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(236);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_commands;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_2;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_allowChangeCommands) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_created(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:created", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[1].o))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_4);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK(sp[0].o))->F_currentPlan = temp0;
	}
label_1:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:drawSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	M_mindustry_gen_Building_drawSelect(ctx, (frame[0].o));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) == (jint(-1))) goto label_2;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[1].o))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[1].o))))->F_unit;
	((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawItemSelection_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawItemSelection_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:getCommandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:onCommand", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_commandPos = (jref) (frame[1].o);
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command;
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_snapToBuilding) == 0) goto label_2;
	}
	{
	LINE_NUMBER(264);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(265);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(269);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_config;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_unit;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	popStackFrame(ctx);
	return (jdouble(temp1));
	}
label_1:;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_itemCapacity;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * temp1));
	popStackFrame(ctx);
	return (jdouble(temp2));
	}
label_2:;
	{
	LINE_NUMBER(281);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:buildConfiguration", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[5].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[5].o))->F_selectionRows;
	sp[5].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[5].o))->F_selectionColumns));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(293);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(296);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(329);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(346);
	goto label_12;
	}
label_2:;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black3;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_5);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_12:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:acceptPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:display", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(358);
	M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(360);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(363);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_6);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_outRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(384);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o));
	LINE_NUMBER(386);
	jfloat temp0 = jfloat(35.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(389);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_rotdeg_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp0;
	LINE_NUMBER(392);
	((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawPayload])(ctx, (frame[0].o));
	LINE_NUMBER(394);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.1f)));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:updateTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurable) != 0) goto label_1;
	}
	{
	LINE_NUMBER(402);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(405);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) < 0) goto label_3;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(406);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan = (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(409);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_time;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_edelta_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp1 * ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp3 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_time = (temp0 + (temp2 * temp3));
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress;
	jfloat temp5 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_edelta_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp6 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = (temp4 + (temp5 * temp6));
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl), (jfloat(1)), (jfloat(0.05f)));
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_speedScl = temp7;
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl), (jfloat(0)), (jfloat(0.05f)));
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_speedScl = temp0;
	}
label_9:;
	{
	LINE_NUMBER(417);
	((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_moveOutPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_moveOutPayload])(ctx, (frame[0].o));
	LINE_NUMBER(419);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) == (jint(-1))) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o));
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(424);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan = (jint(-1));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(428);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress), ((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_time), -1)) < 0) goto label_17;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = (fmodf(((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress), (jfloat(1))));
	LINE_NUMBER(431);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(432);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command;
	sp += 1;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand;
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK(sp[-1].o))->F_command;
label_26:;
	POP_N(2); // Pop method args
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
label_21:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_createSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.06f)));
	jfloat temp2 = temp0 + temp1;
	sp[2].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp2, ((jfloat)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[2].o))->F_createSoundVolume));
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[1].o, (frame[2].o));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payload = (jref) sp[1].o;
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(443);
	((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(444);
	clinit_mindustry_game_EventType$UnitCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitCreateEvent);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o))))->F_unit;
	init_mindustry_game_EventType$UnitCreateEvent_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_17:;
	{
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(0)), ((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_time));
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(448);
	goto label_32;
	}
label_11:;
	{
	LINE_NUMBER(449);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	}
label_32:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:shouldConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(456);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:status", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:getMaximumAccepted", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_capacities;
	jfloat temp0 = jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * temp1));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(472);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) == (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 >= temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan;
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(472);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:unit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_unit;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return (jint(3));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(487);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(488);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(489);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	LINE_NUMBER(490);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	SM_mindustry_io_TypeIO_writeVecNullable_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(491);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command;
	SM_mindustry_io_TypeIO_writeCommand_arc_util_io_Writes_mindustry_ai_UnitCommand(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(496);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK(sp[0].o))->F_currentPlan = temp1;
	LINE_NUMBER(499);
	if ((frame[2].i) < (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVecNullable_arc_util_io_Reads_R_arc_math_geom_Vec2(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK(sp[0].o))->F_commandPos = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(503);
	if ((frame[2].i) < (jint(3))) goto label_6;
	}
	{
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readCommand_arc_util_io_Reads_R_mindustry_ai_UnitCommand(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$acceptItem$0_mindustry_type_Item_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$acceptItem$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$draw$0_mindustry_world_blocks_units_UnitFactory$UnitPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$draw$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_mindustry_ctype_UnlockableContent_float_float_float_float(ctx, sp[0].o, sp[1].o, (temp0 - (jfloat(90.0f))), (((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress) / ((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_time)), ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl), ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_time));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$0_arc_scene_style_TextureRegionDrawable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$display$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(32.0f);
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(370);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(230.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$2_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$display$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@none"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_unit;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$1_arc_scene_style_TextureRegionDrawable_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$display$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_cancel;
	goto label_2;
label_1:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[1].o))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[1].o))))->F_unit;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_set_arc_graphics_g2d_TextureRegion_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_set_arc_graphics_g2d_TextureRegion_R_arc_scene_style_TextureRegionDrawable])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(367);
	sp[0].o = frame[2].o;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(368);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_5;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_6;
label_5:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_6:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$8_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@none"_j))));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$5_arc_scene_ui_layout_Table_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$5", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(297);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(300);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_canSetCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_canSetCommand_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(302);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(303);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(304);
	frame[5].i = (jint(0));
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size;
	jint temp1 = jint(2);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_selectionColumns));
	frame[6].i = temp2;
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_commands;
	frame[7].o = sp[0].o;
	LINE_NUMBER(307);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[6].i));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(310);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable])(ctx, (frame[9].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	jfloat temp0 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_6);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = frame[9].o;
	LINE_NUMBER(312);
	sp[1].o = (jobject)((func_mindustry_ai_UnitCommand_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_UnitCommand_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(314);
	sp[0].o = frame[10].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_java_lang_Runnable_7);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[9].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	INST_IINC(5, 1);
	if (((frame[5].i) % (frame[6].i)) != 0) goto label_19;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_19:;
	LINE_NUMBER(319);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(321);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size) >= (frame[6].i)) goto label_4;
	}
	{
	LINE_NUMBER(322);
	frame[8].i = (jint(0));
	}
label_22:;
	{
	if ((frame[8].i) >= ((frame[6].i) - ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size))) goto label_4;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(322);
	INST_IINC(8, 1);
	goto label_22;
	}
label_4:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$7_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$7", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(314);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command;
	sp += 1;
	if (sp[0].o == (frame[2].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_defaultCommand;
	if (sp[0].o != (frame[2].o)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$6_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(311);
	((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_configure_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$3_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[1].o))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$4_mindustry_type_UnitType_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

jobject M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$2_R_mindustry_type_UnitType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan) != (jint(-1))) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_currentPlan));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_unit;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_unlockedNow_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, (frame[0].o));
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

jobject SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$0_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_mindustry_type_UnitType(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$buildConfiguration$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$created$0_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild:lambda$created$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_unlockedNow_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field commandPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field command
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_gen_Building_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload,
	(void *) M_mindustry_world_blocks_units_UnitBlock$UnitBuild_dumpPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_units_UnitBlock$UnitBuild_spawned,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_canSetCommand_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$draw$0_mindustry_world_blocks_units_UnitFactory$UnitPlan,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$0_arc_scene_style_TextureRegionDrawable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$2_R_java_lang_CharSequence,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$1_arc_scene_style_TextureRegionDrawable_arc_scene_ui_Image,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$5_arc_scene_ui_layout_Table_arc_struct_Seq,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$7_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$6_mindustry_ai_UnitCommand,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$3_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$2_R_mindustry_type_UnitType,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "acceptUnitPayload", "(Lmindustry/gen/Unit;)Z" },
	{ "blends", "(I)Z" },
	{ "updatePayload", "()V" },
	{ "moveInPayload", "()Z" },
	{ "moveInPayload", "(Z)Z" },
	{ "moveOutPayload", "()V" },
	{ "dumpPayload", "()V" },
	{ "hasArrived", "()Z" },
	{ "drawPayload", "()V" },
	{ "lambda$onControlSelect$0", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "spawned", "()V" },
	{ "fraction", "()F" },
	{ "canSetCommand", "()Z" },
	{ "unit", "()Lmindustry/type/UnitType;" },
	{ "lambda$draw$0", "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)V" },
	{ "lambda$display$0", "(Larc/scene/style/TextureRegionDrawable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$2", "()Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/style/TextureRegionDrawable;Larc/scene/ui/Image;)V" },
	{ "lambda$buildConfiguration$5", "(Larc/scene/ui/layout/Table;Larc/struct/Seq;)V" },
	{ "lambda$buildConfiguration$7", "(Larc/scene/ui/ImageButton;Lmindustry/ai/UnitCommand;Lmindustry/type/UnitType;)V" },
	{ "lambda$buildConfiguration$6", "(Lmindustry/ai/UnitCommand;)V" },
	{ "lambda$buildConfiguration$3", "(Lmindustry/type/UnitType;)V" },
	{ "lambda$buildConfiguration$2", "()Lmindustry/type/UnitType;" },
};

static FieldMetadata fields[] {
	{ "commandPos", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild, F_commandPos), "Larc/math/geom/Vec2;", 1 },
	{ "command", &class_mindustry_ai_UnitCommand, offsetof(mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild, F_command), "Lmindustry/ai/UnitCommand;", 1 },
	{ "currentPlan", &class_int, offsetof(mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild, F_currentPlan), "I", 1 },
	{ "this$0", &class_mindustry_world_blocks_units_UnitFactory, offsetof(mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild, F_this$0), "Lmindustry/world/blocks/units/UnitFactory;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_world_blocks_units_UnitFactory, 0, "(Lmindustry/world/blocks/units/UnitFactory;)V", 1 },
	{ "fraction", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float, "()F", 1 },
	{ "canSetCommand", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_canSetCommand_R_boolean, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_canSetCommand_R_boolean, "()Z", 1 },
	{ "created", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_created, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_created, "()V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawSelect, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_drawSelect, "()V", 1 },
	{ "getCommandPosition", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getCommandPosition_R_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getCommandPosition_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "onCommand", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_onCommand_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_onCommand_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "display", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_draw, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_draw, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_updateTile, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_updateTile, "()V", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "status", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "unit", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_version_R_byte, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$acceptItem$0", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$acceptItem$0_mindustry_type_Item_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/Item;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$draw$0_mindustry_world_blocks_units_UnitFactory$UnitPlan, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$draw$0_mindustry_world_blocks_units_UnitFactory$UnitPlan, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)V", 4098 },
	{ "lambda$display$0", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$0_arc_scene_style_TextureRegionDrawable_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$0_arc_scene_style_TextureRegionDrawable_arc_scene_ui_layout_Table, "(Larc/scene/style/TextureRegionDrawable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$2", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$2_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$2_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$display$1", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$1_arc_scene_style_TextureRegionDrawable_arc_scene_ui_Image, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$display$1_arc_scene_style_TextureRegionDrawable_arc_scene_ui_Image, "(Larc/scene/style/TextureRegionDrawable;Larc/scene/ui/Image;)V", 4098 },
	{ "lambda$buildConfiguration$8", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$8_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$buildConfiguration$5", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$5_arc_scene_ui_layout_Table_arc_struct_Seq, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$5_arc_scene_ui_layout_Table_arc_struct_Seq, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;)V", 4098 },
	{ "lambda$buildConfiguration$7", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$7_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$7_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType, "(Larc/scene/ui/ImageButton;Lmindustry/ai/UnitCommand;Lmindustry/type/UnitType;)V", 4098 },
	{ "lambda$buildConfiguration$6", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$6_mindustry_ai_UnitCommand, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$6_mindustry_ai_UnitCommand, "(Lmindustry/ai/UnitCommand;)V", 4098 },
	{ "lambda$buildConfiguration$3", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$3_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$3_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 4098 },
	{ "lambda$buildConfiguration$4", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$4_mindustry_type_UnitType_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z", 4106 },
	{ "lambda$buildConfiguration$2", (intptr_t) M_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$2_R_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$2_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$1_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/type/UnitType;)Z", 4106 },
	{ "lambda$buildConfiguration$0", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$buildConfiguration$0_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_mindustry_type_UnitType, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Lmindustry/type/UnitType;", 4106 },
	{ "lambda$created$0", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_lambda$created$0_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z", 4106 },
};

Class class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitFactory$UnitFactoryBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_units_UnitBlock$UnitBuild,
		.size = sizeof(mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_units_UnitFactory,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 333,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild = registerClass(&class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild);

}

