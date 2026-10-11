#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemTurretBuild.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret_BaseTurretBuild.h"
#include "arc/Events.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemEntry.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/defense/turrets/ReloadTurret_ReloadTurretBuild.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "java/util/Iterator.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemTurretBuild.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret.h"
#include "java/lang/Enum.h"
#include "mindustry/content/Items.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_2.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(ctx);
}

void init_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_mindustry_world_blocks_defense_turrets_ItemTurret(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_mindustry_world_blocks_defense_turrets_Turret(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_onProximityAdded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:onProximityAdded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	M_mindustry_gen_Building_onProximityAdded(ctx, (frame[0].o));
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_cheating_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[2].o))->F_ammoTypes;
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_struct_ObjectMap$Keys_next_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_next_R_java_lang_Object])(ctx, sp[2].o);
	((func_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_mindustry_type_Item, sp[2].o)));
	}
label_2:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$2(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_turrets_ItemTurret$2_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, sp[0].o))))->F_item;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
	goto label_4;
label_2:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_4:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:getAmmoContent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, sp[0].o))))->F_item;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoFraction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:getAmmoFraction", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	jfloat temp0 = jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 / (jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_maxAmmo))));
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:acceptStack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(136);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = jfloat((((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_maxAmmo) - ((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo)));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint((temp0 / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o))))->F_ammoMultiplier)))), (frame[2].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:handleStack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(144);
	((func_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	LINE_NUMBER(143);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:removeStack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:handleItem", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(158);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_pyratite;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(159);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_flameAmmo;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(162);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo) != 0) goto label_3;
	}
	{
	LINE_NUMBER(163);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_resupplyTurret;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(167);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo = (jint(((jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo))) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_ammoMultiplier))));
	LINE_NUMBER(171);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, sp[0].o));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[5].o)))->F_item;
	if (sp[0].o != (frame[2].o)) goto label_12;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = frame[5].o;
	((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK(sp[0].o))->F_amount = (jint(((jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK(sp[0].o))->F_amount))) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_ammoMultiplier))));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, sp[0].o, temp0, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}
label_12:;
	{
	LINE_NUMBER(171);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry);
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_mindustry_world_blocks_defense_turrets_ItemTurret_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, (frame[2].o), (jint(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_ammoMultiplier))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jfloat temp0 = jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o))))->F_ammoMultiplier);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp1, (jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_maxAmmo))), 1)) > 0) goto label_1;
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

jbyte M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o));
	LINE_NUMBER(201);
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, (frame[3].o)));
	LINE_NUMBER(202);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((frame[4].o)))->F_item;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(203);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((frame[4].o)))->F_amount));
	LINE_NUMBER(204);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(209);
	M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	{
		auto tb = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) frame[0].o;
		if (!tb->F_ammo) {
			clinit_arc_struct_Seq(ctx);
			tb->F_ammo = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
			init_arc_struct_Seq(ctx, (jobject) tb->F_ammo);
		}
		auto itb = (mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) frame[0].o;
		if (!itb->F_this$0) {
			itb->F_this$0 = (jref) ((mindustry_gen_Building *) frame[0].o)->F_block;
		}
		if (!tb->F_this$0) {
			tb->F_this$0 = (jref) ((mindustry_gen_Building *) frame[0].o)->F_block;
		}
	}
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (sp[0].o) {
		sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
	LINE_NUMBER(211);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo = (jint(0));
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(213);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp += 1;
	if ((frame[2].i) >= (jint(2))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, sp[0].o);
	sp++;
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, sp[1].i);
	frame[5].o = sp[0].o;
	LINE_NUMBER(215);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (!sp[0].o) sp[0].o = (jobject)((mindustry_gen_Building *) frame[0].o)->F_block;
	jint temp1 = sp[0].o ? (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((mindustry_world_blocks_defense_turrets_Turret *) sp[0].o)->F_maxAmmo)) : temp0;
	frame[6].i = temp1;
	LINE_NUMBER(218);
	if ((frame[5].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (!sp[0].o) sp[0].o = (jobject)((mindustry_gen_Building *) frame[0].o)->F_block;
	if (sp[0].o) {
		sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) sp[0].o)->F_ammoTypes;
		jint temp0 = sp[0].o ? (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o)) : 0;
		if (temp0 == 0) goto label_12;
	} else goto label_12;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo = (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo) + (frame[6].i));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry);
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (!sp[2].o) sp[2].o = (jobject)((mindustry_gen_Building *) frame[0].o)->F_block;
	if (sp[2].o && sp[0].o) {
		init_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry_mindustry_world_blocks_defense_turrets_ItemTurret_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, (frame[5].o), (frame[6].i));
		sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
	}
label_12:;
	{
	LINE_NUMBER(213);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(223);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild[] {
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
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
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean,
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
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_warmup_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_status_R_mindustry_world_meta_BlockStatus,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_onProximityAdded,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readSync_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_buildRotation_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_estimateDps_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild_updateCooling,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild_baseReloadSpeed_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canControl_R_boolean,
	(void *) M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoFraction_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isShooting_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isActive_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$2,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$0_mindustry_entities_bullet_BulletType_float_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$1_int_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findTarget$0_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$2_boolean_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$1_boolean_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$0_mindustry_gen_Unit_R_boolean,
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
	{ "range", "()F" },
	{ "buildRotation", "()F" },
	{ "estimateDps", "()F" },
	{ "updateCooling", "()V" },
	{ "ammoReloadMultiplier", "()F" },
	{ "baseReloadSpeed", "()F" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "isControlled", "()Z" },
	{ "canControl", "()Z" },
	{ "shouldAutoTarget", "()Z" },
	{ "getAmmoContent", "()Lmindustry/ctype/UnlockableContent;" },
	{ "getAmmoFraction", "()F" },
	{ "minRange", "()F" },
	{ "trackingRange", "()F" },
	{ "isShooting", "()Z" },
	{ "controlled", "()Z" },
	{ "logicControlled", "()Z" },
	{ "isActive", "()Z" },
	{ "targetPosition", "(Lmindustry/gen/Posc;)V" },
	{ "validateTarget", "()Z" },
	{ "canHeal", "()Z" },
	{ "findEnemy", "(F)Lmindustry/gen/Posc;" },
	{ "findTarget", "()V" },
	{ "turnToTarget", "(F)V" },
	{ "shouldTurn", "()Z" },
	{ "useAmmo", "()Lmindustry/entities/bullet/BulletType;" },
	{ "peekAmmo", "()Lmindustry/entities/bullet/BulletType;" },
	{ "hasAmmo", "()Z" },
	{ "charging", "()Z" },
	{ "handleReload", "()V" },
	{ "updateReload", "()V" },
	{ "updateShooting", "()V" },
	{ "shoot", "(Lmindustry/entities/bullet/BulletType;)V" },
	{ "bullet", "(Lmindustry/entities/bullet/BulletType;FFFLmindustry/entities/Mover;)V" },
	{ "handleBullet", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "activeSoundVolume", "()F" },
	{ "shouldActiveSound", "()Z" },
	{ "lambda$shoot$2", "()V" },
	{ "lambda$shoot$0", "(Lmindustry/entities/bullet/BulletType;FFFFLmindustry/entities/Mover;)V" },
	{ "lambda$shoot$1", "(ILmindustry/entities/bullet/BulletType;FFFLmindustry/entities/Mover;)V" },
	{ "lambda$findTarget$0", "(Lmindustry/gen/Building;)Z" },
	{ "lambda$findEnemy$2", "(ZLmindustry/gen/Building;)Z" },
	{ "lambda$findEnemy$1", "(ZLmindustry/gen/Unit;)Z" },
	{ "lambda$findEnemy$0", "(Lmindustry/gen/Unit;)Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_world_blocks_defense_turrets_ItemTurret, offsetof(mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild, F_this$0), "Lmindustry/world/blocks/defense/turrets/ItemTurret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_mindustry_world_blocks_defense_turrets_ItemTurret, 0, "(Lmindustry/world/blocks/defense/turrets/ItemTurret;)V", 1 },
	{ "onProximityAdded", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_onProximityAdded, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_onProximityAdded, "()V", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "getAmmoContent", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 1 },
	{ "getAmmoFraction", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoFraction_R_float, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_getAmmoFraction_R_float, "()F", 1 },
	{ "acceptStack", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I", 1 },
	{ "handleStack", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "removeStack", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "handleItem", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_version_R_byte, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
};

Class class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/ItemTurret$ItemTurretBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
		.size = sizeof(mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_ItemTurret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 354,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild = registerClass(&class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild);

}

