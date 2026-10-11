#include "mindustry/type/CellLiquid.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "arc/Events.h"
#include "mindustry/game/Rules.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/type/CellLiquid.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/Puddles.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Puddle.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {


void mark_mindustry_type_CellLiquid(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_Liquid(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_CellLiquid *) object;
	if (self->F_colorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorFrom)->clazz)->markFunction)((jobject) self->F_colorFrom, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_spreadTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spreadTarget)->clazz)->markFunction)((jobject) self->F_spreadTarget, mark, depth + 1);
}

void clinit_mindustry_type_CellLiquid(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Liquid(ctx);
}

void init_mindustry_type_CellLiquid_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/CellLiquid:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_CellLiquid(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(28);
	init_mindustry_type_Liquid_java_lang_String_arc_graphics_Color(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_CellLiquid *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_CellLiquid *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(22);
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_cells = (6);
	LINE_NUMBER(25);
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_maxSpread = (jfloat(0.75f));
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadConversion = (jfloat(1.2f));
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadDamage = (jfloat(0.11f));
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_removeScaling = (jfloat(0.25f));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_CellLiquid_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/CellLiquid:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_CellLiquid(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_mindustry_type_Liquid_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_CellLiquid *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_CellLiquid *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(22);
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_cells = (6);
	LINE_NUMBER(25);
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_maxSpread = (jfloat(0.75f));
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadConversion = (jfloat(1.2f));
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadDamage = (jfloat(0.11f));
	((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_removeScaling = (jfloat(0.25f));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_CellLiquid_update_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/CellLiquid:update", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fire) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_amount) / (jfloat(70.0f))));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, temp0, (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(41);
	frame[3].i = (jint(0));
	LINE_NUMBER(43);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4c;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(45);
	if ((frame[8].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(1,000000e-04f)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_maxSpread) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * (frame[2].f)));
	frame[9].f = temp1;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, ((frame[9].f) * ((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_removeScaling)));
	LINE_NUMBER(48);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, (frame[8].o), (frame[0].o), ((frame[9].f) * ((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadConversion)));
	LINE_NUMBER(49);
	frame[3].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(43);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(54);
	if ((floatCompare(((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadDamage), (jfloat(0)), -1)) <= 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(1,000000e-04f)), -1)) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(55);
	frame[3].i = (jint(1));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 * ((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadConversion)), (((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_maxSpread) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[4].f = (temp1 / (jfloat(2)));
	LINE_NUMBER(59);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_19:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_20;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(61);
	if ((frame[9].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_liquid;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].f));
	}
label_23:;
	{
	LINE_NUMBER(59);
	INST_IINC(7, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, sp[0].o, ((((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadDamage) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * (frame[2].f)));
	}
label_15:;
	{
	LINE_NUMBER(70);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_25:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_26;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(72);
	if ((frame[8].o) == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[9].o) == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	if (sp[0].o != sp[1].o) goto label_29;
	}
	{
	LINE_NUMBER(76);
	jfloat temp0 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_amount;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((((jfloat)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_maxSpread) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * (frame[2].f)), ((((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_amount) * (jfloat(0.25f))) * (frame[2].f)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[10].f = temp2;
	LINE_NUMBER(77);
	sp[0].o = frame[9].o;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount) - (frame[10].f));
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount) + (frame[10].f));
	LINE_NUMBER(79);
	frame[3].i = (jint(1));
	LINE_NUMBER(80);
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_amount), (jfloat(23.333334f)), 1)) > 0) goto label_29;
	}
	{
	LINE_NUMBER(81);
	((func_mindustry_gen_Puddle_remove) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Puddle_remove])(ctx, (frame[9].o));
	LINE_NUMBER(82);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[10].f), (jfloat(23.333334f)));
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_29:;
	{
	LINE_NUMBER(70);
	INST_IINC(6, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(88);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_neoplasm;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(89);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_neoplasmReact;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/CellLiquid:react", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_spreadTarget;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (frame[2].f);
	}
label_1:;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/CellLiquid:drawPuddle", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	M_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
label_3:;
	(sp++)->f = jfloat(35.0f);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(19.5f);
label_5:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(108);
	frame[3].i = ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_id);
	LINE_NUMBER(109);
	frame[4].f = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_amount);
	frame[5].f = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_x);
	frame[6].f = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(110);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[4].f) / (jfloat(46.666668f))));
	frame[7].f = temp0;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_12;
	}
	(sp++)->f = jfloat(0.8f);
	goto label_13;
label_12:;
	INST_FCONST(0);
label_13:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	frame[9].f = (jfloat(25.0f));
	LINE_NUMBER(112);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[7].f), (jfloat(0.3f)));
	frame[10].f = (temp0 * (jfloat(9.0f)));
	LINE_NUMBER(114);
	clinit_mindustry_type_CellLiquid(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Liquid_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong((frame[3].i))));
	LINE_NUMBER(115);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	if ((frame[11].i) >= ((jint)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_cells)) goto label_19;
	}
	{
	LINE_NUMBER(116);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (((frame[2].f) + ((jfloat((frame[11].i))) / (jfloat(1000.0f)))) + ((jfloat(((frame[3].i) % (100)))) / (jfloat(10000.0f)))));
	LINE_NUMBER(117);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_mindustry_type_CellLiquid(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	clinit_mindustry_type_CellLiquid(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (frame[10].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(118);
	jfloat temp2 = frame[5].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[12].f = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp3 = frame[6].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[13].f = (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_colorFrom;
	sp[1].o = (jobject)((mindustry_type_CellLiquid *) NULL_CHECK((frame[0].o)))->F_colorTo;
	clinit_mindustry_type_CellLiquid(ctx);
	sp[2].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[2].o, (jfloat(1)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp4);
	LINE_NUMBER(122);
	jfloat temp5 = frame[12].f;
	jfloat temp6 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((frame[11].i) * (532))));
	jfloat temp7 = frame[9].f;
	jfloat temp8 = frame[8].f;
	LINE_NUMBER(123);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp6, temp7, temp8);
	jfloat temp10 = temp5 + temp9;
	jfloat temp11 = frame[13].f;
	jfloat temp12 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((frame[11].i) * (53))));
	jfloat temp13 = frame[9].f;
	jfloat temp14 = frame[8].f;
	LINE_NUMBER(124);
	jfloat temp15 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp12, temp13, temp14);
	jfloat temp16 = temp11 + temp15;
	jfloat temp17 = (frame[7].f) * (jfloat(3.8f));
	clinit_mindustry_type_CellLiquid(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp18 = jfloat(0.35f);
	jfloat temp19 = jfloat(1);
	LINE_NUMBER(125);
	jfloat temp20 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, temp18, temp19);
	jfloat temp21 = temp17 * temp20;
	jfloat temp22 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((frame[11].i) + (frame[3].i)) % (60)) * (54))));
	jfloat temp23 = jfloat(75.0f);
	clinit_mindustry_type_CellLiquid(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp24 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(1)), (jfloat(2)));
	jfloat temp25 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp22, (temp23 * temp24), (jfloat(1)));
	jfloat temp26 = temp21 * temp25;
	LINE_NUMBER(122);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp10, temp16, temp26);
	LINE_NUMBER(115);
	INST_IINC(11, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(128);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_CellLiquid;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field spreadTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_CellLiquid[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_Liquid_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_Liquid_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_type_Liquid_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_Liquid_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_Liquid_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_Liquid_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_type_Liquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_type_Liquid_getAnimationFrame_R_int,
	(void *) M_mindustry_type_Liquid_willBoil_R_boolean,
	(void *) M_mindustry_type_Liquid_canExtinguish_R_boolean,
	(void *) M_mindustry_type_Liquid_barColor_R_arc_graphics_Color,
	(void *) M_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle,
	(void *) M_mindustry_type_CellLiquid_update_mindustry_gen_Puddle,
	(void *) M_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float,
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
	{ "getAnimationFrame", "()I" },
	{ "willBoil", "()Z" },
	{ "canExtinguish", "()Z" },
	{ "barColor", "()Larc/graphics/Color;" },
	{ "drawPuddle", "(Lmindustry/gen/Puddle;)V" },
	{ "update", "(Lmindustry/gen/Puddle;)V" },
	{ "react", "(Lmindustry/type/Liquid;FLmindustry/world/Tile;FF)F" },
};

static FieldMetadata fields[] {
	{ "colorFrom", &class_arc_graphics_Color, offsetof(mindustry_type_CellLiquid, F_colorFrom), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_type_CellLiquid, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "cells", &class_int, offsetof(mindustry_type_CellLiquid, F_cells), "I", 1 },
	{ "spreadTarget", &class_mindustry_type_Liquid, offsetof(mindustry_type_CellLiquid, F_spreadTarget), "Lmindustry/type/Liquid;", 1 },
	{ "maxSpread", &class_float, offsetof(mindustry_type_CellLiquid, F_maxSpread), "F", 1 },
	{ "spreadConversion", &class_float, offsetof(mindustry_type_CellLiquid, F_spreadConversion), "F", 1 },
	{ "spreadDamage", &class_float, offsetof(mindustry_type_CellLiquid, F_spreadDamage), "F", 1 },
	{ "removeScaling", &class_float, offsetof(mindustry_type_CellLiquid, F_removeScaling), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_CellLiquid_java_lang_String_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_CellLiquid_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "update", (intptr_t) M_mindustry_type_CellLiquid_update_mindustry_gen_Puddle, VTABLE_mindustry_type_CellLiquid_update_mindustry_gen_Puddle, "(Lmindustry/gen/Puddle;)V", 1 },
	{ "react", (intptr_t) M_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float, VTABLE_mindustry_type_CellLiquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float, "(Lmindustry/type/Liquid;FLmindustry/world/Tile;FF)F", 1 },
	{ "drawPuddle", (intptr_t) M_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle, VTABLE_mindustry_type_CellLiquid_drawPuddle_mindustry_gen_Puddle, "(Lmindustry/gen/Puddle;)V", 1 },
};

Class class_mindustry_type_CellLiquid{
		.nativeName = (intptr_t) "mindustry/type/CellLiquid",
		.parentClass = (intptr_t) &class_mindustry_type_Liquid,
		.size = sizeof(mindustry_type_CellLiquid),
		.classVtable = (intptr_t) vtable_mindustry_type_CellLiquid,
		.staticInitializer = (intptr_t) clinit_mindustry_type_CellLiquid,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_CellLiquid,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 64,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_CellLiquid = registerClass(&class_mindustry_type_CellLiquid);

}
