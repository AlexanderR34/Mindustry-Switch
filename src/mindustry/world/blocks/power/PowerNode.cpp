#include "mindustry/world/blocks/power/PowerNode.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "arc/util/Eachable.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons_9.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons_7.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons_8.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons_5.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons_6.h"
#include "arc/func/Boolf2.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/func/Floatp.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Prov_6.h"
#include "arc/func/Func.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Prov_7.h"
#include "arc/Core.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Prov_8.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Prov_9.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Structs.h"
#include "mindustry/input/Placement.h"
#include "mindustry/graphics/Lod.h"
#include "mindustry/world/blocks/power/PowerBlock.h"
#include "arc/func/Cons2.h"
#include "mindustry/gen/Building.h"
#include "arc/math/geom/Intersector.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_math_geom_Geometry_Raycaster_1.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Floatp_5.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Floatp_4.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Floatp_3.h"
#include "arc/math/geom/Circle.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Boolf_7.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Boolf_9.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Boolf_8.h"
#include "arc/graphics/g2d/Lines.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Boolf2_1.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_java_util_Comparator_2.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_java_util_Comparator_3.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Func_3.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Func_5.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Func_4.h"
#include "mindustry/world/Edges.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Prov_11.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons2_3.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Prov_10.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/world/blocks/power/PowerNode_invoke_arc_func_Cons2_2.h"

extern "C" {

jint SF_mindustry_world_blocks_power_PowerNode_returnInt;
jobject SF_mindustry_world_blocks_power_PowerNode_graphs;
jfloat SF_mindustry_world_blocks_power_PowerNode_maxRange;
jint SF_mindustry_world_blocks_power_PowerNode_currentFindX;
jint SF_mindustry_world_blocks_power_PowerNode_currentFindY;
jobject SF_mindustry_world_blocks_power_PowerNode_currentPlan;
jobject SF_mindustry_world_blocks_power_PowerNode_planFinder;

void mark_mindustry_world_blocks_power_PowerNode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_power_PowerNode_graphs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerNode_graphs)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerNode_graphs, mark, depth + 1);
		if (SF_mindustry_world_blocks_power_PowerNode_currentPlan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerNode_currentPlan)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerNode_currentPlan, mark, depth + 1);
		if (SF_mindustry_world_blocks_power_PowerNode_planFinder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerNode_planFinder)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerNode_planFinder, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_power_PowerBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_power_PowerNode *) object;
	if (self->F_laser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laser)->clazz)->markFunction)((jobject) self->F_laser, mark, depth + 1);
	if (self->F_laserEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserEnd)->clazz)->markFunction)((jobject) self->F_laserEnd, mark, depth + 1);
	if (self->F_laserColor1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserColor1)->clazz)->markFunction)((jobject) self->F_laserColor1, mark, depth + 1);
	if (self->F_laserColor2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserColor2)->clazz)->markFunction)((jobject) self->F_laserColor2, mark, depth + 1);
}

void init_mindustry_world_blocks_power_PowerNode_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	init_mindustry_world_blocks_power_PowerBlock_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange = (jfloat(6.0f));
	LINE_NUMBER(34);
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_maxNodes = (jint(3));
	LINE_NUMBER(35);
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_autolink = (jint(1));
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_drawRange = (jint(1));
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_sameBlockConnection = (jint(0));
	LINE_NUMBER(36);
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserScale = (jfloat(0.25f));
	LINE_NUMBER(37);
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_useLod = (jint(1));
	LINE_NUMBER(38);
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_powerLayer = (jfloat(70.0f));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserColor1 = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_powerLight;
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserColor2 = (jref) sp[1].o;
	LINE_NUMBER(44);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(45);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreResizeConfig = (jint(1));
	LINE_NUMBER(46);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumesPower = (jint(0));
	LINE_NUMBER(47);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPower = (jint(0));
	LINE_NUMBER(48);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_canOverdrive = (jint(0));
	LINE_NUMBER(49);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_swapDiagonalPlacement = (jint(1));
	LINE_NUMBER(50);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_schematicPriority = (-10);
	LINE_NUMBER(51);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDisabled = (jint(0));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(53);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destructible = (jint(1));
	LINE_NUMBER(54);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_delayLandingConfig = (jint(1));
	LINE_NUMBER(55);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(1));
	LINE_NUMBER(58);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(0));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_Integer);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons2_2(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons2_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons2_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_PowerNode_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) getArrayClass(&class_arc_math_geom_Point2, 1));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_PowerNode_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"power"_j));
	sp[2].o = (jobject)SM_mindustry_world_blocks_power_PowerNode_makePowerBalance_R_arc_func_Func(ctx);
	((func_mindustry_world_blocks_power_PowerNode_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"batteries"_j));
	sp[2].o = (jobject)SM_mindustry_world_blocks_power_PowerNode_makeBatteryBalance_R_arc_func_Func(ctx);
	((func_mindustry_world_blocks_power_PowerNode_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"connections"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_PowerNode_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_makePowerBalance_R_arc_func_Func(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:makePowerBalance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	{
	LINE_NUMBER(126);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_4(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_4);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_makeBatteryBalance_R_arc_func_Func(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:makeBatteryBalance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	{
	LINE_NUMBER(135);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_5(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Func_5);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:setStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_powerRange;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_powerConnections;
	jfloat temp1 = jfloat(((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_maxNodes));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize), (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_clipSize = temp0;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:drawPlace", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(162);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_autolink) != 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(164);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(165);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(166);
	SM_mindustry_graphics_Drawf_circles_float_float_float(ctx, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f))));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_5);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_changePlacementPath_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:changePlacementPath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf2_1(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf2_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_setupColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:setupColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(184);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserColor1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserColor2;
	jfloat temp0 = ((jfloat(1)) - (frame[1].f)) * (jfloat(0.86f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(3.0f)), (jfloat(0.1f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (temp0 + temp1));
	clinit_mindustry_core_Renderer(ctx);
	jfloat temp2 = (jfloat)SF_mindustry_core_Renderer_laserOpacity;
	sp[1].f = temp2;
	sp += 2;
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_useLod) == 0) goto label_1;
	}
	clinit_mindustry_graphics_Lod(ctx);
	(sp++)->f = SF_mindustry_graphics_Lod_alpha2;
	goto label_2;
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (sp[1].f * sp[2].f));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:drawLaser", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(188);
	((func_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i), (jint(1)));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jint param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:drawLaser", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(192);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	frame[8].f = temp0;
	LINE_NUMBER(193);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[8].f));
	frame[9].f = temp1;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[8].f));
	frame[10].f = temp2;
	LINE_NUMBER(194);
	frame[11].f = (((jfloat(((frame[5].i) * (8)))) / (jfloat(2))) - (jfloat(1.5f)));
	frame[12].f = (((jfloat(((frame[6].i) * (8)))) / (jfloat(2))) - (jfloat(1.5f)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laser;
	sp[1].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserEnd;
	sp[2].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserEnd;
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[1].f) + ((frame[9].f) * (frame[11].f))), ((frame[2].f) + ((frame[10].f) * (frame[11].f))), ((frame[3].f) - ((frame[9].f) * (frame[12].f))), ((frame[4].f) - ((frame[10].f) * (frame[12].f))), ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserScale), (frame[7].i), ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_useLod));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_mindustry_world_Block_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:overlaps", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(200);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_cr1;
	sp[0].o = (jobject)((func_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[5].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[3].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_offset)), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_size) * (8)))), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_size) * (8)))));
	jint temp3 = (jint)SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Rect_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:overlaps", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(205);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_cr1;
	sp[0].o = (jobject)((func_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[4].f));
	sp[1].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Rect_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:overlaps", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	jint temp2 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[3].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:overlaps", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (frame[2].o), (frame[3].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:overlaps", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(217);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(218);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_cr1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f))));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[2].o));
	jfloat temp4 = temp3 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp5 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, temp4, (temp5 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)));
	jint temp6 = (jint)SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Rect_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp6;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:getPotentialLinks", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(222);
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_autolink) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(224);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_5);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(235);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(236);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size));
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_6;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(241);
	if ((frame[9].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[9].o));
	if (sp[0].o != (frame[2].o)) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(242);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(239);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(247);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(250);
	frame[5].f = (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f)));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[6].o = sp[0].o;
	LINE_NUMBER(252);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 - (frame[5].f);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	jfloat temp3 = temp2 - (frame[5].f);
	jfloat temp4 = (frame[5].f) * (jfloat(2));
	jfloat temp5 = (frame[5].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp1, temp3, temp4, temp5, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(260);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_java_util_Comparator_2(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_java_util_Comparator_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_java_util_Comparator_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_returnInt = (jint(0));
	LINE_NUMBER(268);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_power_PowerNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:getNodeLinks", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(279);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_6);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(290);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(291);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(294);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size));
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(296);
	if ((frame[9].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[9].o));
	if (sp[0].o != (frame[2].o)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_consumesPower) == 0) goto label_9;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_outputsPower) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) == 0) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(298);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(294);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(303);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(306);
	frame[5].f = ((clinit_mindustry_world_blocks_power_PowerNode(ctx), (jfloat)SF_mindustry_world_blocks_power_PowerNode_maxRange) * (jfloat(8.0f)));
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[6].o = sp[0].o;
	LINE_NUMBER(308);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 - (frame[5].f);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 - (frame[5].f);
	jfloat temp4 = (frame[5].f) * (jfloat(2));
	jfloat temp5 = (frame[5].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp1, temp3, temp4, temp5, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(316);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_java_util_Comparator_3(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_java_util_Comparator_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_java_util_Comparator_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(322);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:drawPlanConfigTop", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_config;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), getArrayClass(&class_arc_math_geom_Point2, 1))) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, getArrayClass(&class_arc_math_geom_Point2, 1), (frame[4].o)));
	LINE_NUMBER(337);
	((func_mindustry_world_blocks_power_PowerNode_setupColor_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_setupColor_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(338);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(339);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_currentFindX = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x));
	LINE_NUMBER(340);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_currentFindY = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(341);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_currentPlan = (frame[1].o);
	LINE_NUMBER(343);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerNode_currentFindX;
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp1 = (jint)SF_mindustry_world_blocks_power_PowerNode_currentFindY;
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_planFinder;
	sp[0].o = (jobject)SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(345);
	if ((frame[8].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[8].o)))->F_block;
	if (sp[0].o != nullptr) goto label_12;
	}
	goto label_11;
label_12:;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[8].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[8].o));
	jint temp4 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[8].o)))->F_block;
	((func_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(338);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(349);
	SM_arc_graphics_g2d_Draw_color(ctx);
label_1:;
	LINE_NUMBER(351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerNode_planConfigClipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:planConfigClipSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (((((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f))) * (jfloat(2))) + (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:linkValid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(359);
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:linkValid", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(363);
	if ((frame[1].o) == (frame[2].o)) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_connectedPower) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_sameBlockConnection) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f))));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, (frame[5].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[1].o), (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[4].o)))->F_laserRange) * (jfloat(8.0f))));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(366);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_6;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, (frame[6].o)));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) < ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[5].o)))->F_maxNodes)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:insulated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(375);
	jint temp0 = (jint)SM_mindustry_world_blocks_power_PowerNode_insulated_int_int_int_int_R_boolean(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_gen_Building_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:insulated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)SM_mindustry_world_blocks_power_PowerNode_insulated_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_insulated_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:insulated", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(383);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_math_geom_Geometry$Raycaster_1(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_math_geom_Geometry$Raycaster_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_math_geom_Geometry$Raycaster_1);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_lambda$insulated$0_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$insulated$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(384);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(385);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isInsulated_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_isInsulated_R_boolean])(ctx, (frame[2].o));
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

jbool SM_mindustry_world_blocks_power_PowerNode_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$static$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerNode_currentFindX;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 < (temp1 - ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) / (jint(2))))) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerNode_currentFindY;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 < (temp1 - ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) / (jint(2))))) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerNode_currentFindX;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 > (temp1 + (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))))) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerNode_currentFindY;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 > (temp1 + (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))))) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_currentPlan;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_1;
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

void SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$4_arc_func_Cons_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getNodeLinks$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(323);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$3_mindustry_world_Tile_mindustry_gen_Building_mindustry_gen_Building_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getNodeLinks$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp1 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)));
	frame[3].i = (-temp1);
	LINE_NUMBER(318);
	if ((frame[3].i) == 0) goto label_2;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(319);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float])(ctx, (frame[2].o), (frame[0].o));
	jint temp2 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$2_arc_func_Boolf_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getNodeLinks$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(311);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(313);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$0_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getNodeLinks$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(284);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, (frame[5].o)));
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[4].o)))->F_autolink) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) >= ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[4].o)))->F_maxNodes)) goto label_1;
	}
	{
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[4].o)))->F_laserRange) * (jfloat(8.0f));
	LINE_NUMBER(282);
	jint temp3 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_mindustry_world_Block_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_mindustry_world_Block_float_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, temp2);
	if (temp3 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	LINE_NUMBER(283);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	LINE_NUMBER(284);
	jint temp0 = (jint)SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_world_Tile_mindustry_world_Tile_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size;
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_7);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp1 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_9;
label_1:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$1_mindustry_world_Tile_mindustry_gen_Building_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getNodeLinks$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(287);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o != (frame[1].o)) goto label_2;
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

void M_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$4_arc_func_Cons_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getPotentialLinks$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(269);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerNode_returnInt;
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_returnInt = (temp0 + (jint(1)));
	if (temp0 >= ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_maxNodes)) goto label_1;
	}
	{
	LINE_NUMBER(270);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(271);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$3_mindustry_world_Tile_mindustry_gen_Building_mindustry_gen_Building_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getPotentialLinks$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp1 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)));
	frame[3].i = (-temp1);
	LINE_NUMBER(262);
	if ((frame[3].i) == 0) goto label_2;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(263);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float])(ctx, (frame[2].o), (frame[0].o));
	jint temp2 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$2_arc_func_Boolf_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getPotentialLinks$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(255);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$0_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getPotentialLinks$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(229);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_connectedPower) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_1;
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp1 = (jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserRange) * (jfloat(8.0f));
	LINE_NUMBER(226);
	jint temp3 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2);
	if (temp3 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerNode_graphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	LINE_NUMBER(228);
	jint temp0 = (jint)SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_world_Tile_mindustry_world_Tile_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(229);
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (temp0 >= ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, sp[0].o))))->F_maxNodes)) goto label_1;
	}
label_6:;
	{
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size;
	LINE_NUMBER(230);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_8);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp1 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_10;
label_1:;
	INST_ICONST(0);
label_10:;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$1_mindustry_world_Tile_mindustry_gen_Building_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$getPotentialLinks$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(231);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o != (frame[1].o)) goto label_2;
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

jbool M_mindustry_world_blocks_power_PowerNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$changePlacementPath$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[2].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y));
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_lambda$drawPlace$0_int_int_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$drawPlace$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_laserColor1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_laserOpacity) * (jfloat(0.5f))));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp1 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	jint temp4 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	((func_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(172);
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp7 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp5, temp6, temp7, sp[0].o);
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$0_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makeBatteryBalance$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(135);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_7);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_3(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$3_mindustry_gen_Building_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makeBatteryBalance$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / temp1));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makeBatteryBalance$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	{
	LINE_NUMBER(138);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_powerBar;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$1_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makeBatteryBalance$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.powerstored"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[3].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_graph;
	LINE_NUMBER(137);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(temp1)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp2 = jint(1);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[3].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_graph;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(temp3)));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$0_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makePowerBalance$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(126);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_9);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_4(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$3_mindustry_gen_Building_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makePowerBalance$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerNeeded_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerNeeded_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / temp1));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makePowerBalance$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	{
	LINE_NUMBER(129);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_powerBar;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$1_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$makePowerBalance$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(127);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.powerbalance"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	LINE_NUMBER(128);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[3].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_graph;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float])(ctx, sp[3].o);
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if ((floatCompare(temp1, (jfloat(0)), -1)) < 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"+"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 6;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[3].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong((temp0 * (jfloat(60.0f))))));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[5].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[3].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_PowerNode_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$setBars$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_10);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Prov_11);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_5(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Floatp_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerNode_lambda$setBars$3_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$setBars$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	popStackFrame(ctx);
	return ((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_maxNodes))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_PowerNode_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	{
	LINE_NUMBER(120);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_PowerNode_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$setBars$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.powerlines"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[3].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_links;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[3].o))->F_size));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_maxNodes));
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_lambda$new$1_mindustry_gen_Building_Array1_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$new$1", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(98);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	init_arc_struct_IntSeq_arc_struct_IntSeq(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(101);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_Integer)));
	sp[0].o = checkCast(ctx, &class_arc_func_Cons2, sp[0].o);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[4].i));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(101);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(106);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_9;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_Integer)));
	sp[0].o = checkCast(ctx, &class_arc_func_Cons2, sp[0].o);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[1].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y;
	jint temp4 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[1].o));
	jint temp5 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp2, (temp3 + temp4));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp5);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(106);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode_lambda$new$0_mindustry_gen_Building_java_lang_Integer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:lambda$new$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	frame[3].o = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[3].o)))->F_links;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp1);
	frame[5].i = temp2;
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(65);
	if ((frame[5].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[3].o)))->F_links;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(68);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_10:;
	{
	LINE_NUMBER(70);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(73);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, (frame[7].o), (frame[1].o));
	LINE_NUMBER(75);
	((func_mindustry_world_blocks_power_PowerGraph_update) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_update])(ctx, (frame[7].o));
	LINE_NUMBER(77);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o == (frame[7].o)) goto label_14;
	}
	{
	LINE_NUMBER(79);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(81);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, (frame[8].o), (frame[4].o));
	LINE_NUMBER(83);
	((func_mindustry_world_blocks_power_PowerGraph_update) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_update])(ctx, (frame[8].o));
	}
label_14:;
	LINE_NUMBER(85);
	goto label_18;
label_7:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_18;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_18;
	{
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[3].o)))->F_links;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) >= ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[0].o)))->F_maxNodes)) goto label_18;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[3].o)))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_21:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[3].o)))->F_graph;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_power_PowerNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_power_PowerBlock(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	{
	LINE_NUMBER(26);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_returnInt = (jint(0));
	LINE_NUMBER(27);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_graphs = sp[0].o;
	LINE_NUMBER(330);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode_invoke_arc_func_Boolf_9);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_planFinder = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_power_PowerNode[] {
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
	(void *) M_mindustry_world_blocks_power_PowerNode_init,
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
	(void *) M_mindustry_world_blocks_power_PowerNode_setStats,
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
	(void *) M_mindustry_world_blocks_power_PowerNode_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_blocks_power_PowerNode_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_changePlacementPath_arc_struct_Seq_int,
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
	(void *) M_mindustry_world_blocks_power_PowerNode_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_blocks_power_PowerNode_planConfigClipSize_R_float,
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
	(void *) M_mindustry_world_blocks_power_PowerNode_setupColor_float,
	(void *) M_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int,
	(void *) M_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_mindustry_world_Block_float_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_float_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons,
	(void *) M_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$4_arc_func_Cons_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$0_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$drawPlace$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$setBars$3_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$new$1_mindustry_gen_Building_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_blocks_power_PowerNode_lambda$new$0_mindustry_gen_Building_java_lang_Integer,
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
	{ "setupColor", "(F)V" },
	{ "drawLaser", "(FFFFII)V" },
	{ "drawLaser", "(FFFFIIZ)V" },
	{ "overlaps", "(FFLmindustry/world/Tile;Lmindustry/world/Block;F)Z" },
	{ "overlaps", "(FFLmindustry/world/Tile;F)Z" },
	{ "overlaps", "(Lmindustry/gen/Building;Lmindustry/gen/Building;F)Z" },
	{ "overlaps", "(Lmindustry/world/Tile;Lmindustry/world/Tile;F)Z" },
	{ "overlaps", "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z" },
	{ "getPotentialLinks", "(Lmindustry/world/Tile;Lmindustry/game/Team;Larc/func/Cons;)V" },
	{ "linkValid", "(Lmindustry/gen/Building;Lmindustry/gen/Building;)Z" },
	{ "linkValid", "(Lmindustry/gen/Building;Lmindustry/gen/Building;Z)Z" },
	{ "lambda$getPotentialLinks$4", "(Larc/func/Cons;Lmindustry/gen/Building;)V" },
	{ "lambda$getPotentialLinks$0", "(Lmindustry/world/Tile;Lmindustry/game/Team;Lmindustry/gen/Building;)Z" },
	{ "lambda$changePlacementPath$0", "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z" },
	{ "lambda$drawPlace$0", "(IILmindustry/gen/Building;)V" },
	{ "lambda$setBars$0", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$3", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;" },
	{ "lambda$new$1", "(Lmindustry/gen/Building;[Larc/math/geom/Point2;)V" },
	{ "lambda$new$0", "(Lmindustry/gen/Building;Ljava/lang/Integer;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild,
};

static FieldMetadata fields[] {
	{ "returnInt", &class_int, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_returnInt, "I", 12 },
	{ "graphs", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_graphs, "Larc/struct/ObjectSet;", 28 },
	{ "maxRange", &class_float, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_maxRange, "F", 12 },
	{ "laser", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_power_PowerNode, F_laser), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_power_PowerNode, F_laserEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserRange", &class_float, offsetof(mindustry_world_blocks_power_PowerNode, F_laserRange), "F", 1 },
	{ "maxNodes", &class_int, offsetof(mindustry_world_blocks_power_PowerNode, F_maxNodes), "I", 1 },
	{ "autolink", &class_boolean, offsetof(mindustry_world_blocks_power_PowerNode, F_autolink), "Z", 1 },
	{ "drawRange", &class_boolean, offsetof(mindustry_world_blocks_power_PowerNode, F_drawRange), "Z", 1 },
	{ "sameBlockConnection", &class_boolean, offsetof(mindustry_world_blocks_power_PowerNode, F_sameBlockConnection), "Z", 1 },
	{ "laserScale", &class_float, offsetof(mindustry_world_blocks_power_PowerNode, F_laserScale), "F", 1 },
	{ "useLod", &class_boolean, offsetof(mindustry_world_blocks_power_PowerNode, F_useLod), "Z", 1 },
	{ "powerLayer", &class_float, offsetof(mindustry_world_blocks_power_PowerNode, F_powerLayer), "F", 1 },
	{ "laserColor1", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_power_PowerNode, F_laserColor1), "Larc/graphics/Color;", 1 },
	{ "laserColor2", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_power_PowerNode, F_laserColor2), "Larc/graphics/Color;", 1 },
	{ "currentFindX", &class_int, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_currentFindX, "I", 10 },
	{ "currentFindY", &class_int, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_currentFindY, "I", 10 },
	{ "currentPlan", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_currentPlan, "Lmindustry/entities/units/BuildPlan;", 10 },
	{ "planFinder", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_world_blocks_power_PowerNode_planFinder, "Larc/func/Boolf;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_PowerNode_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_power_PowerNode_setBars, VTABLE_mindustry_world_blocks_power_PowerNode_setBars, "()V", 1 },
	{ "makePowerBalance", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_makePowerBalance_R_arc_func_Func, 0, "()Larc/func/Func;", 9 },
	{ "makeBatteryBalance", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_makeBatteryBalance_R_arc_func_Func, 0, "()Larc/func/Func;", 9 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_power_PowerNode_setStats, VTABLE_mindustry_world_blocks_power_PowerNode_setStats, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_power_PowerNode_init, VTABLE_mindustry_world_blocks_power_PowerNode_init, "()V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_power_PowerNode_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "changePlacementPath", (intptr_t) M_mindustry_world_blocks_power_PowerNode_changePlacementPath_arc_struct_Seq_int, VTABLE_mindustry_world_blocks_power_PowerNode_changePlacementPath_arc_struct_Seq_int, "(Larc/struct/Seq;I)V", 1 },
	{ "setupColor", (intptr_t) M_mindustry_world_blocks_power_PowerNode_setupColor_float, VTABLE_mindustry_world_blocks_power_PowerNode_setupColor_float, "(F)V", 4 },
	{ "drawLaser", (intptr_t) M_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int, VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int, "(FFFFII)V", 1 },
	{ "drawLaser", (intptr_t) M_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int_boolean, "(FFFFIIZ)V", 1 },
	{ "overlaps", (intptr_t) M_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_mindustry_world_Block_float_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_mindustry_world_Block_float_R_boolean, "(FFLmindustry/world/Tile;Lmindustry/world/Block;F)Z", 4 },
	{ "overlaps", (intptr_t) M_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_float_float_mindustry_world_Tile_float_R_boolean, "(FFLmindustry/world/Tile;F)Z", 4 },
	{ "overlaps", (intptr_t) M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_gen_Building_mindustry_gen_Building_float_R_boolean, "(Lmindustry/gen/Building;Lmindustry/gen/Building;F)Z", 4 },
	{ "overlaps", (intptr_t) M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_float_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_float_R_boolean, "(Lmindustry/world/Tile;Lmindustry/world/Tile;F)Z", 4 },
	{ "overlaps", (intptr_t) M_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_overlaps_mindustry_world_Tile_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z", 1 },
	{ "getPotentialLinks", (intptr_t) M_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons, VTABLE_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons, "(Lmindustry/world/Tile;Lmindustry/game/Team;Larc/func/Cons;)V", 4 },
	{ "getNodeLinks", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/game/Team;Larc/func/Cons;)V", 9 },
	{ "drawPlanConfigTop", (intptr_t) M_mindustry_world_blocks_power_PowerNode_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_power_PowerNode_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "planConfigClipSize", (intptr_t) M_mindustry_world_blocks_power_PowerNode_planConfigClipSize_R_float, VTABLE_mindustry_world_blocks_power_PowerNode_planConfigClipSize_R_float, "()F", 1 },
	{ "linkValid", (intptr_t) M_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;Lmindustry/gen/Building;)Z", 1 },
	{ "linkValid", (intptr_t) M_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean, "(Lmindustry/gen/Building;Lmindustry/gen/Building;Z)Z", 1 },
	{ "insulated", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_world_Tile_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z", 9 },
	{ "insulated", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_gen_Building_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/gen/Building;)Z", 9 },
	{ "insulated", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_insulated_int_int_int_int_R_boolean, 0, "(IIII)Z", 9 },
	{ "lambda$insulated$0", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$insulated$0_int_int_R_boolean, 0, "(II)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$getNodeLinks$4", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$4_arc_func_Cons_mindustry_gen_Building, 0, "(Larc/func/Cons;Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$getNodeLinks$3", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$3_mindustry_world_Tile_mindustry_gen_Building_mindustry_gen_Building_R_int, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Building;Lmindustry/gen/Building;)I", 4106 },
	{ "lambda$getNodeLinks$2", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$2_arc_func_Boolf_mindustry_gen_Building, 0, "(Larc/func/Boolf;Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$getNodeLinks$0", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$0_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/game/Team;Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$getNodeLinks$1", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getNodeLinks$1_mindustry_world_Tile_mindustry_gen_Building_arc_math_geom_Point2_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Building;Larc/math/geom/Point2;)Z", 4106 },
	{ "lambda$getPotentialLinks$4", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$4_arc_func_Cons_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$4_arc_func_Cons_mindustry_gen_Building, "(Larc/func/Cons;Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$getPotentialLinks$3", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$3_mindustry_world_Tile_mindustry_gen_Building_mindustry_gen_Building_R_int, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Building;Lmindustry/gen/Building;)I", 4106 },
	{ "lambda$getPotentialLinks$2", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$2_arc_func_Boolf_mindustry_gen_Building, 0, "(Larc/func/Boolf;Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$getPotentialLinks$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$0_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$0_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Building_R_boolean, "(Lmindustry/world/Tile;Lmindustry/game/Team;Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$getPotentialLinks$1", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$getPotentialLinks$1_mindustry_world_Tile_mindustry_gen_Building_arc_math_geom_Point2_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Building;Larc/math/geom/Point2;)Z", 4106 },
	{ "lambda$changePlacementPath$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z", 4098 },
	{ "lambda$drawPlace$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$drawPlace$0_int_int_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$drawPlace$0_int_int_mindustry_gen_Building, "(IILmindustry/gen/Building;)V", 4098 },
	{ "lambda$makeBatteryBalance$0", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$0_mindustry_gen_Building_R_mindustry_ui_Bar, 0, "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$makeBatteryBalance$3", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$3_mindustry_gen_Building_R_float, 0, "(Lmindustry/gen/Building;)F", 4106 },
	{ "lambda$makeBatteryBalance$2", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$makeBatteryBalance$1", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makeBatteryBalance$1_mindustry_gen_Building_R_java_lang_CharSequence, 0, "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$makePowerBalance$0", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$0_mindustry_gen_Building_R_mindustry_ui_Bar, 0, "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$makePowerBalance$3", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$3_mindustry_gen_Building_R_float, 0, "(Lmindustry/gen/Building;)F", 4106 },
	{ "lambda$makePowerBalance$2", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$makePowerBalance$1", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$makePowerBalance$1_mindustry_gen_Building_R_java_lang_CharSequence, 0, "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar, "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$3", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$setBars$3_mindustry_gen_Building_R_float, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$setBars$3_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 4098 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_power_PowerNode_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence, "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$new$1_mindustry_gen_Building_Array1_arc_math_geom_Point2, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$new$1_mindustry_gen_Building_Array1_arc_math_geom_Point2, "(Lmindustry/gen/Building;[Larc/math/geom/Point2;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode_lambda$new$0_mindustry_gen_Building_java_lang_Integer, VTABLE_mindustry_world_blocks_power_PowerNode_lambda$new$0_mindustry_gen_Building_java_lang_Integer, "(Lmindustry/gen/Building;Ljava/lang/Integer;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_power_PowerNode, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_power_PowerNode{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/PowerNode",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_power_PowerBlock,
		.size = sizeof(mindustry_world_blocks_power_PowerNode),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_PowerNode,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_PowerNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_PowerNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 54,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 209,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_PowerNode = registerClass(&class_mindustry_world_blocks_power_PowerNode);

}
