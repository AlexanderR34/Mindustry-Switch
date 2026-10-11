#include "mindustry/world/blocks/Autotiler.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Edges.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Eachable.h"
#include "arc/math/geom/Point2.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/blocks/Autotiler_AutotilerHolder.h"
#include "java/util/Arrays.h"
#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/Team.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"

extern "C" {


void mark_mindustry_world_blocks_Autotiler(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_world_blocks_Autotiler *) object;
}

void clinit_mindustry_world_blocks_Autotiler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_world_blocks_Autotiler_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:sliced", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_none;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ALOAD(1);
	goto label_2;
label_1:;
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:topHalf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(63);
	((func_arc_graphics_g2d_TextureRegion_setWidth_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setWidth_int])(ctx, (frame[2].o), (((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width) / (jint(2))));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:botHalf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(70);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(71);
	frame[3].i = ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width);
	LINE_NUMBER(72);
	((func_arc_graphics_g2d_TextureRegion_setWidth_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setWidth_int])(ctx, (frame[2].o), ((frame[3].i) / (jint(2))));
	LINE_NUMBER(73);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int])(ctx, (frame[2].o));
	((func_arc_graphics_g2d_TextureRegion_setX_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setX_int])(ctx, sp[0].o, (temp0 + (frame[3].i)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_Autotiler_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:getTiling", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(79);
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals;
	frame[3].o = sp[0].o;
	LINE_NUMBER(81);
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(82);
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan = (frame[1].o);
	LINE_NUMBER(83);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) + (jint(2));
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder;
	sp[0].o = (jobject)SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation), (frame[3].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_worldContext));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:buildBlending", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(102);
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult;
	frame[5].o = sp[0].o;
	LINE_NUMBER(103);
	ARRAY_ACCESS(jint, (frame[5].o), (jint(0))) = (jint(0));
	LINE_NUMBER(104);
	sp[0].o = frame[5].o;
	jint temp0 = jint(1);
	sp[1].o = frame[5].o;
	jint temp1 = jint(2);
	jint temp2 = jint(1);
	ARRAY_ACCESS(jint, sp[1].o, temp1) = temp2;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(107);
	jint temp6 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(2)), (frame[4].i));
	if (temp6 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(1)), (frame[4].i));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(3)), (frame[4].i));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(1)), (frame[4].i));
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(3)), (frame[4].i));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(1)), (frame[4].i));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(2)), (frame[4].i));
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(2);
	goto label_5;
label_7:;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(3)), (frame[4].i));
	if (temp0 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(2)), (frame[4].i));
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(3);
	goto label_5;
label_8:;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(1)), (frame[4].i));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(4);
	goto label_5;
label_9:;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (jint(3)), (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(5);
	goto label_5;
label_10:;
	LINE_NUMBER(113);
	INST_ICONST(-1);
label_5:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(114);
	((func_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int, (frame[0].o)))(ctx, (frame[0].o), (frame[6].i), (frame[5].o));
	LINE_NUMBER(118);
	ARRAY_ACCESS(jint, (frame[5].o), (jint(3))) = (jint(0));
	LINE_NUMBER(120);
	frame[7].i = (jint(0));
	}
label_14:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_15;
	}
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[7].i), (frame[4].i));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = frame[5].o;
	jint temp0 = jint(3);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | ((jint(1)) << (frame[7].i)));
	}
label_17:;
	{
	LINE_NUMBER(120);
	INST_IINC(7, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(128);
	ARRAY_ACCESS(jint, (frame[5].o), (jint(4))) = (jint(0));
	LINE_NUMBER(130);
	frame[7].i = (jint(0));
	}
label_20:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_21;
	}
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, ((frame[2].i) - (frame[7].i)), (jint(4)));
	frame[8].i = temp0;
	LINE_NUMBER(132);
	jint temp1 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[7].i), (frame[4].i));
	if (temp1 == 0) goto label_24;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_24;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building])(ctx, (frame[1].o), (frame[8].i));
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building])(ctx, (frame[1].o), (frame[8].i));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_squareSprite) != 0) goto label_24;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = frame[5].o;
	jint temp0 = jint(4);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | ((jint(1)) << (frame[7].i)));
	}
label_24:;
	{
	LINE_NUMBER(130);
	INST_IINC(7, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:transformCase", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(147);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(148);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(3));
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(149);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(4));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(150);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(2));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(152);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(2));
	LINE_NUMBER(153);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(2))) = (jint(-1));
	LINE_NUMBER(154);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(156);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(1));
	LINE_NUMBER(157);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(2))) = (jint(-1));
	LINE_NUMBER(158);
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(159);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(1));
	}
label_7:;
	LINE_NUMBER(161);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_Autotiler_facing_int_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:facing", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(176);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[3].i));
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp2 = frame[2].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[3].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:blends", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, ((frame[2].i) - (frame[4].i)), (jint(4)));
	frame[6].i = temp0;
	LINE_NUMBER(181);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(182);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y;
	jint temp3 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp4 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	if (temp4 == 0) goto label_2;
	}
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(187);
	if ((frame[5].i) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].i));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:blends", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, ((frame[2].i) - (frame[3].i)), (jint(4)));
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(194);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[4].o));
	jint temp3 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp4 = (jint)((func_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_Autotiler, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	if (temp4 == 0) goto label_2;
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

jbool M_mindustry_world_blocks_Autotiler_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:blendsArmored", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), (frame[3].i), (frame[4].i));
	if (temp3 != 0) goto label_1;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(199);
	jint temp2 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, (frame[6].o), (frame[3].i), (frame[4].i), (frame[1].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(200);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, temp0, temp1, sp[1].o);
	jint temp2 = (jint)((func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte])(ctx, sp[0].o, (frame[1].o));
	if (temp2 == (frame[2].i)) goto label_1;
	}
label_3:;
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(201);
	jint temp2 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 == 0) goto label_6;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp3 == 0) goto label_6;
	}
label_1:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_Autotiler_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:notLookingAt", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean])(ctx, (frame[6].o), (frame[3].i), (frame[4].i), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp3 != 0) goto label_2;
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

jbool M_mindustry_world_blocks_Autotiler_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:lookingAtEither", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = frame[2].i;
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, temp1);
	jint temp2 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jint temp4 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp2, (temp3 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), (frame[3].i), (frame[4].i));
	if (temp4 != 0) goto label_2;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(216);
	jint temp2 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 == 0) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = frame[5].i;
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, temp1);
	jint temp2 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp3 = frame[4].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp4 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp2, (temp3 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp4 == 0) goto label_5;
	}
label_2:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_Autotiler_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler:lookingAt", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, (frame[5].o), (frame[3].i), (frame[4].i), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[6].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = frame[2].i;
	LINE_NUMBER(233);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, temp1);
	jint temp2 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jint temp4 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp2, (temp3 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	if (temp4 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_Autotiler;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getTiling
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_world_blocks_Autotiler[] {
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
	(void *) M_mindustry_world_blocks_Autotiler_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_Autotiler_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int,
	(void *) M_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int,
	(void *) M_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int,
	(void *) M_mindustry_world_blocks_Autotiler_facing_int_int_int_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean,
	(void *) nullptr,
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
	{ "sliced", "(Larc/graphics/g2d/TextureRegion;Lmindustry/world/blocks/Autotiler$SliceMode;)Larc/graphics/g2d/TextureRegion;" },
	{ "topHalf", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "botHalf", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "getTiling", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)[I" },
	{ "buildBlending", "(Lmindustry/world/Tile;I[Lmindustry/entities/units/BuildPlan;Z)[I" },
	{ "transformCase", "(I[I)V" },
	{ "facing", "(IIIII)Z" },
	{ "blends", "(Lmindustry/world/Tile;I[Lmindustry/entities/units/BuildPlan;IZ)Z" },
	{ "blends", "(Lmindustry/world/Tile;II)Z" },
	{ "blendsArmored", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
	{ "notLookingAt", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
	{ "lookingAtEither", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
	{ "lookingAt", "(Lmindustry/world/Tile;IIILmindustry/world/Block;)Z" },
	{ "blends", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_Autotiler$SliceMode,
	&class_mindustry_world_blocks_Autotiler$AutotilerHolder,
};

static MethodMetadata methods[] {
	{ "sliced", (intptr_t) M_mindustry_world_blocks_Autotiler_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion, INDEX_mindustry_world_blocks_Autotiler_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;Lmindustry/world/blocks/Autotiler$SliceMode;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "topHalf", (intptr_t) M_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, INDEX_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "botHalf", (intptr_t) M_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, INDEX_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getTiling", (intptr_t) M_mindustry_world_blocks_Autotiler_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int, INDEX_mindustry_world_blocks_Autotiler_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)[I", 1 },
	{ "buildBlending", (intptr_t) M_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int, INDEX_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int, "(Lmindustry/world/Tile;I[Lmindustry/entities/units/BuildPlan;Z)[I", 1 },
	{ "transformCase", (intptr_t) M_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int, INDEX_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int, "(I[I)V", 1 },
	{ "facing", (intptr_t) M_mindustry_world_blocks_Autotiler_facing_int_int_int_int_int_R_boolean, INDEX_mindustry_world_blocks_Autotiler_facing_int_int_int_int_int_R_boolean, "(IIIII)Z", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean, "(Lmindustry/world/Tile;I[Lmindustry/entities/units/BuildPlan;IZ)Z", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean, "(Lmindustry/world/Tile;II)Z", 1 },
	{ "blendsArmored", (intptr_t) M_mindustry_world_blocks_Autotiler_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, INDEX_mindustry_world_blocks_Autotiler_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1 },
	{ "notLookingAt", (intptr_t) M_mindustry_world_blocks_Autotiler_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, INDEX_mindustry_world_blocks_Autotiler_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1 },
	{ "lookingAtEither", (intptr_t) M_mindustry_world_blocks_Autotiler_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, INDEX_mindustry_world_blocks_Autotiler_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1 },
	{ "lookingAt", (intptr_t) M_mindustry_world_blocks_Autotiler_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean, INDEX_mindustry_world_blocks_Autotiler_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIILmindustry/world/Block;)Z", 1 },
	{ "blends", 0, INDEX_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1025 },
};

Class class_mindustry_world_blocks_Autotiler{
		.nativeName = (intptr_t) "mindustry/world/blocks/Autotiler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_Autotiler),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_Autotiler,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_Autotiler,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_Autotiler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_Autotiler = registerClass(&class_mindustry_world_blocks_Autotiler);

}
