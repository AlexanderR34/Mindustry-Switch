#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/ai/Pathfinder.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/util/Arrays.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild_invoke_java_lang_Runnable_1.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/Graphics_Cursor.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/gen/Builderc.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/String.h"
#include "mindustry/core/Control.h"
#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/world/blocks/ConstructBlock_1.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Enum.h"
#include "arc/util/io/Reads.h"
#include "mindustry/content/Blocks.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_world_blocks_ConstructBlock$ConstructBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_ConstructBlock$ConstructBuild *) object;
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
	if (self->F_prevBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prevBuild)->clazz)->markFunction)((jobject) self->F_prevBuild, mark, depth + 1);
	if (self->F_lastConfig)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastConfig)->clazz)->markFunction)((jobject) self->F_lastConfig, mark, depth + 1);
	if (self->F_lastBuilder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastBuilder)->clazz)->markFunction)((jobject) self->F_lastBuilder, mark, depth + 1);
	if (self->F_accumulator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_accumulator)->clazz)->markFunction)((jobject) self->F_accumulator, mark, depth + 1);
	if (self->F_totalAccumulator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_totalAccumulator)->clazz)->markFunction)((jobject) self->F_totalAccumulator, mark, depth + 1);
	if (self->F_itemsLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemsLeft)->clazz)->markFunction)((jobject) self->F_itemsLeft, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_ConstructBlock$ConstructBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_ConstructBlock$ConstructBuild_mindustry_world_blocks_ConstructBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock$ConstructBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(163);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	LINE_NUMBER(171);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:getDisplayName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"block.constructing"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayIcon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:getDisplayIcon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:checkSolid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_2;
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

jobject M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:getCursor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_hand;
	goto label_2;
label_1:;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_arrow;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_tapped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:tapped", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_mindustry_world_Block_isPlaceable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isPlaceable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(206);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_buildWasAutoPaused) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_isBuilding) != 0) goto label_3;
	}
	{
	LINE_NUMBER(207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_isBuilding = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(209);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[3].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastConfig;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_1:;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_ConstructBlock$ConstructBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	clinit_mindustry_world_blocks_ConstructBlock$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ConstructBlock$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(216);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(217);
	if (((jint)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_activeDeconstruct) == 0) goto label_5;
	}
	INST_DCONST(1);
	goto label_4;
label_5:;
	INST_DCONST(0);
	goto label_4;
label_3:;
	{
	LINE_NUMBER(218);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_4:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_ConstructBlock$ConstructBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	clinit_mindustry_world_blocks_ConstructBlock$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ConstructBlock$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 3: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_3:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:onDestroyed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_blockExplosionSmoke;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(235);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_entities_Effect_rubble_float_float_int(ctx, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}
label_2:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:updateTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(243);
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_remove])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_constructColor;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_activeDeconstruct) == 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	INST_FCONST(0);
label_4:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.2f)));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_constructColor = temp0;
	LINE_NUMBER(247);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_activeDeconstruct = (jint(0));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	jobject temp2 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(temp2))->F_rotate) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FCONST(0);
label_5:;
	POP_N(4); // Pop method args
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
label_2:;
	{
	LINE_NUMBER(259);
	jfloat temp0 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_ConstructBlock$ConstructBuild_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_ConstructBlock$ConstructBuild_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:construct", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(281);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_wasConstructing = (jint(1));
	LINE_NUMBER(282);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_activeDeconstruct = (jint(0));
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(285);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder = (jref) (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(288);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastConfig = (jref) (frame[4].o);
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	sp[2].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(296);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_15;
	}
label_14:;
	INST_FLOAD(3);
	goto label_16;
label_15:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[3].f), (jint(0)));
	sp[0].f = temp0;
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(298);
	frame[7].i = (jint(0));
	}
label_18:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(299);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_amount)))));
	frame[8].i = temp1;
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	jint temp2 = frame[7].i;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp2);
	jfloat temp6 = (jfloat((frame[8].i))) * (frame[6].f);
	jfloat temp7 = jfloat((frame[8].i));
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jfloat temp8 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp6, (temp7 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i)))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (temp5 + temp8);
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jint temp9 = frame[7].i;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jfloat temp10 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i))) + ((jfloat((frame[8].i))) * (frame[6].f))), (jfloat((frame[8].i))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = temp10;
	LINE_NUMBER(298);
	INST_IINC(7, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(304);
	if ((frame[2].o) == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_25;
	}
label_24:;
	INST_FLOAD(6);
	goto label_26;
label_25:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[6].f), (jint(1)));
	sp[0].f = temp0;
	sp += 1;
	}
label_26:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress) + (frame[6].f)));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(308);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(1)), -1)) >= 0) goto label_29;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_31;
	}
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(312);
	if ((frame[5].i) != 0) goto label_34;
	}
	{
	LINE_NUMBER(313);
	frame[8].i = (jint(0));
	}
label_36:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_34;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[8].i))) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(315);
	if ((frame[2].o) == nullptr) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[8].i)))))->F_item;
	sp[2].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[8].i))));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[8].i)))))->F_item;
	sp[2].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[8].i))));
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)) = (jint(0));
	goto label_38;
	}
label_40:;
	{
	LINE_NUMBER(319);
	frame[7].i = (jint(0));
	LINE_NUMBER(320);
	goto label_34;
	}
label_38:;
	{
	LINE_NUMBER(313);
	INST_IINC(8, 1);
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(326);
	if ((frame[7].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder;
	if (sp[0].o != nullptr) goto label_45;
	}
	{
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder = (jref) (frame[1].o);
	}
label_45:;
	{
	LINE_NUMBER(328);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_30;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[2].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder;
	jint temp0 = jbyte(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	SM_mindustry_world_blocks_ConstructBlock_constructed_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[4].o));
	}
label_30:;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:deconstruct", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(339);
	if (((jint)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_wasConstructing) == 0) goto label_3;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	}
label_3:;
	{
	LINE_NUMBER(344);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_wasConstructing = (jint(0));
	LINE_NUMBER(345);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_activeDeconstruct = (jint(1));
	LINE_NUMBER(346);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].f = ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_deconstructRefundMultiplier);
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(349);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder = (jref) (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	frame[5].o = sp[0].o;
	LINE_NUMBER(353);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(358);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	frame[6].f = temp0;
	LINE_NUMBER(360);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier) * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_amount)))));
	frame[8].i = temp0;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	jint temp1 = frame[7].i;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1);
	jfloat temp5 = ((frame[6].f) * (frame[4].f)) * (jfloat((frame[8].i)));
	jfloat temp6 = (frame[4].f) * (jfloat((frame[8].i)));
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp5, (temp6 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i)))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (temp4 + temp7);
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jint temp8 = frame[7].i;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jfloat temp9 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i))) + (((jfloat((frame[8].i))) * (frame[6].f)) * (frame[4].f))), (jfloat((frame[8].i))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = temp9;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	frame[9].i = (jint(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i)))));
	LINE_NUMBER(367);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_22;
	}
	INST_ILOAD(9);
	if ((--sp)->i <= 0) goto label_22;
	{
	LINE_NUMBER(368);
	if ((frame[2].o) == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_item;
	jint temp0 = (jint)((func_mindustry_type_Item_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_unlockedNowHost_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(369);
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[2].o)))->F_storageCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_item;
	jint temp2 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - temp2));
	frame[10].i = temp3;
	LINE_NUMBER(371);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_item;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (frame[10].i));
	}
label_27:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[10].i));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	jint temp3 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) - (jfloat((frame[10].i))));
	LINE_NUMBER(374);
	goto label_22;
	}
label_24:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) - (jfloat((frame[9].i))));
	}
label_22:;
	{
	LINE_NUMBER(360);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress) - (frame[3].f)));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(382);
	jfloat temp1 = (jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if ((floatCompare(temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_deconstructThreshold), 1)) <= 0) goto label_31;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(384);
	if ((frame[2].o) == nullptr) goto label_33;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_33;
	}
	{
	LINE_NUMBER(385);
	frame[7].i = (jint(0));
	}
label_35:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_33;
	}
	{
	LINE_NUMBER(386);
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp1 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_deconstructRefundMultiplier)));
	frame[8].i = temp2;
	LINE_NUMBER(387);
	jint temp3 = frame[8].i;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	frame[9].i = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_item;
	jint temp4 = (jint)((func_mindustry_type_Item_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_unlockedNowHost_R_boolean])(ctx, sp[0].o);
	if (temp4 == 0) goto label_39;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_item;
	jint temp0 = frame[9].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[2].o)))->F_storageCapacity;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[3].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_item;
	jint temp3 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, sp[3].o);
	jint temp4 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, (temp2 - temp3));
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp4);
	}
label_39:;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	ARRAY_ACCESS(jint, sp[0].o, (frame[7].i)) = (frame[8].i);
	LINE_NUMBER(385);
	INST_IINC(7, 1);
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder;
	if (sp[0].o != nullptr) goto label_42;
	}
	{
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder = (jref) (frame[1].o);
	}
label_42:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[2].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_lastBuilder;
	SM_mindustry_gen_Call_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_32:;
	LINE_NUMBER(399);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:checkRequired", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(402);
	frame[4].f = (frame[2].f);
	LINE_NUMBER(403);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(405);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))) != 0) goto label_9;
	}
	LINE_NUMBER(408);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(411);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_amount)))));
	frame[7].i = temp1;
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	frame[8].i = (jint(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[6].i)))));
	LINE_NUMBER(414);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_item;
	jint temp2 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp2 != 0) goto label_14;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_14;
	{
	LINE_NUMBER(415);
	frame[4].f = (jfloat(0));
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(416);
	if ((frame[8].i) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(418);
	jint temp0 = frame[8].i;
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_item;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[9].i = temp2;
	LINE_NUMBER(420);
	frame[10].f = ((jfloat((frame[9].i))) / (jfloat((frame[8].i))));
	LINE_NUMBER(423);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[4].f), ((frame[4].f) * (frame[10].f)));
	frame[4].f = temp3;
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	jint temp4 = frame[6].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp4)) - (jfloat((frame[9].i))));
	LINE_NUMBER(428);
	if ((frame[3].i) == 0) goto label_11;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_11;
	{
	LINE_NUMBER(429);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_item;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (frame[9].i));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	jint temp0 = frame[6].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (frame[9].i));
	}
label_11:;
	{
	LINE_NUMBER(405);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (frame[4].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_ConstructBlock$ConstructBuild_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:progress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:setConstruct", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(445);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(447);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_constructColor = (jfloat(0));
	LINE_NUMBER(448);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_wasConstructing = (jint(1));
	LINE_NUMBER(449);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(450);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous = (jref) (frame[1].o);
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_buildTime;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_buildCost = (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_buildCostMultiplier));
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_requirements;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_itemsLeft = (jref) sp[1].o;
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_requirements;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_accumulator = (jref) sp[1].o;
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_requirements;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_totalAccumulator = (jref) sp[1].o;
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	frame[3].o = sp[0].o;
	LINE_NUMBER(457);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	jint temp0 = frame[4].i;
	jfloat temp1 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp1 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_buildCostMultiplier)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(457);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(460);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:setDeconstruct", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(464);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(466);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_constructColor = (jfloat(1));
	LINE_NUMBER(467);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_wasConstructing = (jint(0));
	LINE_NUMBER(468);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous = (jref) (frame[1].o);
	LINE_NUMBER(469);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(1));
	LINE_NUMBER(470);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_buildTime;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_buildCost = (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_buildCostMultiplier));
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_requirements;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_itemsLeft = (jref) sp[1].o;
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_requirements;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_accumulator = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_requirements;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_totalAccumulator = (jref) sp[1].o;
	LINE_NUMBER(475);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_ConstructBlock$ConstructBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(485);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(486);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(487);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(488);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(491);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), (jint(-1)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(493);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(494);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i))));
	LINE_NUMBER(496);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i))));
	LINE_NUMBER(497);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(494);
	INST_IINC(2, 1);
	goto label_9;
	}
label_7:;
	LINE_NUMBER(500);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(504);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(506);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(507);
	jint temp2 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[4].i = temp2;
	LINE_NUMBER(508);
	jint temp3 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[5].i = temp3;
	LINE_NUMBER(510);
	if ((frame[5].i) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[5].i));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_accumulator = (jref) sp[1].o;
	LINE_NUMBER(512);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[5].i));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_totalAccumulator = (jref) sp[1].o;
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_itemsLeft = (jref) sp[1].o;
	LINE_NUMBER(514);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_accumulator;
	jint temp0 = frame[6].i;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(516);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_totalAccumulator;
	jint temp2 = frame[6].i;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	LINE_NUMBER(517);
	if ((frame[2].i) < (jint(1))) goto label_15;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_itemsLeft;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
label_15:;
	{
	LINE_NUMBER(514);
	INST_IINC(6, 1);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(523);
	if ((frame[3].i) == (jint(-1))) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, (frame[3].i));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	}
label_17:;
	{
	LINE_NUMBER(524);
	if ((frame[4].i) == (jint(-1))) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, (frame[4].i));
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_previous;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_buildTime;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK(sp[0].o))->F_buildCost = (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_buildCostMultiplier));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_ConstructBlock$ConstructBuild_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock$ConstructBuild:lambda$draw$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_constructColor));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_regionRotated1) != (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_regionRotated2) != (jint(-1))) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(262);
	frame[2].i = (jint(0));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(265);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_region = (jref) (frame[6].o);
	LINE_NUMBER(266);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_time = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	LINE_NUMBER(267);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_progress = ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_progress);
	LINE_NUMBER(269);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	jobject temp2 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(temp2))->F_rotate) == 0) goto label_14;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_15;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_regionRotated2) == (frame[2].i)) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_regionRotated1) != (frame[2].i)) goto label_14;
	}
label_15:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[0].o)))->F_current;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_visualRotationOffset);
	sp[0].f = temp1;
	sp += 1;
	goto label_16;
	}
label_14:;
	INST_FCONST(0);
label_16:;
	{
	sp -= 4;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(270);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(271);
	INST_IINC(2, 1);
	LINE_NUMBER(264);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_ConstructBlock$ConstructBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field prevBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastConfig
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastBuilder
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field accumulator
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field totalAccumulator
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field itemsLeft
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_ConstructBlock$ConstructBuild[] {
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
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
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkSolid_R_boolean,
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
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_progress_R_float,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayName_R_java_lang_String,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_onDestroyed,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_tapped,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block,
	(void *) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_lambda$draw$0,
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
	{ "construct", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;FLjava/lang/Object;)V" },
	{ "deconstruct", "(Lmindustry/gen/Unit;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;F)V" },
	{ "checkRequired", "(Lmindustry/world/modules/ItemModule;FZ)F" },
	{ "setConstruct", "(Lmindustry/world/Block;Lmindustry/world/Block;)V" },
	{ "setDeconstruct", "(Lmindustry/world/Block;)V" },
	{ "lambda$draw$0", "()V" },
};

static FieldMetadata fields[] {
	{ "current", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_current), "Lmindustry/world/Block;", 1 },
	{ "previous", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_previous), "Lmindustry/world/Block;", 1 },
	{ "prevBuild", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_prevBuild), "Larc/struct/Seq;", 1 },
	{ "progress", &class_float, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_progress), "F", 1 },
	{ "buildCost", &class_float, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_buildCost), "F", 1 },
	{ "lastConfig", &class_java_lang_Object, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_lastConfig), "Ljava/lang/Object;", 1 },
	{ "lastBuilder", &class_mindustry_gen_Unit, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_lastBuilder), "Lmindustry/gen/Unit;", 1 },
	{ "wasConstructing", &class_boolean, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_wasConstructing), "Z", 1 },
	{ "activeDeconstruct", &class_boolean, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_activeDeconstruct), "Z", 1 },
	{ "constructColor", &class_float, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_constructColor), "F", 1 },
	{ "accumulator", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_accumulator), "[F", 2 },
	{ "totalAccumulator", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_totalAccumulator), "[F", 2 },
	{ "itemsLeft", getArrayClass(&class_int, 1), offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_itemsLeft), "[I", 2 },
	{ "this$0", &class_mindustry_world_blocks_ConstructBlock, offsetof(mindustry_world_blocks_ConstructBlock$ConstructBuild, F_this$0), "Lmindustry/world/blocks/ConstructBlock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_ConstructBlock$ConstructBuild_mindustry_world_blocks_ConstructBlock, 0, "(Lmindustry/world/blocks/ConstructBlock;)V", 1 },
	{ "getDisplayName", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayName_R_java_lang_String, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDisplayIcon", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayIcon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_getDisplayIcon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "checkSolid", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkSolid_R_boolean, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkSolid_R_boolean, "()Z", 1 },
	{ "getCursor", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "tapped", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_tapped, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_tapped, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_onDestroyed, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_onDestroyed, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_updateTile, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_updateTile, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_draw, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_draw, "()V", 1 },
	{ "construct", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;FLjava/lang/Object;)V", 1 },
	{ "deconstruct", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float, "(Lmindustry/gen/Unit;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;F)V", 1 },
	{ "checkRequired", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_checkRequired_mindustry_world_modules_ItemModule_float_boolean_R_float, "(Lmindustry/world/modules/ItemModule;FZ)F", 2 },
	{ "progress", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_progress_R_float, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_progress_R_float, "()F", 1 },
	{ "setConstruct", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block, "(Lmindustry/world/Block;Lmindustry/world/Block;)V", 1 },
	{ "setDeconstruct", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_version_R_byte, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_ConstructBlock$ConstructBuild_lambda$draw$0, VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_world_blocks_ConstructBlock$ConstructBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/ConstructBlock$ConstructBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_ConstructBlock$ConstructBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_ConstructBlock$ConstructBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_ConstructBlock$ConstructBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_ConstructBlock$ConstructBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_ConstructBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 316,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_ConstructBlock$ConstructBuild = registerClass(&class_mindustry_world_blocks_ConstructBlock$ConstructBuild);

}

