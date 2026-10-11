#include "mindustry/entities/comp/PuddleComp.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/entities/comp/PuddleComp_invoke_arc_func_Cons_0.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/Puddles.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Puddle.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Puddlec.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/comp/PuddleComp.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_entities_comp_PuddleComp_rect;
jobject SF_mindustry_entities_comp_PuddleComp_rect2;
jobject SF_mindustry_entities_comp_PuddleComp_paramPuddle;
jobject SF_mindustry_entities_comp_PuddleComp_unitCons;

void mark_mindustry_entities_comp_PuddleComp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_comp_PuddleComp_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_PuddleComp_rect)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_PuddleComp_rect, mark, depth + 1);
		if (SF_mindustry_entities_comp_PuddleComp_rect2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_PuddleComp_rect2)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_PuddleComp_rect2, mark, depth + 1);
		if (SF_mindustry_entities_comp_PuddleComp_paramPuddle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_PuddleComp_paramPuddle)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_PuddleComp_paramPuddle, mark, depth + 1);
		if (SF_mindustry_entities_comp_PuddleComp_unitCons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_PuddleComp_unitCons)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_PuddleComp_unitCons, mark, depth + 1);
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
	auto self = (mindustry_entities_comp_PuddleComp *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
}

void init_mindustry_entities_comp_PuddleComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PuddleComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_lastRipple = (temp0 + temp1);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(50.0f)));
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_effectTime = temp2;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_PuddleComp_getFlammability_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:getFlammability", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_flammability) * ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PuddleComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:update", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(54);
	((func_mindustry_entities_comp_PuddleComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(58);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_accepting), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	(sp++)->f = jfloat(3.0f);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount = (temp0 - ((temp1 * (temp2 - ((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_viscosity))) / ((jfloat(5.0f)) + (frame[1].f))));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount) + ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_accepting));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(70.0f)));
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(63);
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_accepting = (jfloat(0));
	LINE_NUMBER(65);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(46.666668f)), -1)) < 0) goto label_11;
	}
	{
	LINE_NUMBER(66);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount) - (jfloat(46.666668f))) / (jfloat(4.0f))), ((jfloat(0.3f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[2].f = temp0;
	LINE_NUMBER(67);
	frame[3].i = (jint(0));
	LINE_NUMBER(68);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_15:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_16;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(69);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x);
	sp[1].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(70);
	if ((frame[8].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_moveThroughBlocks) == 0) goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(71);
	INST_IINC(3, 1);
	LINE_NUMBER(72);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].f), (jint(0)));
	}
label_19:;
	{
	LINE_NUMBER(68);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount) - ((frame[2].f) * (jfloat((frame[3].i)))));
	}
label_11:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_capPuddles) == 0) goto label_22;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(0)), (jfloat(70.0f)));
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_amount = temp0;
	}
label_22:;
	{
	LINE_NUMBER(82);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(0)), 1)) > 0) goto label_24;
	}
	{
	LINE_NUMBER(83);
	((func_mindustry_entities_comp_PuddleComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_27;
	}
	{
	if (((jint)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_added) == 0) goto label_27;
	}
	{
	LINE_NUMBER(89);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Drawc, sp[1].o)));
	LINE_NUMBER(91);
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(96);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(35.0f)), -1)) < 0) goto label_32;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_updateTime), (jfloat(0)), 1)) > 0) goto label_32;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	SF_mindustry_entities_comp_PuddleComp_paramPuddle = (checkCast(ctx, &class_mindustry_gen_Puddle, sp[0].o));
	LINE_NUMBER(99);
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_PuddleComp_rect;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount) / (jfloat(46.666668f))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (temp0 * (jfloat(10.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_y));
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_PuddleComp_unitCons;
	SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.5)));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, sp[0].o);
	}
label_36:;
	{
	LINE_NUMBER(105);
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_updateTime = (jfloat(40.0f));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Puddle, sp[1].o)));
	}
label_32:;
	{
	LINE_NUMBER(112);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleEffect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_40;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_effectTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_effectTime = temp0;
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	if ((floatCompare(temp0, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleSpacing), -1)) < 0) goto label_40;
	}
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_amount) / (jfloat(46.666668f))));
	frame[2].f = (temp0 * (jfloat(4.0f)));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleEffect;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[2].f));
	jfloat temp3 = temp1 + temp2;
	jfloat temp4 = (jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[2].f));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp3, (temp4 + temp5));
	LINE_NUMBER(116);
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_effectTime = (jfloat(0));
	}
label_40:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_updateTime = (((jfloat)((mindustry_entities_comp_PuddleComp *) NULL_CHECK(sp[0].o))->F_updateTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Liquid_update_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_update_mindustry_gen_Puddle])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Puddle, sp[1].o)));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PuddleComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(19.0f)));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Puddle, sp[1].o)));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_PuddleComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jfloat(50.0f));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PuddleComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Puddles_remove_mindustry_world_Tile(ctx, sp[0].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PuddleComp_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(ctx, (checkCast(ctx, &class_mindustry_gen_Puddle, sp[0].o)));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PuddleComp_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:afterSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_entities_comp_PuddleComp *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(ctx, (checkCast(ctx, &class_mindustry_gen_Puddle, sp[0].o)));
	}
label_1:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_PuddleComp_lambda$static$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:lambda$static$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PuddleComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_1;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_PuddleComp_rect2;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(28);
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_PuddleComp_rect;
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_PuddleComp_rect2;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_PuddleComp_paramPuddle;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK(sp[1].o))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_effect;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(120.0f)));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0.010000001f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(32);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_ripple;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rippleScale;
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_PuddleComp_paramPuddle;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK(sp[1].o))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_1:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_comp_PuddleComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PuddleComp:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PuddleComp(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	SF_mindustry_entities_comp_PuddleComp_rect = sp[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	SF_mindustry_entities_comp_PuddleComp_rect2 = sp[0].o;
	LINE_NUMBER(25);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PuddleComp_invoke_arc_func_Cons_0(ctx);
		auto proxy = (mindustry_entities_comp_PuddleComp_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PuddleComp_invoke_arc_func_Cons_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_comp_PuddleComp(ctx);
	SF_mindustry_entities_comp_PuddleComp_unitCons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_PuddleComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PuddleComp_afterRead,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PuddleComp_remove,
	(void *) M_mindustry_entities_comp_PuddleComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PuddleComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_PuddleComp_draw,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PuddleComp_afterSync,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PuddleComp_getFlammability_R_float,
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "getFlammability", "()F" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Puddlec, &class_mindustry_gen_Drawc, &class_mindustry_gen_Syncc, };

static FieldMetadata fields[] {
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_entities_comp_PuddleComp_rect, "Larc/math/geom/Rect;", 26 },
	{ "rect2", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_entities_comp_PuddleComp_rect2, "Larc/math/geom/Rect;", 26 },
	{ "paramPuddle", &class_mindustry_gen_Puddle, (intptr_t) &SF_mindustry_entities_comp_PuddleComp_paramPuddle, "Lmindustry/gen/Puddle;", 10 },
	{ "unitCons", &class_arc_func_Cons, (intptr_t) &SF_mindustry_entities_comp_PuddleComp_unitCons, "Larc/func/Cons;", 10 },
	{ "id", &class_int, offsetof(mindustry_entities_comp_PuddleComp, F_id), "I", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_y), "F", 0 },
	{ "added", &class_boolean, offsetof(mindustry_entities_comp_PuddleComp, F_added), "Z", 0 },
	{ "accepting", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_accepting), "F", 128 },
	{ "updateTime", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_updateTime), "F", 128 },
	{ "lastRipple", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_lastRipple), "F", 128 },
	{ "effectTime", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_effectTime), "F", 128 },
	{ "amount", &class_float, offsetof(mindustry_entities_comp_PuddleComp, F_amount), "F", 0 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_entities_comp_PuddleComp, F_tile), "Lmindustry/world/Tile;", 0 },
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_entities_comp_PuddleComp, F_liquid), "Lmindustry/type/Liquid;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_PuddleComp, 0, "()V", 0 },
	{ "getFlammability", (intptr_t) M_mindustry_entities_comp_PuddleComp_getFlammability_R_float, VTABLE_mindustry_entities_comp_PuddleComp_getFlammability_R_float, "()F", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_PuddleComp_update, VTABLE_mindustry_entities_comp_PuddleComp_update, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_PuddleComp_draw, VTABLE_mindustry_entities_comp_PuddleComp_draw, "()V", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_PuddleComp_clipSize_R_float, VTABLE_mindustry_entities_comp_PuddleComp_clipSize_R_float, "()F", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_PuddleComp_remove, VTABLE_mindustry_entities_comp_PuddleComp_remove, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_entities_comp_PuddleComp_afterRead, VTABLE_mindustry_entities_comp_PuddleComp_afterRead, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_entities_comp_PuddleComp_afterSync, VTABLE_mindustry_entities_comp_PuddleComp_afterSync, "()V", 1 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_entities_comp_PuddleComp_lambda$static$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_comp_PuddleComp, 0, "()V", 8 },
};

Class class_mindustry_entities_comp_PuddleComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/PuddleComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_PuddleComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_PuddleComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_PuddleComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_PuddleComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 70,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_PuddleComp = registerClass(&class_mindustry_entities_comp_PuddleComp);

}
