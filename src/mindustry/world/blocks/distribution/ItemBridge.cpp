#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "java/lang/Integer.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Point2.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/blocks/distribution/ItemBridge_ItemBridgeBuild.h"
#include "mindustry/world/blocks/distribution/ItemBridge_invoke_arc_func_Boolf2_1.h"
#include "arc/func/Boolf2.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/distribution/ItemBridge_invoke_arc_func_Boolf_1.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/input/Placement.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/distribution/ItemBridge_invoke_arc_func_Cons2_2.h"
#include "mindustry/world/blocks/distribution/ItemBridge_invoke_arc_func_Cons2_3.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_world_blocks_distribution_ItemBridge_currentFindX;
jint SF_mindustry_world_blocks_distribution_ItemBridge_currentFindY;
jobject SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan;
jobject SF_mindustry_world_blocks_distribution_ItemBridge_planFinder;

void mark_mindustry_world_blocks_distribution_ItemBridge(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan, mark, depth + 1);
		if (SF_mindustry_world_blocks_distribution_ItemBridge_planFinder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_distribution_ItemBridge_planFinder)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_distribution_ItemBridge_planFinder, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_distribution_ItemBridge *) object;
	if (self->F_endRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endRegion)->clazz)->markFunction)((jobject) self->F_endRegion, mark, depth + 1);
	if (self->F_bridgeRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bridgeRegion)->clazz)->markFunction)((jobject) self->F_bridgeRegion, mark, depth + 1);
	if (self->F_arrowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrowRegion)->clazz)->markFunction)((jobject) self->F_arrowRegion, mark, depth + 1);
	if (self->F_lastBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastBuild)->clazz)->markFunction)((jobject) self->F_lastBuild, mark, depth + 1);
}

void init_mindustry_world_blocks_distribution_ItemBridge_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_timerCheckMoved = temp0;
	LINE_NUMBER(33);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_fadeIn = (jint(1));
	LINE_NUMBER(34);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_moveArrows = (jint(1));
	LINE_NUMBER(35);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_pulse = (jint(0));
	LINE_NUMBER(37);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_linkSameType = (jint(1));
	LINE_NUMBER(38);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_arrowSpacing = (jfloat(4.0f));
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_arrowOffset = (jfloat(2));
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_arrowPeriod = (jfloat(0.4f));
	LINE_NUMBER(39);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_arrowTimeScl = (jfloat(6.2f));
	LINE_NUMBER(40);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_bridgeWidth = (jfloat(6.5f));
	LINE_NUMBER(42);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_noAcceptDisabled = (jint(0));
	LINE_NUMBER(49);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(50);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(51);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_underBullets = (jint(1));
	LINE_NUMBER(52);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(53);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (10);
	LINE_NUMBER(54);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(55);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(56);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unloadable = (jint(0));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(58);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_noUpdateDisabled = (jint(1));
	LINE_NUMBER(59);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowDiagonal = (jint(0));
	LINE_NUMBER(60);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_copyConfig = (jint(0));
	LINE_NUMBER(61);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreResizeConfig = (jint(1));
	LINE_NUMBER(62);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_diagonalConfigInventory = (jint(1));
	LINE_NUMBER(63);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(-1.0f));
	LINE_NUMBER(64);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_delayLandingConfig = (jint(1));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Cons2_2(ctx);
		auto proxy = (mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Cons2_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Cons2_2);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_distribution_ItemBridge_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_Integer);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Cons2_3);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_distribution_ItemBridge_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:setStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(75);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_transportTime), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemsMoved;
	jfloat temp0 = (jfloat(60.0f)) / ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_transportTime);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_itemsSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_2:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:drawPlanConfigTop", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_config;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_arc_math_geom_Point2)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Point2, (frame[4].o)));
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x));
	if (temp0 > ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y));
	if (temp0 > ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_1;
	}
	{
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x) == 0) goto label_3;
	}
	{
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y) != 0) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(87);
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	SF_mindustry_world_blocks_distribution_ItemBridge_currentFindX = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x));
	LINE_NUMBER(88);
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	SF_mindustry_world_blocks_distribution_ItemBridge_currentFindY = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y));
	LINE_NUMBER(89);
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan = (frame[1].o);
	LINE_NUMBER(90);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_distribution_ItemBridge_currentFindX;
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	jint temp1 = (jint)SF_mindustry_world_blocks_distribution_ItemBridge_currentFindY;
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_ItemBridge_planFinder;
	sp[0].o = (jobject)SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(92);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	((func_mindustry_world_blocks_distribution_ItemBridge_drawBridge_mindustry_entities_units_BuildPlan_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_drawBridge_mindustry_entities_units_BuildPlan_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, (jfloat(0)));
	}
label_1:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_drawBridge_mindustry_entities_units_BuildPlan_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:drawBridge", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(100);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity));
	LINE_NUMBER(102);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_bridgeWidth));
	LINE_NUMBER(104);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_bridgeRegion;
	sp[1].o = frame[1].o;
	LINE_NUMBER(108);
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = frame[1].o;
	LINE_NUMBER(109);
	jfloat temp4 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp6 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp7 = temp6 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp8 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp9 = temp8 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jint temp10 = jint(0);
	LINE_NUMBER(106);
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, sp[0].o, temp3, temp5, temp7, temp9, temp10);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_arrowRegion;
	jfloat temp11 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp12 = (temp11 + (frame[2].f)) / (jfloat(2));
	jfloat temp13 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	jfloat temp14 = (temp13 + (frame[3].f)) / (jfloat(2));
	sp[1].o = frame[1].o;
	LINE_NUMBER(115);
	jfloat temp15 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, sp[1].o);
	jfloat temp16 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	jfloat temp17 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp15, temp16, (frame[2].f), (frame[3].f));
	jfloat temp18 = temp17 + (frame[4].f);
	LINE_NUMBER(114);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp12, temp14, temp18);
	LINE_NUMBER(117);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:drawPlace", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(122);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(126);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(127);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	jfloat temp0 = jfloat(((frame[1].i) * (8)));
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jfloat temp1 = temp0 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_x))) * (jfloat(6.0f)));
	jfloat temp2 = jfloat(((frame[2].i) * (8)));
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jfloat temp3 = temp2 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_y))) * (jfloat(6.0f)));
	jint temp4 = (frame[1].i) * (8);
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jfloat temp5 = jfloat((temp4 + ((((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_x) * ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range)) * (8))));
	jint temp6 = (frame[2].i) * (8);
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, temp1, temp3, temp5, (jfloat((temp6 + ((((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_y) * ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range)) * (8))))));
	LINE_NUMBER(126);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(134);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(135);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(136);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(137);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) - (frame[1].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) - (frame[2].i)));
	if ((temp0 + temp1) <= (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte])(ctx, (frame[5].o), (frame[1].i), (frame[2].i));
	frame[6].i = temp0;
	LINE_NUMBER(139);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) != (frame[1].i)) goto label_13;
	}
	INST_BIPUSH(8);
	goto label_14;
label_13:;
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) - (frame[1].i)));
	jint temp1 = (temp0 * (8)) - (8);
	sp[0].i = temp1;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[7].f = (jfloat(sp[0].i));
	LINE_NUMBER(140);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) != (frame[2].i)) goto label_16;
	}
	INST_BIPUSH(8);
	goto label_17;
label_16:;
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) - (frame[2].i)));
	jint temp1 = (temp0 * (8)) - (8);
	sp[0].i = temp1;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[8].f = (jfloat(sp[0].i));
	LINE_NUMBER(141);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((((jfloat(((frame[1].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x)))) / (jfloat(2))) * (jfloat(8.0f))) - ((frame[7].f) / (jfloat(2)))), ((((jfloat(((frame[2].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y)))) / (jfloat(2))) * (jfloat(8.0f))) - ((frame[8].f) / (jfloat(2)))), (frame[7].f), (frame[8].f));
	LINE_NUMBER(143);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"bridge-arrow"_j));
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) * (8);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[6].i));
	jfloat temp1 = jfloat((temp0 + (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (8))));
	jint temp2 = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) * (8);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[6].i));
	jfloat temp3 = jfloat((temp2 + (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (8))));
	jint temp4 = (jint)((func_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte])(ctx, (frame[5].o), (frame[1].i), (frame[2].i));
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float(ctx, sp[0].o, temp1, temp3, (jfloat((temp4 * (90)))));
	}
label_10:;
	{
	LINE_NUMBER(145);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:linkValid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:linkValid", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(153);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_linkSameType) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_distribution_ItemBridge)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge, (frame[6].o)));
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[4].o)))->F_range;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[-1].o))->F_range;
label_6:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_distribution_ItemBridge)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge, (frame[6].o)));
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[5].o)))->F_range;
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_7:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[-1].o))->F_range;
label_9:;
	POP_N(2); // Pop method args
	sp->i = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, sp[0].i, sp[1].i);
	sp++;
label_3:;
	{
	sp -= 6;
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
	if (temp0 != 0) goto label_10;
	}
label_1:;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(155);
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_linkSameType) != 0) goto label_11;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) != 0) goto label_11;
	}
label_13:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) != 0) goto label_11;
	}
label_14:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(160);
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_linkSameType) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_16;
	}
	goto label_17;
label_15:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_ItemBridge)) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_ItemBridge)) != 0) goto label_17;
	}
label_16:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_ItemBridge)) != 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (sp[0].o != (frame[0].o)) goto label_19;
	}
label_17:;
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (sp[0].o == (frame[0].o)) goto label_19;
	}
label_21:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_22;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, sp[0].o))))->F_link;
	sp[0].o = frame[1].o;
	LINE_NUMBER(163);
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_19;
	}
label_22:;
	INST_ICONST(1);
	goto label_24;
label_19:;
	INST_ICONST(0);
label_24:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:positionsValid", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:positionsValid", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(171);
	if ((frame[1].i) != (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[4].i)));
	if (temp0 > (frame[5].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(173);
	if ((frame[2].i) != (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	if (temp0 > (frame[5].i)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:findLink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(182);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_lastBuild;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_lastBuild;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_lastBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	if (sp[0].o == (frame[3].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_lastBuild;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_link) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_lastBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(191);
	((func_mindustry_world_blocks_distribution_ItemBridge_updateClipRadius_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_updateClipRadius_float])(ctx, (frame[0].o), (((jfloat(((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range))) + (jfloat(0.5f))) * (jfloat(8.0f))));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_handlePlacementLine_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:handlePlacementLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = frame[3].o;
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x) - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x)), (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y) - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(196);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge_changePlacementPath_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:changePlacementPath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Boolf2_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Boolf2_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Boolf2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:lambda$changePlacementPath$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y)));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	if (temp2 > ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_1;
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

jbool SM_mindustry_world_blocks_distribution_ItemBridge_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	if ((clinit_mindustry_world_blocks_distribution_ItemBridge(ctx), (jint)SF_mindustry_world_blocks_distribution_ItemBridge_currentFindX) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x)) goto label_1;
	}
	{
	if ((clinit_mindustry_world_blocks_distribution_ItemBridge(ctx), (jint)SF_mindustry_world_blocks_distribution_ItemBridge_currentFindY) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y)) goto label_1;
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

void SM_mindustry_world_blocks_distribution_ItemBridge_lambda$new$1_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_java_lang_Integer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_distribution_ItemBridge_lambda$new$0_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_arc_math_geom_Point2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_tileX_R_int])(ctx, (frame[0].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp4 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_tileY_R_int])(ctx, (frame[0].o));
	jint temp5 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp2, (temp3 + temp4));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_link = temp5;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_distribution_ItemBridge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	{
	LINE_NUMBER(82);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_ItemBridge_invoke_arc_func_Boolf_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_world_blocks_distribution_ItemBridge(ctx);
	SF_mindustry_world_blocks_distribution_ItemBridge_planFinder = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_distribution_ItemBridge;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_distribution_ItemBridge[] {
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_init,
	(void *) M_mindustry_world_Block_postInit,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_setStats,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
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
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_handlePlacementLine_arc_struct_Seq,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_drawBridge_mindustry_entities_units_BuildPlan_float_float_float,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean,
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
	{ "drawBridge", "(Lmindustry/entities/units/BuildPlan;FFF)V" },
	{ "linkValid", "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z" },
	{ "linkValid", "(Lmindustry/world/Tile;Lmindustry/world/Tile;Z)Z" },
	{ "positionsValid", "(IIII)Z" },
	{ "positionsValid", "(IIIII)Z" },
	{ "findLink", "(II)Lmindustry/world/Tile;" },
	{ "lambda$changePlacementPath$0", "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild,
};

static FieldMetadata fields[] {
	{ "timerCheckMoved", &class_int, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_timerCheckMoved), "I", 17 },
	{ "range", &class_int, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_range), "I", 1 },
	{ "transportTime", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_transportTime), "F", 1 },
	{ "endRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_endRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "bridgeRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_bridgeRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "arrowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_arrowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "fadeIn", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_fadeIn), "Z", 1 },
	{ "moveArrows", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_moveArrows), "Z", 1 },
	{ "pulse", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_pulse), "Z", 1 },
	{ "linkSameType", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_linkSameType), "Z", 1 },
	{ "arrowSpacing", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_arrowSpacing), "F", 1 },
	{ "arrowOffset", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_arrowOffset), "F", 1 },
	{ "arrowPeriod", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_arrowPeriod), "F", 1 },
	{ "arrowTimeScl", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_arrowTimeScl), "F", 1 },
	{ "bridgeWidth", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_bridgeWidth), "F", 1 },
	{ "noAcceptDisabled", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_noAcceptDisabled), "Z", 1 },
	{ "lastBuild", &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, offsetof(mindustry_world_blocks_distribution_ItemBridge, F_lastBuild), "Lmindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild;", 1 },
	{ "currentFindX", &class_int, (intptr_t) &SF_mindustry_world_blocks_distribution_ItemBridge_currentFindX, "I", 10 },
	{ "currentFindY", &class_int, (intptr_t) &SF_mindustry_world_blocks_distribution_ItemBridge_currentFindY, "I", 10 },
	{ "currentPlan", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_world_blocks_distribution_ItemBridge_currentPlan, "Lmindustry/entities/units/BuildPlan;", 10 },
	{ "planFinder", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_world_blocks_distribution_ItemBridge_planFinder, "Larc/func/Boolf;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_ItemBridge_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_setStats, VTABLE_mindustry_world_blocks_distribution_ItemBridge_setStats, "()V", 1 },
	{ "drawPlanConfigTop", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_distribution_ItemBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "drawBridge", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_drawBridge_mindustry_entities_units_BuildPlan_float_float_float, VTABLE_mindustry_world_blocks_distribution_ItemBridge_drawBridge_mindustry_entities_units_BuildPlan_float_float_float, "(Lmindustry/entities/units/BuildPlan;FFF)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "linkValid", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z", 1 },
	{ "linkValid", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Z)Z", 1 },
	{ "positionsValid", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "positionsValid", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge_positionsValid_int_int_int_int_int_R_boolean, "(IIIII)Z", 1 },
	{ "findLink", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile, VTABLE_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_init, VTABLE_mindustry_world_blocks_distribution_ItemBridge_init, "()V", 1 },
	{ "handlePlacementLine", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_handlePlacementLine_arc_struct_Seq, VTABLE_mindustry_world_blocks_distribution_ItemBridge_handlePlacementLine_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "changePlacementPath", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_changePlacementPath_arc_struct_Seq_int, VTABLE_mindustry_world_blocks_distribution_ItemBridge_changePlacementPath_arc_struct_Seq_int, "(Larc/struct/Seq;I)V", 1 },
	{ "lambda$changePlacementPath$0", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z", 4098 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_world_blocks_distribution_ItemBridge_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_world_blocks_distribution_ItemBridge_lambda$new$1_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_java_lang_Integer, 0, "(Lmindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild;Ljava/lang/Integer;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_blocks_distribution_ItemBridge_lambda$new$0_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_arc_math_geom_Point2, 0, "(Lmindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild;Larc/math/geom/Point2;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_distribution_ItemBridge, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_distribution_ItemBridge{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/ItemBridge",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_distribution_ItemBridge),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_ItemBridge,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_ItemBridge,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_ItemBridge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 196,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_ItemBridge = registerClass(&class_mindustry_world_blocks_distribution_ItemBridge);

}
