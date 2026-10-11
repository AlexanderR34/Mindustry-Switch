#include "mindustry/graphics/DebugCollisionRenderer.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/async/AvoidanceProcess.h"
#include "mindustry/gen/Groups.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/DebugCollisionRenderer_invoke_java_lang_Runnable_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/graphics/DebugCollisionRenderer.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/Tile.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/graphics/DebugCollisionRenderer_invoke_arc_func_Cons_3.h"
#include "mindustry/graphics/DebugCollisionRenderer_invoke_arc_func_Cons_4.h"
#include "mindustry/graphics/DebugCollisionRenderer_invoke_arc_func_Cons_5.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "arc/graphics/Camera.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_graphics_DebugCollisionRenderer_edges;

void mark_mindustry_graphics_DebugCollisionRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_DebugCollisionRenderer_edges)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_DebugCollisionRenderer_edges)->clazz)->markFunction)((jobject) SF_mindustry_graphics_DebugCollisionRenderer_edges, mark, depth + 1);
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
	auto self = (mindustry_graphics_DebugCollisionRenderer *) object;
}

void init_mindustry_graphics_DebugCollisionRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_DebugCollisionRenderer_draw(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(26);
	jfloat temp0 = jfloat(120.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_DebugCollisionRenderer_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_graphics_DebugCollisionRenderer_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_graphics_DebugCollisionRenderer_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(91);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$0_arc_math_geom_Rect(jcontext ctx, jobject param0) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:lambda$draw$0", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_green;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(0.3f)));
	LINE_NUMBER(29);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	jfloat temp0 = jfloat(0.4f);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_magenta;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(38);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jint temp1 = (jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(8.0f))) / (jfloat(2))))) + (jint(1));
	jint temp2 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp1, temp2, (temp3 / (jint(2))));
	frame[1].i = temp4;
	LINE_NUMBER(39);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jint temp5 = (jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(8.0f))) / (jfloat(2))))) + (jint(1));
	jint temp6 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp8 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp5, temp6, (temp7 / (jint(2))));
	frame[2].i = temp8;
	LINE_NUMBER(41);
	frame[3].i = (-(frame[1].i));
	}
label_6:;
	{
	if ((frame[3].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(42);
	frame[4].i = (-(frame[2].i));
	}
label_9:;
	{
	if ((frame[4].i) > (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(43);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	frame[5].i = (temp0 + (frame[3].i));
	LINE_NUMBER(44);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	frame[6].i = (temp1 + (frame[4].i));
	LINE_NUMBER(45);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(46);
	if ((frame[7].o) == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(47);
	frame[8].i = (jint(0));
	}
label_17:;
	{
	if ((frame[8].i) >= (jint(4))) goto label_15;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(49);
	if ((frame[9].o) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(50);
	jfloat temp0 = jfloat(((frame[5].i) * (8)));
	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_DebugCollisionRenderer_edges;
	jfloat temp1 = temp0 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[8].i) * (jint(2))))) * (jfloat(8.0f))) / (jfloat(2)));
	jfloat temp2 = jfloat(((frame[6].i) * (8)));
	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_DebugCollisionRenderer_edges;
	jfloat temp3 = temp2 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[8].i) * (jint(2))) + (jint(1))))) * (jfloat(8.0f))) / (jfloat(2)));
	jfloat temp4 = jfloat(((frame[5].i) * (8)));
	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_DebugCollisionRenderer_edges;
	jfloat temp5 = temp4 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((((frame[8].i) + (jint(1))) % (jint(4))) * (jint(2))))) * (jfloat(8.0f))) / (jfloat(2)));
	jfloat temp6 = jfloat(((frame[6].i) * (8)));
	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_DebugCollisionRenderer_edges;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp1, temp3, temp5, (temp6 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((((frame[8].i) + (jint(1))) % (jint(4))) * (jint(2))) + (jint(1))))) * (jfloat(8.0f))) / (jfloat(2)))));
	}
label_21:;
	{
	LINE_NUMBER(47);
	INST_IINC(8, 1);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(60);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_debugDrawAvoidance) == 0) goto label_22;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_22;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_avoidance;
	sp[0].o = (jobject)((func_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(62);
	if ((frame[8].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[7].o));
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(63);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(1)), (jfloat(1)), (jfloat(0.25f)));
	LINE_NUMBER(64);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[7].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[7].o));
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, (jfloat(4.0f)));
	}
label_22:;
	{
	LINE_NUMBER(42);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(41);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(70);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(0.5f)));
	LINE_NUMBER(80);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_red;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(81);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_graphics_DebugCollisionRenderer_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$3_arc_math_geom_Rect_mindustry_gen_Drawc(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:lambda$draw$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(82);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_clipSize_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_clipSize_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, temp0, temp1, temp2);
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_1;
	}
	{
	LINE_NUMBER(83);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) * (jfloat(0.6f))));
	}
label_1:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$2_arc_math_geom_Rect_mindustry_gen_Drawc(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:lambda$draw$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Drawc_clipSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Drawc, INDEX_mindustry_gen_Drawc_clipSize_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, temp0, temp1, temp2);
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	((func_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	SM_arc_graphics_g2d_Lines_rect_arc_math_geom_Rect(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$1_arc_math_geom_Rect_mindustry_gen_Drawc(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:lambda$draw$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(30);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Hitboxc)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Hitboxc, (frame[1].o)));
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Drawc_clipSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Drawc, INDEX_mindustry_gen_Drawc_clipSize_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, temp0, temp1, temp2);
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_1;
	}
	{
	LINE_NUMBER(31);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Hitboxc_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitSize_R_float, (frame[2].o)))(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, (temp2 / (jfloat(2))));
	}
label_1:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_DebugCollisionRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/DebugCollisionRenderer:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject) createArray(ctx, &class_float, (8));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(-1.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(-1.0f));
	clinit_mindustry_graphics_DebugCollisionRenderer(ctx);
	SF_mindustry_graphics_DebugCollisionRenderer_edges = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_DebugCollisionRenderer[] {
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
};

static FieldMetadata fields[] {
	{ "edges", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_graphics_DebugCollisionRenderer_edges, "[F", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_DebugCollisionRenderer, 0, "()V", 1 },
	{ "draw", (intptr_t) SM_mindustry_graphics_DebugCollisionRenderer_draw, 0, "()V", 9 },
	{ "lambda$draw$0", (intptr_t) SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$0_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 4106 },
	{ "lambda$draw$3", (intptr_t) SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$3_arc_math_geom_Rect_mindustry_gen_Drawc, 0, "(Larc/math/geom/Rect;Lmindustry/gen/Drawc;)V", 4106 },
	{ "lambda$draw$2", (intptr_t) SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$2_arc_math_geom_Rect_mindustry_gen_Drawc, 0, "(Larc/math/geom/Rect;Lmindustry/gen/Drawc;)V", 4106 },
	{ "lambda$draw$1", (intptr_t) SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$1_arc_math_geom_Rect_mindustry_gen_Drawc, 0, "(Larc/math/geom/Rect;Lmindustry/gen/Drawc;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_DebugCollisionRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_DebugCollisionRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/DebugCollisionRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_DebugCollisionRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_DebugCollisionRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_DebugCollisionRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_DebugCollisionRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_DebugCollisionRenderer = registerClass(&class_mindustry_graphics_DebugCollisionRenderer);

}
