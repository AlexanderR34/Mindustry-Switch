#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild.h"
#include "java/lang/Integer.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "mindustry/world/blocks/logic/LogicDisplay.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/graphics/Blending.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_1.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild_invoke_java_lang_Runnable_5.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild_invoke_java_lang_Runnable_3.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild_invoke_java_lang_Runnable_4.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/TileBitmask.h"
#include "arc/math/geom/Geometry.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Enum.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_MergeBuffer.h"

extern "C" {


void mark_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) object;
	if (self->F_prevBuffers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prevBuffers)->clazz)->markFunction)((jobject) self->F_prevBuffers, mark, depth + 1);
	if (self->F_drawFull)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawFull)->clazz)->markFunction)((jobject) self->F_drawFull, mark, depth + 1);
	if (self->F_drawTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawTile)->clazz)->markFunction)((jobject) self->F_drawTile, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild(ctx);
}

void init_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_mindustry_world_blocks_logic_TileableLogicDisplay(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_mindustry_world_blocks_logic_LogicDisplay(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(126);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth = (jint(1));
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight = (jint(1));
	LINE_NUMBER(129);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_bits = (jint(0));
	LINE_NUMBER(130);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_needsUpdate = (jint(0));
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rectangular = (jint(0));
	LINE_NUMBER(131);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_frameId = (jlong(-1ll));
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_drawFull = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_drawTile = (jref) sp[1].o;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(140);
	jfloat temp0 = (jfloat(((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth))) * (jfloat(32.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp1 = jdouble((temp0 - (jfloat((((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_frameSize) * (jint(2)))))));
	sp[0].d = temp1;
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(141);
	jfloat temp0 = (jfloat(((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight))) * (jfloat(32.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp1 = jdouble((temp0 - (jfloat((((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_frameSize) * (jint(2)))))));
	sp[0].d = temp1;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(142);
	jdouble temp0 = (jdouble)M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_4:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:display", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(150);
	jint temp0 = (jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_maxDisplayDimensions)) goto label_2;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 <= ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_maxDisplayDimensions)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bar.displaytoolarge"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[4].o))->F_maxDisplayDimensions));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[4].o))->F_maxDisplayDimensions));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:onProximityUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(159);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_bits = (jint(0));
	LINE_NUMBER(161);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	if ((frame[1].i) >= (8)) goto label_4;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d8_int_R_arc_math_geom_Point2(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(163);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_bits = (((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_bits) | ((jint(1)) << (frame[1].i)));
	}
label_7:;
	{
	LINE_NUMBER(161);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawDisplays) != 0) goto label_1;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_backRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_tileRegion;
	clinit_mindustry_world_blocks_TileBitmask(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_TileBitmask_values;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_bits))))), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, sp[0].o));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_maxDisplayDimensions)) goto label_6;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_maxDisplayDimensions)) goto label_6;
	}
	{
	LINE_NUMBER(181);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(215);
	((func_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_processCommands) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_processCommands])(ctx, (frame[1].o));
	LINE_NUMBER(217);
	jfloat temp0 = jfloat(1,000000e-03f);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_9;
	}
	INST_FCONST(0);
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	jfloat temp1 = ((jfloat((temp0 % (jint(1000000))))) / (jfloat(1000000.0f))) * (jfloat(1,000000e-02f));
	sp[0].f = temp1;
	sp += 1;
	}
label_10:;
	{
	sp -= 2;
	frame[2].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(219);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat(30.0f)) + (frame[2].f)));
	LINE_NUMBER(221);
	if (((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rectangular) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(223);
	jlong temp0 = (jlong)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_frameId;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp1 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[1].o);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_frameId = temp0;
	LINE_NUMBER(225);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_disabled;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(226);
	jfloat temp1 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_drawFull;
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	LINE_NUMBER(227);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(230);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_disabled;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(231);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_drawTile;
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(232);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	}
label_15:;
	{
	LINE_NUMBER(235);
	if (((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_bits) == (255)) goto label_22;
	}
	{
	LINE_NUMBER(236);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.02f)));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_tileRegion;
	clinit_mindustry_world_blocks_TileBitmask(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_TileBitmask_values;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_bits))))), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_22:;
	LINE_NUMBER(239);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawFull(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:drawFull", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(243);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = 8;
	jint temp2 = ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth) - (jint(1));
	jint temp3 = jint(2);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[1].f = (temp0 + ((jfloat((temp1 * (temp2 - (temp3 * (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x) - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_originX))))))) / (jfloat(2))));
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp5 = 8;
	jint temp6 = ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight) - (jint(1));
	jint temp7 = jint(2);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[2].f = (temp4 + ((jfloat((temp5 * (temp6 - (temp7 * (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_originY))))))) / (jfloat(2))));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	jfloat temp8 = frame[1].f;
	jfloat temp9 = frame[2].f;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[1].o))->F_buffer;
	LINE_NUMBER(245);
	jint temp10 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp11 = jfloat(temp10);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp12 = (temp11 * ((jfloat)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_scaleFactor)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[1].o))->F_buffer;
	jint temp13 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp14 = jfloat((-temp13));
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp15 = (temp14 * ((jfloat)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_scaleFactor)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl);
	LINE_NUMBER(244);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp8, temp9, temp12, temp15);
	}
label_1:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:drawTile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[1].i = (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x) - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_originX));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[2].i = (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_originY));
	LINE_NUMBER(254);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[1].o))->F_buffer;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[1].o);
	sp[1].o = checkCast(ctx, &class_arc_graphics_Texture, sp[1].o);
	jint temp0 = (frame[1].i) * (32);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = temp0 - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[2].o))->F_frameSize);
	jint temp2 = (frame[2].i) * (32);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp1, (temp2 - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[2].o))->F_frameSize)), (32), (32));
	LINE_NUMBER(255);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(8.0f)), (jfloat(-8.0f)));
	LINE_NUMBER(256);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_backRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_7:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_isRoot_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_isRoot_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(264);
	M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_ensureBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:ensureBuffer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	jint temp0 = (32) * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth);
	jint temp1 = jint(2);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = temp0 - (temp1 * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[2].o))->F_frameSize));
	jint temp3 = (32) * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight);
	jint temp4 = jint(2);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[1].o, temp2, (temp3 - (temp4 * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[2].o))->F_frameSize))));
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_backgroundColor;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:updateOthers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d8edge_int_R_arc_math_geom_Point2(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(283);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(281);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:updateTile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	if (((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_needsUpdate) == 0) goto label_1;
	}
	{
	LINE_NUMBER(291);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_needsUpdate = (jint(0));
	LINE_NUMBER(292);
	SM_mindustry_world_blocks_logic_TileableLogicDisplay_linkDisplays_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityAdded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:onProximityAdded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	M_mindustry_gen_Building_onProximityAdded(ctx, (frame[0].o));
	LINE_NUMBER(300);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_needsUpdate = (jint(1));
	LINE_NUMBER(302);
	((func_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers])(ctx, (frame[0].o));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:onProximityRemoved", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	M_mindustry_gen_Building_onProximityRemoved(ctx, (frame[0].o));
	LINE_NUMBER(309);
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(312);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild)) == 0) goto label_6;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, (frame[2].o)));
	clinit_mindustry_world_blocks_logic_TileableLogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_TileableLogicDisplay_processed;
	jint temp0 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_id));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(313);
	((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[3].o)))->F_needsUpdate = (jint(1));
	}
label_6:;
	LINE_NUMBER(315);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(317);
	((func_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers])(ctx, (frame[0].o));
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_isRoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:isRoot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_lambda$draw$0_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild:lambda$draw$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	jint temp0 = (32) * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesWidth);
	jint temp1 = jint(2);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = temp0 - (temp1 * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[2].o))->F_frameSize));
	jint temp3 = (32) * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_tilesHeight);
	jint temp4 = jint(2);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[1].o, temp2, (temp3 - (temp4 * ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[2].o))->F_frameSize))));
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(185);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(187);
	jfloat temp5 = jfloat(0);
	jfloat temp6 = jfloat(0);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	jint temp7 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp8 = jfloat(temp7);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	jint temp9 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_proj_float_float_float_float(ctx, temp5, temp6, temp8, (jfloat(temp9)));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_backgroundColor;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, sp[0].o));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	jfloat temp0 = jfloat(((((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_x) - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_originX)) * (32)));
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	jint temp1 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp2 = temp0 + ((jfloat(temp1)) / (jfloat(2)));
	jfloat temp3 = jfloat(((((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_y) - ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_originY)) * (32)));
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp5 = temp3 + ((jfloat(temp4)) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	jint temp6 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp7 = jfloat(temp6);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	jint temp8 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp2, temp5, temp7, (jfloat((-temp8))));
	LINE_NUMBER(194);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(195);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(199);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(200);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(201);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_1:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, sp[0].o));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[3].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	}
label_22:;
	LINE_NUMBER(209);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_prevBuffers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_17:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field prevBuffers
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
}

void *vtable_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild[] {
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
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_display_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw,
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
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityAdded,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityRemoved,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityUpdate,
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
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_drawable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw_arc_struct_LongSeq,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_ensureBuffer,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$processCommands$0,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$draw$0,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawFull,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawTile,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_isRoot_R_boolean,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_lambda$draw$0_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild,
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
	{ "drawable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "draw", "(Larc/struct/LongSeq;)V" },
	{ "ensureBuffer", "()V" },
	{ "getBufferRegion", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "processCommands", "()V" },
	{ "lambda$processCommands$0", "()V" },
	{ "lambda$draw$0", "()V" },
	{ "drawFull", "()V" },
	{ "drawTile", "()V" },
	{ "updateOthers", "()V" },
	{ "isRoot", "()Z" },
	{ "lambda$draw$0", "(Lmindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild;)V" },
};

static FieldMetadata fields[] {
	{ "tilesWidth", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_tilesWidth), "I", 1 },
	{ "tilesHeight", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_tilesHeight), "I", 1 },
	{ "originX", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_originX), "I", 1 },
	{ "originY", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_originY), "I", 1 },
	{ "prevBuffers", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_prevBuffers), "Larc/struct/Seq;", 1 },
	{ "bits", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_bits), "I", 1 },
	{ "needsUpdate", &class_boolean, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_needsUpdate), "Z", 1 },
	{ "rectangular", &class_boolean, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_rectangular), "Z", 1 },
	{ "frameId", &class_long, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_frameId), "J", 1 },
	{ "drawFull", &class_java_lang_Runnable, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_drawFull), "Ljava/lang/Runnable;", 18 },
	{ "drawTile", &class_java_lang_Runnable, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_drawTile), "Ljava/lang/Runnable;", 18 },
	{ "this$0", &class_mindustry_world_blocks_logic_TileableLogicDisplay, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, F_this$0), "Lmindustry/world/blocks/logic/TileableLogicDisplay;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_mindustry_world_blocks_logic_TileableLogicDisplay, 0, "(Lmindustry/world/blocks/logic/TileableLogicDisplay;)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "display", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityUpdate, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw, "()V", 1 },
	{ "drawFull", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawFull, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawFull, "()V", 2 },
	{ "drawTile", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawTile, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_drawTile, "()V", 2 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw_arc_struct_LongSeq, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_draw_arc_struct_LongSeq, "(Larc/struct/LongSeq;)V", 1 },
	{ "ensureBuffer", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_ensureBuffer, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_ensureBuffer, "()V", 1 },
	{ "updateOthers", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateOthers, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateTile, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_updateTile, "()V", 1 },
	{ "onProximityAdded", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityAdded, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityAdded, "()V", 1 },
	{ "onProximityRemoved", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityRemoved, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_onProximityRemoved, "()V", 1 },
	{ "isRoot", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_isRoot_R_boolean, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_isRoot_R_boolean, "()Z", 1 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_lambda$draw$0_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild_lambda$draw$0_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild, "(Lmindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild;)V", 4098 },
};

Class class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/TileableLogicDisplay$TileableLogicDisplayBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild,
		.size = sizeof(mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_TileableLogicDisplay,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 322,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild = registerClass(&class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild);

}

