#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/distribution/MassDriver.h"
#include "mindustry/entities/Effect.h"
#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/util/Iterator.h"
#include "arc/util/Time.h"
#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild_invoke_java_lang_Runnable_1.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/MassDriverBolt.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/distribution/MassDriver_DriverState.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/RotBlock.h"
#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild_invoke_arc_func_Prov_1.h"
#include "arc/struct/OrderedSet.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Enum.h"
#include "arc/util/io/Reads.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/world/blocks/distribution/MassDriver_DriverBulletData.h"

extern "C" {


void mark_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) object;
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_waitingShooters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waitingShooters)->clazz)->markFunction)((jobject) self->F_waitingShooters, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_mindustry_world_blocks_distribution_MassDriver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(122);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(123);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(90.0f));
	LINE_NUMBER(124);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(0));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_waitingShooters = (jref) sp[1].o;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_buildRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:buildRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:currentShooter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Building, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:updateTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[1].o = sp[0].o;
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(143);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	}
label_3:;
	{
	LINE_NUMBER(148);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_edelta_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_reload))));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter = temp2;
	}
label_5:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(155);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_shooterValid_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_shooterValid_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	}
label_8:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jint temp2 = temp0 - temp1;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp2 < ((jint)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_minDistribute)) goto label_12;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_accepting;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(164);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_shooting;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_accepting;
	if (sp[0].o != sp[1].o) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dumpAccumulate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dumpAccumulate_R_boolean])(ctx, (frame[0].o));
	}
label_16:;
	{
	LINE_NUMBER(175);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), 1)) > 0) goto label_17;
	}
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_accepting;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jint temp2 = temp0 - temp1;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp2 >= ((jint)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_minDistribute)) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}
label_22:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_angleTo_arc_math_geom_Position_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	goto label_24;
	}
label_19:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_shooting;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(190);
	if ((frame[2].i) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jint temp2 = temp0 - temp1;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp2 < ((jint)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_minDistribute)) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(195);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	LINE_NUMBER(198);
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp1 < ((jint)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_minDistribute)) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	LINE_NUMBER(199);
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jint temp2 = temp0 - temp1;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp2 < ((jint)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_minDistribute)) goto label_24;
	}
	{
	LINE_NUMBER(201);
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, (frame[1].o)));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[5].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(204);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter), (jfloat(1,000000e-04f)), 1)) > 0) goto label_24;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = frame[4].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[5].o));
	if (sp[0].o != (frame[0].o)) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[5].o)))->F_state;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_accepting;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = jfloat(2);
	LINE_NUMBER(212);
	jint temp3 = (jint)SM_arc_math_Angles_near_float_float_float_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 == 0) goto label_24;
	}
	{
	jint temp0 = (jint)SM_arc_math_Angles_near_float_float_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[5].o)))->F_rotation), ((frame[4].f) + (jfloat(180.0f))), (jfloat(2)));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(214);
	((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_fire_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_fire_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_bulletLifetime) / ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dst_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[5].o));
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 / (((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_bulletSpeed) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale))));
	frame[6].f = temp2;
	LINE_NUMBER(216);
	jfloat temp3 = frame[6].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp3, sp[0].o);
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_24:;
	LINE_NUMBER(227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter)));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_1:;
	{
	LINE_NUMBER(232);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_baseRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(239);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(50.0f)));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp2 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = temp2 * ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_knockback);
	LINE_NUMBER(242);
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, temp3);
	jfloat temp5 = temp0 + temp4;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = temp5 - (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) / (jint(2)))));
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp9 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = temp9 * ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_knockback);
	LINE_NUMBER(243);
	jfloat temp11 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp8, temp10);
	jfloat temp12 = temp7 + temp11;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp13 = temp12 - (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) / (jint(2)))));
	jfloat temp14 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	LINE_NUMBER(241);
	SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp6, temp13, temp14);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp15 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp16 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp17 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp18 = temp17 * ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_knockback);
	LINE_NUMBER(245);
	jfloat temp19 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp16, temp18);
	jfloat temp20 = temp15 + temp19;
	jfloat temp21 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp22 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp23 = (jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp24 = temp23 * ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_knockback);
	LINE_NUMBER(246);
	jfloat temp25 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp22, temp24);
	jfloat temp26 = temp21 + temp25;
	jfloat temp27 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	LINE_NUMBER(244);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp20, temp26, temp27);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:drawConfigure", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(6.0f)), (jfloat(1)));
	frame[1].f = temp0;
	LINE_NUMBER(253);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(254);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(255);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp3 = (((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[1].f)) - (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp1, temp2, temp3, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_iterator_R_arc_struct_OrderedSet$OrderedSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp2 = (((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[1].f)) - (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(259);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) + (frame[1].f);
	jfloat temp8 = (jfloat(4.0f)) + (frame[1].f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color(ctx, temp3, temp4, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(260);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[2].o = sp[0].o;
	LINE_NUMBER(264);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jfloat temp2 = (((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[1].f)) - (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(265);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float(ctx, temp3, temp4, temp5, temp6, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) + (frame[1].f)), ((jfloat(4.0f)) + (frame[1].f)));
	}
label_10:;
	{
	LINE_NUMBER(268);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_range;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(273);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(274);
	if (((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link) != (jint(-1))) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_deselect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_deselect])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link;
	jint temp1 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	if (temp0 != temp1) goto label_5;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_range), 1)) > 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:acceptItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_fire_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:fire", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(1));
	LINE_NUMBER(300);
	sp[0].o = ((jobject) &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, sp[0].o));
	LINE_NUMBER(301);
	((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_from = (jref) (frame[0].o);
	LINE_NUMBER(302);
	((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to = (jref) (frame[1].o);
	LINE_NUMBER(303);
	frame[3].i = (jint(0));
	LINE_NUMBER(304);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[4].i));
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity) - (frame[3].i)));
	frame[5].i = temp1;
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_items;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (frame[5].i);
	LINE_NUMBER(307);
	frame[3].i = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[4].i));
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (frame[5].i));
	LINE_NUMBER(304);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_bullet;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = frame[4].f;
	sp[3].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[3].o))->F_translation;
	LINE_NUMBER(314);
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp2, temp3);
	jfloat temp5 = temp1 + temp4;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp7 = frame[4].f;
	sp[3].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp7, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[3].o))->F_translation));
	jfloat temp9 = temp6 + temp8;
	jfloat temp10 = frame[4].f;
	jfloat temp11 = (jfloat((frame[3].i))) / (jfloat(2));
	sp[3].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp12 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[3].o))->F_bulletSpeed) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale);
	sp[3].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp13 = ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[3].o))->F_bulletLifetime) / ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale);
	sp[3].o = frame[2].o;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_MassDriverBolt_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_MassDriverBolt_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, temp5, temp9, temp10, temp11, temp12, temp13, sp[3].o);
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_shootEffect;
	jfloat temp14 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp15 = frame[4].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp16 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp15, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_translation));
	jfloat temp17 = temp14 + temp16;
	jfloat temp18 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp19 = frame[4].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp20 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp19, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_translation));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp17, (temp18 + temp20), (frame[4].f));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_smokeEffect;
	jfloat temp21 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp22 = frame[4].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp23 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp22, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_translation));
	jfloat temp24 = temp21 + temp23;
	jfloat temp25 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp26 = frame[4].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp27 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp26, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_translation));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp24, (temp25 + temp27), (frame[4].f));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp28 = (jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_shake;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp28, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_shake), (frame[0].o));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_shootSound;
	jfloat temp29 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp30 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp31 = jfloat(1);
	jfloat temp32 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.2f)));
	jfloat temp33 = temp31 + temp32;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp34 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp29, temp30, temp33, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_shootSoundVolume));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_handlePayload_mindustry_gen_Bullet_mindustry_world_blocks_distribution_MassDriver$DriverBulletData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:handlePayload", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(329);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity) * (jint(2))) - (frame[3].i)));
	frame[5].i = temp1;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[4].i));
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (frame[5].i));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_items;
	jint temp2 = frame[4].i;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp2)) - (frame[5].i));
	LINE_NUMBER(333);
	frame[3].i = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(335);
	jint temp5 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp5 < (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity) * (jint(2)))) goto label_9;
	}
	LINE_NUMBER(336);
	goto label_3;
label_9:;
	{
	LINE_NUMBER(329);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_shake;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_shake), (frame[0].o));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_receiveEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_receiveSound;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.2f)));
	jfloat temp5 = temp3 + temp4;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp6 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp1, temp2, temp5, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[1].o))->F_shootSoundVolume));
	LINE_NUMBER(344);
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(1));
	LINE_NUMBER(345);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[1].o));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_shooterValid_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:shooterValid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(349);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[2].o)))->F_link;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_pos_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:linkValid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	if (((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link) != (jint(-1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(354);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:config", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(365);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(366);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	LINE_NUMBER(367);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(368);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$DriverState_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$DriverState_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(373);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp1;
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_all;
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp2));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_arc_math_geom_Point2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_lambda$updateTile$0_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild:lambda$updateTile$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK((frame[1].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_blocks_distribution_MassDriver$DriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_MassDriver$DriverState_idle;
	((mindustry_world_blocks_distribution_MassDriver$MassDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild[] {
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
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_version_R_byte,
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
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
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
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_buildRotation_R_float,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_fire_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_handlePayload_mindustry_gen_Bullet_mindustry_world_blocks_distribution_MassDriver$DriverBulletData,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_shooterValid_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_arc_math_geom_Point2,
	(void *) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_lambda$updateTile$0_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild,
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
	{ "buildRotation", "()F" },
	{ "currentShooter", "()Lmindustry/gen/Building;" },
	{ "fire", "(Lmindustry/world/blocks/distribution/MassDriver$MassDriverBuild;)V" },
	{ "handlePayload", "(Lmindustry/gen/Bullet;Lmindustry/world/blocks/distribution/MassDriver$DriverBulletData;)V" },
	{ "shooterValid", "(Lmindustry/gen/Building;)Z" },
	{ "linkValid", "()Z" },
	{ "config", "()Larc/math/geom/Point2;" },
	{ "lambda$updateTile$0", "(Lmindustry/world/blocks/distribution/MassDriver$MassDriverBuild;)V" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_RotBlock, };

static FieldMetadata fields[] {
	{ "link", &class_int, offsetof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, F_link), "I", 1 },
	{ "rotation", &class_float, offsetof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, F_rotation), "F", 1 },
	{ "reloadCounter", &class_float, offsetof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, F_reloadCounter), "F", 1 },
	{ "state", &class_mindustry_world_blocks_distribution_MassDriver$DriverState, offsetof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, F_state), "Lmindustry/world/blocks/distribution/MassDriver$DriverState;", 1 },
	{ "waitingShooters", &class_arc_struct_OrderedSet, offsetof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, F_waitingShooters), "Larc/struct/OrderedSet;", 1 },
	{ "this$0", &class_mindustry_world_blocks_distribution_MassDriver, offsetof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, F_this$0), "Lmindustry/world/blocks/distribution/MassDriver;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_mindustry_world_blocks_distribution_MassDriver, 0, "(Lmindustry/world/blocks/distribution/MassDriver;)V", 1 },
	{ "buildRotation", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_buildRotation_R_float, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_buildRotation_R_float, "()F", 1 },
	{ "currentShooter", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_currentShooter_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_updateTile, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_updateTile, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_draw, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_draw, "()V", 1 },
	{ "drawConfigure", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_drawConfigure, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_drawConfigure, "()V", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "fire", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_fire_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_fire_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, "(Lmindustry/world/blocks/distribution/MassDriver$MassDriverBuild;)V", 4 },
	{ "handlePayload", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_handlePayload_mindustry_gen_Bullet_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_handlePayload_mindustry_gen_Bullet_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, "(Lmindustry/gen/Bullet;Lmindustry/world/blocks/distribution/MassDriver$DriverBulletData;)V", 1 },
	{ "shooterValid", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_shooterValid_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_shooterValid_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4 },
	{ "linkValid", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_linkValid_R_boolean, "()Z", 4 },
	{ "config", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_arc_math_geom_Point2, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_arc_math_geom_Point2, "()Larc/math/geom/Point2;", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_lambda$updateTile$0_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_lambda$updateTile$0_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild, "(Lmindustry/world/blocks/distribution/MassDriver$MassDriverBuild;)V", 4098 },
};

Class class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/MassDriver$MassDriverBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_distribution_MassDriver$MassDriverBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_distribution_MassDriver,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 318,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild = registerClass(&class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild);

}

