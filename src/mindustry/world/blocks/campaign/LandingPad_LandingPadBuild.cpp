#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Prov_4.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Prov_3.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Prov_5.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Floatf_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/ItemSelection.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Liquid.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/Graphics_Cursor.h"
#include "mindustry/type/Item.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/world/blocks/campaign/LandingPad.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Boolf_4.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/liquid/LiquidBlock.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Cons2_1.h"
#include "mindustry/io/TypeIO.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_java_lang_Runnable_1.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Cons_5.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Cons_4.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild_invoke_arc_func_Cons_3.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CharSequence.h"
#include "arc/util/io/Reads.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) object;
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
	if (self->F_arriving)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arriving)->clazz)->markFunction)((jobject) self->F_arriving, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_mindustry_world_blocks_campaign_LandingPad(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_nextInt_R_int])(ctx, sp[1].o);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_priority = temp0;
	LINE_NUMBER(140);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(0));
	LINE_NUMBER(142);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer = (jfloat(0));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_handleLanding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:handleLanding", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(149);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(1));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_arriving = (jref) sp[1].o;
	LINE_NUMBER(151);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer = (jfloat(0));
	LINE_NUMBER(152);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_liquidRemoved = (jfloat(0));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_landSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[1].o))->F_landSoundVolume));
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp4 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp4 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importCooldownTimers;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(0)));
	}
label_7:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:accessible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditWorldProcessors) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_2;
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

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTimers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:updateTimers", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_campaign_LandingPad(ctx);
	jlong temp0 = (jlong)SF_mindustry_world_blocks_campaign_LandingPad_lastUpdateId;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if ((longCompare(temp0, ((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_updateId))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_world_blocks_campaign_LandingPad(ctx);
	SF_mindustry_world_blocks_campaign_LandingPad_lastUpdateId = ((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_updateId);
	LINE_NUMBER(169);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(172);
	frame[4].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))) / (jfloat(60.0f)));
	LINE_NUMBER(173);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].f = ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity))) / (frame[4].f));
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importCooldownTimers;
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float])(ctx, sp[0].o, (frame[3].o), (jfloat(0)), (((jfloat(1)) / (frame[5].f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(177);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(179);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importCooldownTimers;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, (frame[3].o), (jfloat(0)));
	}
label_13:;
	LINE_NUMBER(181);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(183);
	clinit_mindustry_world_blocks_campaign_LandingPad(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_campaign_LandingPad_waiting;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:draw", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_consumeLiquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_bottomColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(208);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, (temp2 - ((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_liquidPad)));
	LINE_NUMBER(209);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp3 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_consumeLiquid;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[2].o))->F_consumeLiquid;
	jfloat temp10 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_world_blocks_liquid_LiquidBlock_drawTiledFrames_int_float_float_float_float_float_float_mindustry_type_Liquid_float(ctx, temp3, temp4, temp5, temp6, temp7, temp8, temp9, sp[0].o, (temp10 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_liquidCapacity)));
	}
label_1:;
	{
	LINE_NUMBER(213);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(216);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer));
	frame[1].f = temp0;
	frame[2].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(217);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp1 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(218);
	frame[4].f = ((((jfloat(1)) - (frame[3].f)) * (jfloat(1.3f))) + (jfloat(1)));
	LINE_NUMBER(220);
	frame[5].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(221);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow4In;
	jfloat temp3 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[2].f));
	jfloat temp4 = jfloat(100.0f);
	jint temp5 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_id_R_int])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp5 + (jint(2))))), (jfloat(30.0f)));
	frame[6].f = (temp2 + (temp3 * (temp4 + temp6)));
	LINE_NUMBER(223);
	jfloat temp7 = frame[2].f;
	jfloat temp8 = jfloat(90.0f);
	jint temp9 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_id_R_int])(ctx, (frame[0].o));
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(temp9)), (jfloat(50.0f)));
	frame[7].f = (temp7 * (temp8 + temp10));
	LINE_NUMBER(225);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.001f)));
	LINE_NUMBER(227);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_engine;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(229);
	jfloat temp11 = jfloat(0.15f);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp12 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, (frame[1].f));
	jfloat temp13 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp12);
	frame[8].f = (temp11 + temp13);
	LINE_NUMBER(231);
	jfloat temp14 = frame[5].f;
	jfloat temp15 = frame[6].f;
	jint temp16 = 10;
	jfloat temp17 = (jfloat(25.0f)) * (((frame[8].f) + (frame[4].f)) - (jfloat(1)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0)));
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp14, temp15, temp16, temp17, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[3].f));
	LINE_NUMBER(234);
	frame[9].i = (jint(0));
	}
label_21:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_22;
	}
	{
	LINE_NUMBER(235);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[5].f), (frame[6].f), (jfloat(6.0f)), ((jfloat(40.0f)) * (((frame[8].f) + (frame[4].f)) - (jfloat(1)))), (((jfloat((frame[9].i))) * (jfloat(90.0f))) + (frame[7].f)));
	LINE_NUMBER(234);
	INST_IINC(9, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(238);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(240);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(129.0f)));
	LINE_NUMBER(242);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[4].f = (temp0 * temp1);
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	frame[9].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width))) * (frame[4].f));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	frame[10].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height))) * (frame[4].f));
	LINE_NUMBER(245);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[3].f));
	LINE_NUMBER(246);
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_shadow_float_float_float_float(ctx, temp2, temp3, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))), (frame[1].f));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, (frame[5].f), (frame[6].f), (frame[9].f), (frame[10].f), (frame[7].f));
	LINE_NUMBER(249);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = jfloat(225.0f);
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp5 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp4, (temp5 * (jfloat(250.0f))));
	LINE_NUMBER(251);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.0f)));
	LINE_NUMBER(252);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.22f)) * (frame[3].f)));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	jfloat temp6 = frame[5].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp7 = temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp8 = frame[6].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp7, (temp8 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[9].f), (frame[10].f), (frame[7].f));
	LINE_NUMBER(256);
	goto label_37;
	}
label_7:;
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown), (jfloat(0)), -1)) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_shadow_float_float_float_float(ctx, temp0, temp1, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))), ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown));
	LINE_NUMBER(259);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown));
	LINE_NUMBER(260);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown)));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_37:;
	{
	LINE_NUMBER(264);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:drawLight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightRadius;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown), (((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer) * (jfloat(1.5f))));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp3);
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, temp4);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:updateTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTimers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTimers])(ctx, (frame[0].o));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(277);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	LINE_NUMBER(278);
	frame[1].f = ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer);
	LINE_NUMBER(279);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_landParticleTimer = (((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_landParticleTimer) + (((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) / (jfloat(2))));
	LINE_NUMBER(282);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_landParticleTimer), (jfloat(1)), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(289);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_landParticleTimer = (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_arrivingTimer;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_arrivingTimer = (temp0 + (temp1 / ((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[1].o))->F_arrivalDuration)));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_consumeLiquidAmount;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (temp2 / ((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_arrivalDuration)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp3, (((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_consumeLiquidAmount) - ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_liquidRemoved)));
	frame[1].f = temp4;
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_liquidRemoved = (((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_liquidRemoved) + (frame[1].f));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[1].o))->F_consumeLiquid;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_coolingEffectChance;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp6 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer));
	jint temp7 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble((temp5 * temp6))));
	if (temp7 == 0) goto label_15;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_coolingEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	}
label_15:;
	{
	LINE_NUMBER(304);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer), (jfloat(1)), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[1].o))->F_consumeLiquid;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[2].o))->F_consumeLiquidAmount) - ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_liquidRemoved)));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_landEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(309);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (jfloat(3.0f)), (jfloat(3.0f)), (frame[0].o));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_produced_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_produced_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	LINE_NUMBER(315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	}
label_22:;
	{
	LINE_NUMBER(318);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving = (jref) (jobject(nullptr));
	LINE_NUMBER(319);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer = (jfloat(0));
	}
label_2:;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_26;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	sp += 1;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_29;
	}
label_28:;
	INST_ACONST_NULL();
	goto label_30;
label_29:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[-1].o))->F_config;
label_30:;
	POP_N(2); // Pop method args
	sp->i = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_dumpAccumulate_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_dumpAccumulate_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_26:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_cooldown;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_delta_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_cooldown = (temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[1].o))->F_cooldownTime)));
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_cooldown = temp2;
	}
label_31:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_34;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) != 0) goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(334);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown), (jfloat(0)), 1)) > 0) goto label_34;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	jfloat temp0 = (jfloat)((func_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_34;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importCooldownTimers;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, sp[1].o, (jfloat(0)));
	if ((floatCompare(temp0, (jfloat(1)), -1)) < 0) goto label_34;
	}
label_36:;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_gen_Call_landingPadLanded_mindustry_world_Tile(ctx, sp[0].o);
	goto label_34;
	}
label_37:;
	{
	LINE_NUMBER(341);
	clinit_mindustry_world_blocks_campaign_LandingPad(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_campaign_LandingPad_waiting;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[0].o));
	}
label_34:;
	LINE_NUMBER(345);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:isFake", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:drawSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawItemSelection_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawItemSelection_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:getCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_arrow;
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:shouldShowConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(370);
	((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:buildConfiguration", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[5].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[5].o))->F_selectionRows;
	sp[5].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[5].o))->F_selectionColumns));
	LINE_NUMBER(382);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(385);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_canRedirectExports_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:canRedirectExports", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:display", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(409);
	M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(411);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(414);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:acceptItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(459);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItem_arc_util_io_Reads_R_mindustry_type_Item(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_priority = temp0;
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_cooldown = temp1;
	LINE_NUMBER(464);
	if ((frame[2].i) < (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItem_arc_util_io_Reads_R_mindustry_type_Item(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_arriving = (jref) sp[1].o;
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_arrivingTimer = temp0;
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK(sp[0].o))->F_liquidRemoved = temp1;
	}
label_5:;
	LINE_NUMBER(469);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(473);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(474);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	SM_mindustry_io_TypeIO_writeItem_arc_util_io_Writes_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(475);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_priority));
	LINE_NUMBER(476);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_cooldown));
	LINE_NUMBER(478);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arriving;
	SM_mindustry_io_TypeIO_writeItem_arc_util_io_Writes_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(479);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_arrivingTimer));
	LINE_NUMBER(480);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_liquidRemoved));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$display$0_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$display$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(417);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) == 0) goto label_3;
	}
	{
	LINE_NUMBER(418);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"landingpad.legacy.disabled"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	if (sp[0].o != nullptr) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(423);
	frame[1].i = (jint(0));
	LINE_NUMBER(424);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(426);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_11;
	}
	goto label_8;
label_11:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_info;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	jfloat temp0 = (jfloat)((func_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp0;
	LINE_NUMBER(429);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_13;
	}
	goto label_8;
label_13:;
	{
	LINE_NUMBER(430);
	INST_IINC(1, 1);
	LINE_NUMBER(431);
	frame[2].f = ((frame[2].f) + (frame[5].f));
	LINE_NUMBER(432);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(434);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"landing.sources"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if ((frame[1].i) != 0) goto label_16;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))));
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ILOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[0].i);
	sp++;
label_17:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(435);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(436);
	sp[0].o = frame[3].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"landing.import"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	sp[4].o = (jobject)((func_mindustry_type_Item_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_type_Item_emoji_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((frame[2].f) * (jfloat(60.0f))))));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$buildConfiguration$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	jfloat temp0 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@sectors.redirect"_j));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$3_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$buildConfiguration$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
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

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$buildConfiguration$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(392);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_canRedirectExports_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_canRedirectExports_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination = (jref) sp[1].o;
	LINE_NUMBER(394);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[2].o));
	LINE_NUMBER(395);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(396);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	((func_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$0_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$buildConfiguration$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_config;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTile$1_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$updateTile$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(ctx);
	{
	LINE_NUMBER(341);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTile$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$updateTile$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.10000000149011612)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(285);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_podLandDust;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[1].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_angleTo_float_float_R_float])(ctx, sp[1].o, temp2, temp3);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(30.0f)));
	jfloat temp6 = temp4 + temp5;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_mapColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	jfloat temp7 = jfloat(1.5f);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.15f)));
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (temp7 + temp8));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp6, sp[1].o);
	}
label_1:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTimers$0_mindustry_type_Item_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$updateTimers$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, sp[0].o));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, sp[0].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	SM_mindustry_gen_Call_landingPadLanded_mindustry_world_Tile(ctx, sp[0].o);
	LINE_NUMBER(194);
	frame[4].i = ((jint)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[2].o)))->F_priority);
	LINE_NUMBER(195);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[2].o)))->F_priority = ((jint)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[3].o)))->F_priority);
	LINE_NUMBER(196);
	((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[3].o)))->F_priority = (frame[4].i);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTimers$2_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$updateTimers$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[0].o)))->F_priority)));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTimers$1_mindustry_type_Item_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild:lambda$updateTimers$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$LandingPadBuild *) NULL_CHECK((frame[1].o)))->F_config;
	if (sp[0].o == (frame[0].o)) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field config
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field arriving
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method config
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild[] {
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_buildConfiguration_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_handleLanding,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTimers,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_canRedirectExports_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$display$0_R_java_lang_CharSequence,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$3_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$2,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$0_R_mindustry_type_Item,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTile$0_mindustry_world_Tile,
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
	{ "handleLanding", "()V" },
	{ "accessible", "()Z" },
	{ "updateTimers", "()V" },
	{ "isFake", "()Z" },
	{ "canRedirectExports", "(Lmindustry/type/Sector;)Z" },
	{ "lambda$display$0", "()Ljava/lang/CharSequence;" },
	{ "lambda$buildConfiguration$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildConfiguration$3", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$buildConfiguration$2", "()V" },
	{ "lambda$buildConfiguration$0", "()Lmindustry/type/Item;" },
	{ "lambda$updateTile$0", "(Lmindustry/world/Tile;)V" },
};

static FieldMetadata fields[] {
	{ "config", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_config), "Lmindustry/type/Item;", 1 },
	{ "priority", &class_int, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_priority), "I", 1 },
	{ "cooldown", &class_float, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_cooldown), "F", 1 },
	{ "landParticleTimer", &class_float, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_landParticleTimer), "F", 1 },
	{ "arrivingTimer", &class_float, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_arrivingTimer), "F", 1 },
	{ "arriving", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_arriving), "Lmindustry/type/Item;", 1 },
	{ "liquidRemoved", &class_float, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_liquidRemoved), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_campaign_LandingPad, offsetof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild, F_this$0), "Lmindustry/world/blocks/campaign/LandingPad;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_mindustry_world_blocks_campaign_LandingPad, 0, "(Lmindustry/world/blocks/campaign/LandingPad;)V", 1 },
	{ "handleLanding", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_handleLanding, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_handleLanding, "()V", 1 },
	{ "accessible", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_accessible_R_boolean, "()Z", 1 },
	{ "updateTimers", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTimers, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTimers, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_draw, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_draw, "()V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawLight, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawLight, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTile, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_updateTile, "()V", 1 },
	{ "isFake", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_isFake_R_boolean, "()Z", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawSelect, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_drawSelect, "()V", 1 },
	{ "getCursor", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "shouldShowConfigure", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "canRedirectExports", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_canRedirectExports_mindustry_type_Sector_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_canRedirectExports_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 2 },
	{ "display", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_version_R_byte, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_version_R_byte, "()B", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "lambda$display$0", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$display$0_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$display$0_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$1_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildConfiguration$3", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$3_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$3_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$buildConfiguration$2", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$2, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$2, "()V", 4098 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$0_R_mindustry_type_Item, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$buildConfiguration$0_R_mindustry_type_Item, "()Lmindustry/type/Item;", 4098 },
	{ "lambda$updateTile$1", (intptr_t) SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTile$1_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTile$0_mindustry_world_Tile, VTABLE_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTile$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$updateTimers$0", (intptr_t) SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTimers$0_mindustry_type_Item_arc_struct_Seq, 0, "(Lmindustry/type/Item;Larc/struct/Seq;)V", 4106 },
	{ "lambda$updateTimers$2", (intptr_t) SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTimers$2_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_R_float, 0, "(Lmindustry/world/blocks/campaign/LandingPad$LandingPadBuild;)F", 4106 },
	{ "lambda$updateTimers$1", (intptr_t) SM_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_lambda$updateTimers$1_mindustry_type_Item_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild_R_boolean, 0, "(Lmindustry/type/Item;Lmindustry/world/blocks/campaign/LandingPad$LandingPadBuild;)Z", 4106 },
};

Class class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/LandingPad$LandingPadBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_campaign_LandingPad$LandingPadBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_campaign_LandingPad,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 321,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild = registerClass(&class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild);

}

