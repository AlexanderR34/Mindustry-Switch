#include "mindustry/world/draw/DrawTurret.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/ClassCastException.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Rand.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "arc/util/Nullable.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {

jobject SF_mindustry_world_draw_DrawTurret_rand;

void mark_mindustry_world_draw_DrawTurret(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_draw_DrawTurret_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_draw_DrawTurret_rand)->clazz)->markFunction)((jobject) SF_mindustry_world_draw_DrawTurret_rand, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_draw_DrawTurret *) object;
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
	if (self->F_ammoParts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ammoParts)->clazz)->markFunction)((jobject) self->F_ammoParts, mark, depth + 1);
	if (self->F_basePrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_basePrefix)->clazz)->markFunction)((jobject) self->F_basePrefix, mark, depth + 1);
	if (self->F_liquidDraw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquidDraw)->clazz)->markFunction)((jobject) self->F_liquidDraw, mark, depth + 1);
	if (self->F_base)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_base)->clazz)->markFunction)((jobject) self->F_base, mark, depth + 1);
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
	if (self->F_top)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top)->clazz)->markFunction)((jobject) self->F_top, mark, depth + 1);
	if (self->F_heat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heat)->clazz)->markFunction)((jobject) self->F_heat, mark, depth + 1);
	if (self->F_preview)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preview)->clazz)->markFunction)((jobject) self->F_preview, mark, depth + 1);
	if (self->F_outline)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outline)->clazz)->markFunction)((jobject) self->F_outline, mark, depth + 1);
}

void init_mindustry_world_draw_DrawTurret_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawTurret(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_ammoParts = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_basePrefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(28);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_turretLayer = (jfloat(50.0f));
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_shadowLayer = (jfloat(49.5f));
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_heatLayer = (jfloat(50.1f));
	LINE_NUMBER(32);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_basePrefix = (jref) (frame[1].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawTurret(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawTurret(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_ammoParts = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_basePrefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(28);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_turretLayer = (jfloat(50.0f));
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_shadowLayer = (jfloat(49.5f));
	((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_heatLayer = (jfloat(50.1f));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_setAmmoParts_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:setAmmoParts", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_ammoParts;
	sp[1].o = checkCast(ctx, &class_mindustry_ctype_UnlockableContent, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	sp[2].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_Seq, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (jint(1))))))), (((jobject) &class_mindustry_entities_part_DrawPart)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, getArrayClass(&class_mindustry_entities_part_DrawPart, 1), sp[2].o)));
	LINE_NUMBER(40);
	INST_IINC(2, 2);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:getRegionsToOutline", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(48);
	((func_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(49);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_ammoParts;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_entities_part_DrawPart, 1), sp[0].o));
	LINE_NUMBER(52);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_9;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(53);
	((func_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq])(ctx, (frame[8].o), (frame[2].o));
	LINE_NUMBER(52);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(55);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_region;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_outlinedIcon) <= 0) goto label_13;
	}
	{
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_outlinedIcon;
	sp[0].o = (jobject)((func_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, (frame[1].o));
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, (frame[1].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_outlinedIcon));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_region;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_region;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(61);
	((func_mindustry_world_Block_resetGeneratedIcons) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_resetGeneratedIcons])(ctx, (frame[1].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:drawPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_base;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_preview;
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	sp[1].f = temp2;
	sp[2].f = temp3;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_rotate) == 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation))) * (jfloat(90.0f))) - (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 4;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_top;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_top;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_rotate) == 0) goto label_7;
	}
	{
	jfloat temp0 = ((jfloat(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation))) * (jfloat(90.0f))) - (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_FCONST(0);
label_8:;
	POP_N(4); // Pop method args
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
label_5:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:draw", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret, sp[0].o));
	LINE_NUMBER(76);
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, (frame[1].o)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_base;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(79);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(81);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_shadowLayer));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_preview;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	jfloat temp1 = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)) - ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[2].o)))->F_elevation);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	jfloat temp3 = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)) - ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[2].o)))->F_elevation);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float])(ctx, (frame[3].o));
	SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, temp3, temp4);
	LINE_NUMBER(85);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_turretLayer));
	LINE_NUMBER(87);
	((func_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(88);
	((func_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_outline;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(93);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (((jfloat)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_turretLayer) - (jfloat(1,000000e-02f))));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_outline;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float])(ctx, (frame[3].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, temp3, temp4);
	LINE_NUMBER(95);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_turretLayer));
	}
label_12:;
	{
	LINE_NUMBER(98);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float])(ctx, (frame[3].o));
	frame[4].f = temp0;
	LINE_NUMBER(101);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat(1)) - (frame[4].f);
	jfloat temp3 = (jfloat(1)) - (frame[4].f);
	jfloat temp4 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_heat;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_curRecoil;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_charge;
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	jfloat temp8 = temp7 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp9 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5, temp6, temp8, (temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[3].o)))->F_rotation));
	frame[5].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(104);
	sp[0].o = frame[5].o;
	sp += 1;
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[7].o)))->F_recoilIndex) < 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_curRecoils;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_curRecoils;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[7].o)))->F_recoilIndex));
	sp[0].f = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(3);
	sp[-1].f = ((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[-1].o))->F_curRecoil;
label_21:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(105);
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, (frame[7].o), (frame[5].o));
	LINE_NUMBER(106);
	goto label_18;
	}
label_10:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_ammoParts;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent])(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(109);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float])(ctx, (frame[3].o));
	frame[4].f = temp0;
	LINE_NUMBER(110);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat(1)) - (frame[4].f);
	jfloat temp3 = (jfloat(1)) - (frame[4].f);
	jfloat temp4 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_heat;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_curRecoil;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_charge;
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	jfloat temp8 = temp7 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp9 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_recoilOffset;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5, temp6, temp8, (temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[3].o)))->F_rotation));
	frame[5].o = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_ammoParts;
	sp[1].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, getArrayClass(&class_mindustry_entities_part_DrawPart, 1), sp[0].o));
	LINE_NUMBER(113);
	if ((frame[6].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(114);
	frame[7].o = (frame[6].o);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_30:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_24;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(115);
	sp[0].o = frame[5].o;
	sp += 1;
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[10].o)))->F_recoilIndex) < 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_curRecoils;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[3].o)))->F_curRecoils;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[10].o)))->F_recoilIndex));
	sp[0].f = temp0;
	sp += 1;
	goto label_33;
	}
label_32:;
	INST_ALOAD(3);
	sp[-1].f = ((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[-1].o))->F_curRecoil;
label_33:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(116);
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, (frame[10].o), (frame[5].o));
	LINE_NUMBER(114);
	INST_IINC(9, 1);
	goto label_30;
	}
label_24:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:drawTurret", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_region;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_region;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, temp3, temp4);
	}
label_1:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_liquid;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_liquidDraw;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[-1].o))->F_liquidDraw;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_liquid;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_liquids;
	jfloat temp4 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[1].o, (frame[3].o));
	jfloat temp5 = temp4 / ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_liquidCapacity);
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[3].o)))->F_color;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(1)));
	jfloat temp6 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float])(ctx, (frame[2].o));
	SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp1, temp3, temp5, sp[1].o, temp6);
	}
label_3:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_top;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_top;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, temp3, temp4);
	}
label_8:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:drawHeat", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(138);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_heat), (jfloat(1,000000e-05f)), 1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_heat;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[1].o)))->F_heatColor;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_heat));
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_recoilOffset;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float])(ctx, (frame[2].o));
	SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, sp[1].o, temp1, temp3, temp4, ((jfloat)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_heatLayer));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawTurret_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_turrets_Turret)) != 0) goto label_1;
	}
	{
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This drawer can only be used on turrets."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-preview"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_region;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_preview = (jref) sp[1].o;
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_outline = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-liquid"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_liquid = (jref) sp[1].o;
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_top = (jref) sp[1].o;
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-heat"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_heat = (jref) sp[1].o;
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_base = (jref) sp[1].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(156);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[3].o)))->F_turretShading = (jint(1));
	LINE_NUMBER(157);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_ammoParts;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_entities_part_DrawPart, 1), sp[0].o));
	LINE_NUMBER(161);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_17;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(162);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[7].o)))->F_turretShading = (jint(1));
	LINE_NUMBER(163);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(165);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_base;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[2].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[2].o))->F_mod;
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[2].o))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_basePrefix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001block-\u0001"_j.string, 3, sp[2].o, sp[3].o, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_base = (jref) sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_base;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_basePrefix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001block-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawTurret *) NULL_CHECK(sp[0].o))->F_base = (jref) sp[1].o;
	}
label_22:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_draw_DrawTurret_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:icons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_top;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_base;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_preview;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_top;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_base;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_preview;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_draw_DrawTurret(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawTurret:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawTurret(ctx);
	{
	LINE_NUMBER(20);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_world_draw_DrawTurret(ctx);
	SF_mindustry_world_draw_DrawTurret_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_draw_DrawTurret;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field liquidDraw
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_draw_DrawTurret[] {
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
	(void *) M_mindustry_world_draw_DrawTurret_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq,
	(void *) M_mindustry_world_draw_DrawTurret_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawTurret_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawTurret_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawTurret_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter,
	(void *) M_mindustry_world_draw_DrawTurret_setAmmoParts_Array1_java_lang_Object,
	(void *) M_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
	(void *) M_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
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
	{ "getRegionsToOutline", "(Lmindustry/world/Block;Larc/struct/Seq;)V" },
	{ "draw", "(Lmindustry/gen/Building;)V" },
	{ "drawLight", "(Lmindustry/gen/Building;)V" },
	{ "drawPlan", "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "load", "(Lmindustry/world/Block;)V" },
	{ "icons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "finalIcons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "expectCrafter", "(Lmindustry/world/Block;)Lmindustry/world/blocks/production/GenericCrafter;" },
	{ "setAmmoParts", "([Ljava/lang/Object;)V" },
	{ "drawTurret", "(Lmindustry/world/blocks/defense/turrets/Turret;Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)V" },
	{ "drawHeat", "(Lmindustry/world/blocks/defense/turrets/Turret;Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)V" },
};

static FieldMetadata fields[] {
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_world_draw_DrawTurret_rand, "Larc/math/Rand;", 28 },
	{ "parts", &class_arc_struct_Seq, offsetof(mindustry_world_draw_DrawTurret, F_parts), "Larc/struct/Seq;", 1 },
	{ "ammoParts", &class_arc_struct_ObjectMap, offsetof(mindustry_world_draw_DrawTurret, F_ammoParts), "Larc/struct/ObjectMap;", 1 },
	{ "basePrefix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawTurret, F_basePrefix), "Ljava/lang/String;", 1 },
	{ "liquidDraw", &class_mindustry_type_Liquid, offsetof(mindustry_world_draw_DrawTurret, F_liquidDraw), "Lmindustry/type/Liquid;", 1 },
	{ "turretLayer", &class_float, offsetof(mindustry_world_draw_DrawTurret, F_turretLayer), "F", 1 },
	{ "shadowLayer", &class_float, offsetof(mindustry_world_draw_DrawTurret, F_shadowLayer), "F", 1 },
	{ "heatLayer", &class_float, offsetof(mindustry_world_draw_DrawTurret, F_heatLayer), "F", 1 },
	{ "base", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawTurret, F_base), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "liquid", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawTurret, F_liquid), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "top", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawTurret, F_top), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "heat", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawTurret, F_heat), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "preview", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawTurret, F_preview), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "outline", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawTurret, F_outline), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawTurret_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawTurret, 0, "()V", 1 },
	{ "setAmmoParts", (intptr_t) M_mindustry_world_draw_DrawTurret_setAmmoParts_Array1_java_lang_Object, VTABLE_mindustry_world_draw_DrawTurret_setAmmoParts_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "getRegionsToOutline", (intptr_t) M_mindustry_world_draw_DrawTurret_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq, VTABLE_mindustry_world_draw_DrawTurret_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq, "(Lmindustry/world/Block;Larc/struct/Seq;)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawTurret_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawTurret_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawTurret_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawTurret_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawTurret", (intptr_t) M_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, VTABLE_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, "(Lmindustry/world/blocks/defense/turrets/Turret;Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)V", 1 },
	{ "drawHeat", (intptr_t) M_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, VTABLE_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, "(Lmindustry/world/blocks/defense/turrets/Turret;Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawTurret_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawTurret_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_draw_DrawTurret_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_draw_DrawTurret_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_draw_DrawTurret, 0, "()V", 8 },
};

Class class_mindustry_world_draw_DrawTurret{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawTurret",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawTurret),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawTurret,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawTurret,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawTurret,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawTurret = registerClass(&class_mindustry_world_draw_DrawTurret);

}
