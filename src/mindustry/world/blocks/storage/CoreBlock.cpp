#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "arc/math/Interp_Pow.h"
#include "mindustry/gen/Musics.h"
#include "arc/func/Boolp.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Cons_2.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Func_1.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Cons_3.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "arc/Settings.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/math/Interp.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_java_lang_Runnable_1.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Boolf_4.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Floatp_1.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_mindustry_world_meta_StatValue_1.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/world/blocks/storage/StorageBlock.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/core/UI.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Boolp_1.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Prov_2.h"
#include "mindustry/world/blocks/storage/CoreBlock_invoke_arc_func_Prov_3.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jfloat SF_mindustry_world_blocks_storage_CoreBlock_cloudScaling;
jfloat SF_mindustry_world_blocks_storage_CoreBlock_cfinScl;
jfloat SF_mindustry_world_blocks_storage_CoreBlock_cfinOffset;
jfloat SF_mindustry_world_blocks_storage_CoreBlock_calphaFinOffset;
jfloat SF_mindustry_world_blocks_storage_CoreBlock_cloudAlpha;
jobject SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas;
jobject SF_mindustry_world_blocks_storage_CoreBlock_nextItems;
jobject SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes;

void mark_mindustry_world_blocks_storage_CoreBlock(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas, mark, depth + 1);
		if (SF_mindustry_world_blocks_storage_CoreBlock_nextItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_storage_CoreBlock_nextItems)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_storage_CoreBlock_nextItems, mark, depth + 1);
		if (SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_storage_StorageBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_storage_CoreBlock *) object;
	if (self->F_thruster1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thruster1)->clazz)->markFunction)((jobject) self->F_thruster1, mark, depth + 1);
	if (self->F_thruster2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thruster2)->clazz)->markFunction)((jobject) self->F_thruster2, mark, depth + 1);
	if (self->F_unitType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitType)->clazz)->markFunction)((jobject) self->F_unitType, mark, depth + 1);
	if (self->F_landMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_landMusic)->clazz)->markFunction)((jobject) self->F_landMusic, mark, depth + 1);
	if (self->F_launchSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchSound)->clazz)->markFunction)((jobject) self->F_launchSound, mark, depth + 1);
	if (self->F_landSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_landSound)->clazz)->markFunction)((jobject) self->F_landSound, mark, depth + 1);
	if (self->F_launchEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchEffect)->clazz)->markFunction)((jobject) self->F_launchEffect, mark, depth + 1);
	if (self->F_landZoomInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_landZoomInterp)->clazz)->markFunction)((jobject) self->F_landZoomInterp, mark, depth + 1);
}

void init_mindustry_world_blocks_storage_CoreBlock_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	init_mindustry_world_blocks_storage_StorageBlock_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(48);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_thrusterLength = (jfloat(3.5f));
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_thrusterOffset = (jfloat(0));
	LINE_NUMBER(51);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_allowSpawn = (jint(1));
	LINE_NUMBER(54);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_incinerateNonBuildable = (jint(0));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_unitType = (jref) sp[1].o;
	LINE_NUMBER(57);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_landDuration = (jfloat(160.0f));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Musics(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Musics_land;
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landMusic = (jref) sp[1].o;
	LINE_NUMBER(59);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_launchSoundVolume = (jfloat(1));
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_landSoundVolume = (jfloat(1));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_coreLaunch;
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_launchSound = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_coreLand;
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landSound = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_launch;
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_launchEffect = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow3;
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landZoomInterp = (jref) sp[1].o;
	LINE_NUMBER(65);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_landZoomFrom = (jfloat(0.02f));
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_landZoomTo = (jfloat(4.0f));
	LINE_NUMBER(67);
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_captureInvicibility = (jfloat(900.0f));
	LINE_NUMBER(72);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(73);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(74);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(75);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_alwaysAllowDeposit = (jint(1));
	LINE_NUMBER(76);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(2));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(78);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unitCapModifier = (10);
	LINE_NUMBER(79);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sync = (jint(0));
	LINE_NUMBER(80);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDisabled = (jint(0));
	LINE_NUMBER(81);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_canOverdrive = (jint(0));
	LINE_NUMBER(82);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_commandable = (jint(1));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(84);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(0));
	LINE_NUMBER(85);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDynamic = (jint(1));
	LINE_NUMBER(86);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowedInPayloads = (jint(0));
	LINE_NUMBER(89);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_replaceable = (jint(0));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionCore;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroySound = (jref) sp[1].o;
	LINE_NUMBER(91);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroySoundVolume = (jfloat(1.6f));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_storage_CoreBlock_playerSpawn_mindustry_world_Tile_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:playerSpawn", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(96);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, (frame[3].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	frame[3].o = sp[0].o;
	LINE_NUMBER(99);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_wasVisible) == 0) goto label_5;
	}
	{
	LINE_NUMBER(100);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(103);
	((func_mindustry_gen_Player_set_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_set_arc_math_geom_Position])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_mounts;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(109);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_reload = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[1].o))->F_reload);
	LINE_NUMBER(108);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(111);
	((func_mindustry_gen_Unit_set_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_set_arc_math_geom_Position])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(112);
	((func_mindustry_gen_Unit_rotation_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_rotation_float])(ctx, (frame[4].o), (jfloat(90.0f)));
	LINE_NUMBER(113);
	((func_mindustry_gen_Unit_impulse_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_impulse_float_float])(ctx, (frame[4].o), (jfloat(0)), (jfloat(3.0f)));
	LINE_NUMBER(114);
	((func_mindustry_gen_Unit_spawnedByCore_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_spawnedByCore_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(115);
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(116);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[4].o));
	}
label_8:;
	{
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	LINE_NUMBER(120);
	((func_mindustry_type_UnitType_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_UnitType_unlock])(ctx, (frame[3].o));
	}
label_20:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:setStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_unitType;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_mindustry_world_meta_StatValue_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_mindustry_world_meta_StatValue_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_mindustry_world_meta_StatValue_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"capacity"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Func_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_storage_CoreBlock_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius = ((jfloat(30.0f)) + ((jfloat(20.0f)) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_fogRadius), ((jint(((((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius) / (jfloat(8.0f))) * (jfloat(3.0f))))) + (13)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fogRadius = temp0;
	LINE_NUMBER(160);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_emitLight = (jint(1));
	LINE_NUMBER(162);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_postInit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:postInit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	M_mindustry_world_Block_postInit(ctx, (frame[0].o));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_unitType;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_shownPlanets;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_shownPlanets;
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock_canBreak_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:canBreak", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock_canReplace_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:canReplace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)) goto label_2;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:canPlaceOn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(187);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(195);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempTiles;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(200);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier));
	if (temp0 != 0) goto label_9;
	}
label_8:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (temp0 <= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	if (((jint)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_requiresCoreZone) == 0) goto label_11;
	}
	{
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempTiles;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
label_11:;
	INST_ICONST(1);
	goto label_12;
label_10:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:placeBegan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(208);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeEffect;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size))));
	LINE_NUMBER(211);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_upgradeCore;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(212);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_upgradeCoreBloom;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size))));
	LINE_NUMBER(215);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_nextItems;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_nextItems;
	((func_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(221);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	SF_mindustry_world_blocks_storage_CoreBlock_nextItems = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(224);
	clinit_mindustry_game_EventType$BlockBuildEndEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildEndEvent);
	sp[1].o = frame[1].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	init_mindustry_game_EventType$BlockBuildEndEvent_mindustry_world_Tile_mindustry_gen_Unit_mindustry_game_Team_boolean_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jint(0)), (jobject(nullptr)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:beforePlaceBegan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	sp[0].o = (jobject)((func_mindustry_world_modules_ItemModule_copy_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_copy_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_4;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[1].o = (jobject)SM_mindustry_type_ItemStack_mult_Array1_mindustry_type_ItemStack_float_R_Array1_mindustry_type_ItemStack(ctx, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier));
	((func_mindustry_world_modules_ItemModule_remove_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_Array1_mindustry_type_ItemStack])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(237);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	SF_mindustry_world_blocks_storage_CoreBlock_nextItems = (frame[3].o);
	}
label_1:;
	LINE_NUMBER(239);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:drawPlace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	LINE_NUMBER(248);
	sp += 2;
	if (((jint)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_isFirstTier) == 0) goto label_5;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"bar.corefloor"_j));
	sp += 1;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(251);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier));
	if (temp0 != 0) goto label_9;
	}
label_8:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(252);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"bar.corereq"_j));
	sp += 1;
	goto label_7;
	}
label_10:;
	LINE_NUMBER(253);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"bar.noresources"_j));
label_7:;
	{
	sp -= 3;
	LINE_NUMBER(247);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i));
	}
label_2:;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_storage_CoreBlock_lambda$canPlaceOn$1_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$canPlaceOn$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_allowCorePlacement);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_storage_CoreBlock_lambda$canPlaceOn$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$canPlaceOn$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_allowCorePlacement) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setBars$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(148);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$3_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setBars$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = jfloat(((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	jint temp3 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (temp1 / (temp2 * (jfloat(temp3))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	{
	LINE_NUMBER(150);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setBars$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(149);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.capacity"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setStats$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setStats$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_unitType;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"?"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatBordert;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$4_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setStats$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_unitType;
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_unlockedNow_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setStats$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_unitType;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:lambda$setStats$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_unitType;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"console"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[0].o)))->F_unitType;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_storage_CoreBlock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_storage_StorageBlock(ctx);
	SF_mindustry_world_blocks_storage_CoreBlock_cloudScaling = jfloat(1700.0f);
	SF_mindustry_world_blocks_storage_CoreBlock_cfinScl = jfloat(-2.0f);
	SF_mindustry_world_blocks_storage_CoreBlock_cfinOffset = jfloat(0.3f);
	SF_mindustry_world_blocks_storage_CoreBlock_calphaFinOffset = jfloat(0.25f);
	SF_mindustry_world_blocks_storage_CoreBlock_cloudAlpha = jfloat(0.81f);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject) createArray(ctx, &class_float, (6));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.5f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0.1f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(0));
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject) createArray(ctx, &class_float, (14));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0.3f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_storage_CoreBlock[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_init,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_blocks_storage_StorageBlock_outputsItems_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$4_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$3,
	(void *) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$2_arc_scene_ui_layout_Table,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "lambda$setStats$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setStats$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setStats$4", "()Z" },
	{ "lambda$setStats$3", "()V" },
	{ "lambda$setStats$2", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
};

static FieldMetadata fields[] {
	{ "cloudScaling", &class_float, (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_cloudScaling, "F", 25 },
	{ "cfinScl", &class_float, (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_cfinScl, "F", 25 },
	{ "cfinOffset", &class_float, (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_cfinOffset, "F", 25 },
	{ "calphaFinOffset", &class_float, (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_calphaFinOffset, "F", 25 },
	{ "cloudAlpha", &class_float, (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_cloudAlpha, "F", 25 },
	{ "cloudAlphas", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas, "[F", 25 },
	{ "nextItems", &class_mindustry_world_modules_ItemModule, (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_nextItems, "Lmindustry/world/modules/ItemModule;", 10 },
	{ "thrusterSizes", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes, "[F", 25 },
	{ "thruster1", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_storage_CoreBlock, F_thruster1), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "thruster2", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_storage_CoreBlock, F_thruster2), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "thrusterLength", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_thrusterLength), "F", 1 },
	{ "thrusterOffset", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_thrusterOffset), "F", 1 },
	{ "isFirstTier", &class_boolean, offsetof(mindustry_world_blocks_storage_CoreBlock, F_isFirstTier), "Z", 1 },
	{ "allowSpawn", &class_boolean, offsetof(mindustry_world_blocks_storage_CoreBlock, F_allowSpawn), "Z", 1 },
	{ "requiresCoreZone", &class_boolean, offsetof(mindustry_world_blocks_storage_CoreBlock, F_requiresCoreZone), "Z", 1 },
	{ "incinerateNonBuildable", &class_boolean, offsetof(mindustry_world_blocks_storage_CoreBlock, F_incinerateNonBuildable), "Z", 1 },
	{ "unitType", &class_mindustry_type_UnitType, offsetof(mindustry_world_blocks_storage_CoreBlock, F_unitType), "Lmindustry/type/UnitType;", 1 },
	{ "landDuration", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landDuration), "F", 1 },
	{ "landMusic", &class_arc_audio_Music, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landMusic), "Larc/audio/Music;", 1 },
	{ "launchSoundVolume", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_launchSoundVolume), "F", 1 },
	{ "landSoundVolume", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landSoundVolume), "F", 1 },
	{ "launchSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_storage_CoreBlock, F_launchSound), "Larc/audio/Sound;", 1 },
	{ "landSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landSound), "Larc/audio/Sound;", 1 },
	{ "launchEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_storage_CoreBlock, F_launchEffect), "Lmindustry/entities/Effect;", 1 },
	{ "landZoomInterp", &class_arc_math_Interp, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landZoomInterp), "Larc/math/Interp;", 1 },
	{ "landZoomFrom", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landZoomFrom), "F", 1 },
	{ "landZoomTo", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_landZoomTo), "F", 1 },
	{ "captureInvicibility", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock, F_captureInvicibility), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_storage_CoreBlock_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "playerSpawn", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_playerSpawn_mindustry_world_Tile_mindustry_gen_Player, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Player;)V", 9 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_setStats, VTABLE_mindustry_world_blocks_storage_CoreBlock_setStats, "()V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_setBars, VTABLE_mindustry_world_blocks_storage_CoreBlock_setBars, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_init, VTABLE_mindustry_world_blocks_storage_CoreBlock_init, "()V", 1 },
	{ "postInit", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_postInit, VTABLE_mindustry_world_blocks_storage_CoreBlock_postInit, "()V", 1 },
	{ "canBreak", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_canBreak_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock_canBreak_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "canReplace", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_canReplace_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock_canReplace_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 1 },
	{ "canPlaceOn", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z", 1 },
	{ "placeBegan", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_storage_CoreBlock_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V", 1 },
	{ "beforePlaceBegan", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block, VTABLE_mindustry_world_blocks_storage_CoreBlock_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block, "(Lmindustry/world/Tile;Lmindustry/world/Block;)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "lambda$canPlaceOn$1", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_lambda$canPlaceOn$1_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$canPlaceOn$0", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_lambda$canPlaceOn$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$setBars$0", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_mindustry_ui_Bar, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$setBars$3", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$3_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)F", 4106 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock_lambda$setBars$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_java_lang_CharSequence, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$0_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$1", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$1_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$4", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$4_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$4_R_boolean, "()Z", 4098 },
	{ "lambda$setStats$3", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$3, VTABLE_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$3, "()V", 4098 },
	{ "lambda$setStats$2", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$2_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_storage_CoreBlock_lambda$setStats$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_storage_CoreBlock, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_storage_CoreBlock{
		.nativeName = (intptr_t) "mindustry/world/blocks/storage/CoreBlock",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_storage_StorageBlock,
		.size = sizeof(mindustry_world_blocks_storage_CoreBlock),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_storage_CoreBlock,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_storage_CoreBlock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_storage_CoreBlock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 194,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_storage_CoreBlock = registerClass(&class_mindustry_world_blocks_storage_CoreBlock);

}
