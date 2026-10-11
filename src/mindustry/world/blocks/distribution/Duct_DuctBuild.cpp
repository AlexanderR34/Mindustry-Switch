#include "mindustry/world/blocks/distribution/Duct_DuctBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/blocks/distribution/Duct_DuctBuild.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/distribution/Duct.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Edges.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "mindustry/game/Team.h"
#include "arc/util/io/Writes.h"

extern "C" {

static inline mindustry_world_blocks_distribution_Duct* getDuct(jobject self) {
	if (!self) return nullptr;
	auto db = (mindustry_world_blocks_distribution_Duct$DuctBuild*)self;
	if (db->F_this$0) return (mindustry_world_blocks_distribution_Duct*)db->F_this$0;
	if (((mindustry_gen_Building*)self)->F_block) {
		db->F_this$0 = (jref)((mindustry_gen_Building*)self)->F_block;
		return (mindustry_world_blocks_distribution_Duct*)db->F_this$0;
	}
	return nullptr;
}

void mark_mindustry_world_blocks_distribution_Duct$DuctBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_distribution_Duct$DuctBuild *) object;
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_nextc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextc)->clazz)->markFunction)((jobject) self->F_nextc, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_Duct$DuctBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_distribution_Duct$DuctBuild_mindustry_world_blocks_distribution_Duct(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Duct$DuctBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(134);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_recDir = (jint(0));
	LINE_NUMBER(138);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_backCapped = (jint(0));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	((func_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_drawCached(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:drawCached", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	((func_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(151);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_rotdeg_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(152);
	frame[3].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(154);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.7f)));
	LINE_NUMBER(157);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(158);
	if ((((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_blending) & ((jint(1)) << (frame[4].i))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(159);
	frame[5].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(160);
	if ((frame[4].i) != 0) goto label_10;
	}
	INST_FLOAD(2);
	goto label_11;
label_10:;
	{
	jfloat temp0 = jfloat(((frame[5].i) * (90)));
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[5].i));
	jfloat temp2 = temp0 + ((jfloat((temp1 * (8)))) * (jfloat(0.75f)));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp4 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[5].i));
	jfloat temp5 = temp3 + ((jfloat((temp4 * (8)))) * (jfloat(0.75f)));
	jint temp6 = jint(0);
	jfloat temp7 = frame[6].f;
	sp[1].f = temp2;
	sp[2].f = temp5;
	sp[3].i = temp6;
	sp[4].f = temp7;
	sp += 5;
	if ((frame[4].i) == 0) goto label_13;
	}
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	(sp++)->o = SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
	goto label_14;
label_13:;
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	(sp++)->o = SF_mindustry_world_blocks_Autotiler$SliceMode_top;
label_14:;
	INST_ILOAD(1);
	POP_N(7); // Pop method args
	((func_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i, sp[4].f, sp[5].o, sp[6].i);
label_7:;
	{
	LINE_NUMBER(157);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(166);
	if ((frame[1].i) != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(167);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.6f)));
	LINE_NUMBER(168);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp0 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, ((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_recDir));
	jfloat temp1 = (jfloat((temp0 * (8)))) / (jfloat(2));
	jint temp2 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, ((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_recDir));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat((temp2 * (8)))) / (jfloat(2))));
	jint temp3 = frame[3].i;
	LINE_NUMBER(169);
	jint temp4 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, temp3);
	jfloat temp5 = (jfloat((temp4 * (8)))) / (jfloat(2));
	jint temp6 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[3].i));
	jfloat temp7 = (jfloat((temp6 * (8)))) / (jfloat(2));
	jfloat temp8 = ((jfloat)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_progress) + (jfloat(1));
	jfloat temp9 = jfloat(2);
	jfloat temp10 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp11 = temp8 / (temp9 - (temp10 / ((jfloat)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[1].o))->F_speed)));
	LINE_NUMBER(170);
	jfloat temp12 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp11);
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp5, temp7, temp12);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jfloat temp13 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp14 = temp13 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp15 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp14, (temp15 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (jfloat(5.0f)), (jfloat(5.0f)));
	}
label_15:;
	{
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_scl_float_float(ctx, (jfloat(((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_xscl))), (jfloat(((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_yscl))));
	LINE_NUMBER(176);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.7f)));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_blendbits;
	jfloat temp3 = frame[2].f;
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_none;
	((func_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, (frame[1].i));
	LINE_NUMBER(178);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(180);
	if ((frame[1].i) != 0) goto label_26;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	{
	LINE_NUMBER(182);
	if (((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_capped) == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_capRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_capRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_27:;
	{
	LINE_NUMBER(183);
	if (((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_backCapped) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_capRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_capRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (temp2 + (jfloat(180.0f))));
	}
label_28:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_payloadDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:payloadDraw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:drawAt", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(192);
	if ((frame[6].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[1].o))->F_botRegions;
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_Duct_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (frame[5].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[4].f));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[1].o))->F_topRegions;
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_Duct_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (frame[5].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[4].f));
	}
label_3:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:updateTile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_progress;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_edelta_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_progress = (temp0 + ((temp1 / ((jfloat)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[1].o))->F_speed)) * (jfloat(2))));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(204);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (temp1 - (temp2 / ((jfloat)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_speed))), -1)) < 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_moveForward_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_moveForward_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(206);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_progress;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_progress = (fmodf(temp0, (temp1 - (temp2 / ((jfloat)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[1].o))->F_speed)))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(210);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_8;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_Duct$DuctBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_armored) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_mindustry_gen_Building_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_front_R_mindustry_gen_Building])(ctx, sp[0].o);
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_isDuct) != 0) goto label_5;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte])(ctx, sp[0].o, sp[1].o);
	if (temp0 != ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_1;
	}
	goto label_5;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	LINE_NUMBER(226);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_Tile_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp1 - ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)));
	if (temp2 == (jint(2))) goto label_1;
	}
label_5:;
	INST_ICONST(1);
	goto label_9;
label_1:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_distribution_Duct$DuctBuild_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:removeStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(233);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:handleStack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(239);
	M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(240);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:handleItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(245);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(246);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(-1.0f));
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_relativeToEdge_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_relativeToEdge_mindustry_world_Tile_R_byte])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_recDir = temp0;
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(249);
	((func_mindustry_world_blocks_distribution_Duct$DuctBuild_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:onProximityUpdate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	auto duct = getDuct(self);
	LINE_NUMBER(254);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(255);
	((func_mindustry_world_blocks_distribution_Duct$DuctBuild_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_recache])(ctx, (frame[0].o));
	LINE_NUMBER(257);
	sp[0].o = (jobject)getDuct(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (!sp[0].o || !sp[1].o) {
		popStackFrame(ctx);
		return;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_Duct_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(258);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_blendbits = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(259);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_xscl = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1))));
	LINE_NUMBER(260);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_yscl = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2))));
	LINE_NUMBER(261);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_blending = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(4))));
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_next;
	frame[3].o = sp[1].o;
	sp += 1;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_Duct$DuctBuild)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_Duct$DuctBuild, (frame[3].o)));
	sp[0].o = frame[2].o;
	sp += 1;
	goto label_11;
	}
label_9:;
	INST_ACONST_NULL();
label_11:;
	{
	sp -= 2;
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_nextc = (jref) sp[1].o;
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_distribution_Duct$DuctBuild_back_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_back_R_mindustry_gen_Building])(ctx, (frame[0].o));
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp += 1;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) != 0) goto label_15;
	}
label_14:;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 2;
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_capped = sp[1].i;
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_blendbits) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_prev;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_prev;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) != 0) goto label_18;
	}
label_19:;
	INST_ICONST(1);
	goto label_20;
label_18:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 2;
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_backCapped = sp[1].i;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_distribution_Duct$DuctBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(278);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_recDir));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct$DuctBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(283);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(284);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_recDir = temp0;
	}
label_2:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_distribution_Duct$DuctBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct$DuctBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jdouble(((jfloat)((mindustry_world_blocks_distribution_Duct$DuctBuild *) NULL_CHECK((frame[0].o)))->F_progress)));
	}
label_1:;
	{
	LINE_NUMBER(293);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_distribution_Duct$DuctBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field current
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field prev
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field nextc
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_distribution_Duct$DuctBuild[] {
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_sense_mindustry_logic_LAccess_R_double,
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
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_removeStack_mindustry_type_Item_int_R_int,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_draw,
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_drawCached,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_payloadDraw,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean,
	(void *) M_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean,
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
	{ "draw", "(Z)V" },
	{ "drawAt", "(FFIFLmindustry/world/blocks/Autotiler$SliceMode;Z)V" },
};

static FieldMetadata fields[] {
	{ "progress", &class_float, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_progress), "F", 1 },
	{ "current", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_current), "Lmindustry/type/Item;", 1 },
	{ "recDir", &class_int, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_recDir), "I", 1 },
	{ "blendbits", &class_int, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_blendbits), "I", 1 },
	{ "xscl", &class_int, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_xscl), "I", 1 },
	{ "yscl", &class_int, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_yscl), "I", 1 },
	{ "blending", &class_int, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_blending), "I", 1 },
	{ "next", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_next), "Lmindustry/gen/Building;", 1 },
	{ "prev", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_prev), "Lmindustry/gen/Building;", 1 },
	{ "nextc", &class_mindustry_world_blocks_distribution_Duct$DuctBuild, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_nextc), "Lmindustry/world/blocks/distribution/Duct$DuctBuild;", 1 },
	{ "capped", &class_boolean, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_capped), "Z", 1 },
	{ "backCapped", &class_boolean, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_backCapped), "Z", 1 },
	{ "this$0", &class_mindustry_world_blocks_distribution_Duct, offsetof(mindustry_world_blocks_distribution_Duct$DuctBuild, F_this$0), "Lmindustry/world/blocks/distribution/Duct;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_Duct$DuctBuild_mindustry_world_blocks_distribution_Duct, 0, "(Lmindustry/world/blocks/distribution/Duct;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_draw, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_draw, "()V", 1 },
	{ "drawCached", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_drawCached, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_drawCached, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_draw_boolean, "(Z)V", 1 },
	{ "payloadDraw", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_payloadDraw, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_payloadDraw, "()V", 1 },
	{ "drawAt", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_drawAt_float_float_int_float_mindustry_world_blocks_Autotiler$SliceMode_boolean, "(FFIFLmindustry/world/blocks/Autotiler$SliceMode;Z)V", 4 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_updateTile, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_updateTile, "()V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "removeStack", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "handleStack", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "handleItem", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_onProximityUpdate, "()V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_version_R_byte, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_distribution_Duct$DuctBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_distribution_Duct$DuctBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
};

Class class_mindustry_world_blocks_distribution_Duct$DuctBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/Duct$DuctBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_distribution_Duct$DuctBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_Duct$DuctBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_Duct$DuctBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_Duct$DuctBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_distribution_Duct,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 312,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_Duct$DuctBuild = registerClass(&class_mindustry_world_blocks_distribution_Duct$DuctBuild);

}

