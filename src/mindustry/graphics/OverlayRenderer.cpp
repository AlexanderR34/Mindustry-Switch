#include "mindustry/graphics/OverlayRenderer.h"
#include "arc/Input.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/entities/Sized.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "mindustry/game/EventType_CoreChangeEvent.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/BlockUnitc.h"
#include "mindustry/graphics/OverlayRenderer_invoke_arc_func_Cons_7.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/graphics/OverlayRenderer_invoke_arc_func_Cons_4.h"
#include "arc/graphics/Camera.h"
#include "mindustry/graphics/OverlayRenderer_invoke_arc_func_Cons_5.h"
#include "mindustry/graphics/OverlayRenderer_invoke_arc_func_Cons_6.h"
#include "mindustry/graphics/OverlayRenderer.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/input/KeyBind.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/UI.h"
#include "mindustry/graphics/Voronoi.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/graphics/Voronoi_GraphEdge.h"
#include "mindustry/gen/Player.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/graphics/OverlayRenderer_CoreEdge.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/ui/fragments/PlacementFragment.h"

extern "C" {

jfloat SF_mindustry_graphics_OverlayRenderer_indicatorLength;
jfloat SF_mindustry_graphics_OverlayRenderer_spawnerMargin;
jobject SF_mindustry_graphics_OverlayRenderer_rect;

void mark_mindustry_graphics_OverlayRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_OverlayRenderer_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_OverlayRenderer_rect)->clazz)->markFunction)((jobject) SF_mindustry_graphics_OverlayRenderer_rect, mark, depth + 1);
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
	auto self = (mindustry_graphics_OverlayRenderer *) object;
	if (self->F_lastSelect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSelect)->clazz)->markFunction)((jobject) self->F_lastSelect, mark, depth + 1);
	if (self->F_cedges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cedges)->clazz)->markFunction)((jobject) self->F_cedges, mark, depth + 1);
}

void init_mindustry_graphics_OverlayRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_OverlayRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK(sp[0].o))->F_cedges = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$CoreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_OverlayRenderer_updateCoreEdges(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:updateCoreEdges", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	if (((jint)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_updatedCores) != 0) goto label_1;
	}
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(48);
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_updatedCores = (jint(0));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_cedges;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(51);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_protectCores) != 0) goto label_10;
	}
	LINE_NUMBER(55);
	goto label_7;
label_10:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_y));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(62);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_arc_math_geom_Vec2)));
	sp[0].o = checkCast(ctx, getArrayClass(&class_arc_math_geom_Vec2, 1), sp[0].o);
	jfloat temp0 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[1].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_graphics_Voronoi_generate_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq(ctx, sp[0].o, temp0, temp2, temp3, (jfloat(temp4)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_graphics_Voronoi$GraphEdge, sp[0].o));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_cedges;
	clinit_mindustry_graphics_OverlayRenderer$CoreEdge(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_OverlayRenderer$CoreEdge);
	jfloat temp0 = (jfloat)((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[5].o)))->F_x1;
	jfloat temp1 = (jfloat)((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[5].o)))->F_y1;
	jfloat temp2 = (jfloat)((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[5].o)))->F_x2;
	jfloat temp3 = (jfloat)((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[5].o)))->F_y2;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), ((jint)((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[5].o)))->F_site1));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[2].o))))->F_team;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), ((jint)((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[5].o)))->F_site2));
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[3].o))))->F_team;
	init_mindustry_graphics_OverlayRenderer$CoreEdge_float_float_float_float_mindustry_game_Team_mindustry_game_Team(ctx, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	goto label_20;
	}
label_21:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_OverlayRenderer_drawBottom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:drawBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_showOtherBuildPlans) == 0) goto label_2;
	}
	{
	LINE_NUMBER(79);
	((func_mindustry_input_InputHandler_drawOtherBuildPlans) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawOtherBuildPlans])(ctx, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(82);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(85);
	((func_mindustry_input_InputHandler_drawBuildPlans) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBuildPlans])(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(88);
	((func_mindustry_input_InputHandler_drawBottom) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBottom])(ctx, (frame[1].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_OverlayRenderer_drawTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:drawTop", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(94);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerindicators"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(95);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(96);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == (frame[2].o)) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(97);
	clinit_mindustry_graphics_OverlayRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_OverlayRenderer_rect;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) * (jfloat(0.9f));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) * (jfloat(0.9f))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, temp2);
	jint temp3 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp3 != 0) goto label_7;
	}
	{
	LINE_NUMBER(100);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(14.0f)));
	LINE_NUMBER(102);
	jfloat temp0 = jfloat(2);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp3 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp2, temp4, temp5, (jfloat(4.0f)));
	LINE_NUMBER(104);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_7:;
	LINE_NUMBER(107);
	goto label_5;
label_3:;
	{
	LINE_NUMBER(110);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"indicators"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) != 0) goto label_1;
	}
	{
	LINE_NUMBER(111);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	frame[1].o = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	if ((frame[2].o) != nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(128);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_control;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_possessionAllowed) != 0) goto label_19;
	}
label_18:;
	INST_ACONST_NULL();
	INST_ASTORE(2);
label_19:;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_unitFade;
	sp[1].f = temp0;
	sp += 2;
	if ((frame[2].o) == nullptr) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, sp[2].i);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, (jfloat(temp0)), (jfloat(0.1f)));
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK(sp[0].o))->F_unitFade = temp1;
	LINE_NUMBER(132);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_lastSelect = (jref) (frame[2].o);
	}
label_23:;
	{
	LINE_NUMBER(133);
	if ((frame[2].o) != nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_lastSelect;
	frame[2].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(134);
	if ((frame[2].o) == nullptr) goto label_25;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_26;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isAI_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isAI_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(135);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(136);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_unitFade));
	LINE_NUMBER(137);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_30;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_BlockUnitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building, (frame[6].o)))(ctx, (frame[6].o));
	sp += 1;
	goto label_32;
	}
label_30:;
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_33;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[2].o)));
	sp[0].o = frame[5].o;
	sp += 1;
	goto label_32;
	}
label_33:;
	INST_ACONST_NULL();
label_32:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[4].o) == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	sp += 1;
	goto label_37;
	}
label_36:;
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_atlas;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	sp++;
label_37:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(140);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_39;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[5].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_39:;
	{
	LINE_NUMBER(144);
	frame[6].i = (jint(0));
	}
label_41:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_42;
	}
	{
	LINE_NUMBER(145);
	frame[7].f = ((((jfloat((frame[6].i))) * (jfloat(90.0f))) + (jfloat(45.0f))) + (fmodf((-(clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time)), (jfloat(360.0f)))));
	LINE_NUMBER(146);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[8].f = ((temp0 * (jfloat(1.5f))) + (((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_unitFade) * (jfloat(2.5f))));
	LINE_NUMBER(147);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"select-arrow"_j));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[7].f), (frame[8].f));
	jfloat temp3 = temp1 + temp2;
	jfloat temp4 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[7].f), (frame[8].f));
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float(ctx, sp[0].o, temp3, (temp4 + temp5), ((frame[8].f) / (jfloat(1.9f))), ((frame[8].f) / (jfloat(1.9f))), ((frame[7].f) - (jfloat(135.0f))));
	LINE_NUMBER(144);
	INST_IINC(6, 1);
	goto label_41;
	}
label_42:;
	LINE_NUMBER(150);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_25:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_47;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(156);
	((func_mindustry_gen_Building_drawConfigure) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_drawConfigure])(ctx, (frame[3].o));
	}
label_47:;
	{
	LINE_NUMBER(159);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_50;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_mindustry_input_InputHandler_drawTop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawTop])(ctx, sp[0].o);
label_50:;
	{
	LINE_NUMBER(160);
	((func_mindustry_input_InputHandler_drawUnitSelection) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawUnitSelection])(ctx, (frame[1].o));
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_52;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_52:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_buildFade;
	jint temp1 = (jint)((func_mindustry_input_InputHandler_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_isPlacing_R_boolean])(ctx, (frame[1].o));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 != 0) goto label_53;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isUsingSchematic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_isUsingSchematic_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_54;
	}
label_53:;
	INST_FCONST(1);
	goto label_55;
label_54:;
	INST_FCONST(0);
label_55:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.06f)));
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK(sp[0].o))->F_buildFade = temp0;
	LINE_NUMBER(166);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(167);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_buildFade) * (jfloat(2))));
	LINE_NUMBER(169);
	if ((floatCompare(((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_buildFade), (jfloat(5,000000e-03f)), -1)) <= 0) goto label_59;
	}
	{
	LINE_NUMBER(170);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_polygonCoreProtection) == 0) goto label_61;
	}
	{
	LINE_NUMBER(171);
	((func_mindustry_graphics_OverlayRenderer_updateCoreEdges) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_OverlayRenderer_updateCoreEdges])(ctx, (frame[0].o));
	LINE_NUMBER(172);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(174);
	frame[3].i = (jint(0));
	}
label_65:;
	{
	if ((frame[3].i) >= (jint(2))) goto label_66;
	}
	{
	LINE_NUMBER(175);
	if ((frame[3].i) != 0) goto label_68;
	}
	(sp++)->f = jfloat(-2.0f);
	goto label_69;
label_68:;
	INST_FCONST(0);
label_69:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_cedges;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_71:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_graphics_OverlayRenderer$CoreEdge, sp[0].o));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(178);
	if ((frame[7].o) == nullptr) goto label_75;
	}
	{
	LINE_NUMBER(179);
	if ((frame[3].i) != 0) goto label_77;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_darkGray;
	goto label_78;
label_77:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[7].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(10.0f)), (jfloat(0.2f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	sp += 1;
	}
label_78:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(180);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((jfloat)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[6].o)))->F_x1), (((jfloat)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[6].o)))->F_y1) + (frame[4].f)), ((jfloat)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[6].o)))->F_x2), (((jfloat)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[6].o)))->F_y2) + (frame[4].f)));
	}
label_75:;
	LINE_NUMBER(182);
	goto label_71;
label_72:;
	{
	LINE_NUMBER(174);
	INST_IINC(3, 1);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(185);
	SM_arc_graphics_g2d_Draw_color(ctx);
	goto label_59;
	}
label_61:;
	{
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_graphics_OverlayRenderer_invoke_arc_func_Cons_7);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_59:;
	{
	LINE_NUMBER(200);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2)));
	LINE_NUMBER(201);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_gray;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(8.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_82;
	}
	{
	LINE_NUMBER(204);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_84:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_82;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(205);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp2 = (jint)((func_mindustry_world_Tile_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dropZoneRadius) + (jfloat(88.0f))));
	if (temp2 == 0) goto label_86;
	}
	{
	LINE_NUMBER(206);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Player_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, (frame[4].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 - ((temp1 - ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius)) / (jfloat(88.0f)))));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp2);
	LINE_NUMBER(207);
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[4].o));
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[4].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_arc_graphics_g2d_Lines_dashCircle_float_float_float(ctx, temp3, temp4, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius));
	}
label_86:;
	LINE_NUMBER(209);
	goto label_84;
label_82:;
	{
	LINE_NUMBER(212);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o != nullptr) goto label_90;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_90;
	}
	{
	LINE_NUMBER(216);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_mindustry_input_InputHandler_getMouseX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseX_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_input_InputHandler_getMouseY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseY_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	frame[4].o = sp[0].o;
	LINE_NUMBER(219);
	if ((frame[4].o) == nullptr) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_90;
	}
	{
	LINE_NUMBER(220);
	((func_mindustry_gen_Building_drawSelect) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_drawSelect])(ctx, (frame[4].o));
	LINE_NUMBER(221);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_enabled) != 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawDisabled) == 0) goto label_96;
	}
	{
	LINE_NUMBER(222);
	((func_mindustry_gen_Building_drawDisabled) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_drawDisabled])(ctx, (frame[4].o));
	}
label_96:;
	{
	LINE_NUMBER(225);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotatePlaced;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_quickRotate) == 0) goto label_90;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_90;
	}
	{
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[4].o));
	((func_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_rotation), (jint(1)));
	LINE_NUMBER(227);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp2 = jfloat(0.3f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(4.0f)), (jfloat(0.2f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp2 + temp3));
	LINE_NUMBER(228);
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp4, temp5, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))));
	LINE_NUMBER(229);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_90:;
	{
	LINE_NUMBER(234);
	((func_mindustry_input_InputHandler_drawOverSelect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawOverSelect])(ctx, (frame[1].o));
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_blockfrag;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_hover_R_mindustry_ui_Displayable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_hover_R_mindustry_ui_Displayable])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Unit)) == 0) goto label_103;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[5].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_103;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_103;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_103;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_106;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_controller;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_103;
	}
label_106:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_controller;
	frame[5].o = sp[0].o;
	LINE_NUMBER(238);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	SM_mindustry_graphics_Drawf_square_float_float_float(ctx, temp0, temp1, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2))));
	LINE_NUMBER(239);
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[3].o), (frame[5].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_hitSize) * (jfloat(2))));
	if (temp2 != 0) goto label_103;
	}
	{
	LINE_NUMBER(240);
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_y), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_hitSize) * (jfloat(2))), (jfloat(4.0f)));
	}
label_103:;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isDroppingItem_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_isDroppingItem_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_110;
	}
	{
	LINE_NUMBER(246);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_mindustry_input_InputHandler_getMouseX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseX_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_input_InputHandler_getMouseY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseY_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(247);
	frame[4].f = (jfloat(8.0f));
	LINE_NUMBER(248);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), (frame[4].f), (frame[4].f));
	LINE_NUMBER(249);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(250);
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y;
	jfloat temp4 = jfloat(6.0f);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(5.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, temp2, temp3, (temp4 + temp5));
	LINE_NUMBER(251);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(254);
	jint temp6 = (jint)((func_mindustry_input_InputHandler_canDropItem_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_input_InputHandler_canDropItem_R_boolean])(ctx, (frame[1].o));
	if (temp6 == 0) goto label_110;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_110;
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_110;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 <= 0) goto label_110;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, (frame[5].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_110;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[5].o;
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_110;
	}
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_mindustry_gen_Building_allowDeposit_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_allowDeposit_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_121;
	}
	INST_ICONST(1);
	goto label_122;
label_121:;
	INST_ICONST(0);
label_122:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(259);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(260);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jfloat temp3 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(3.0f));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(5.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, temp1, temp2, (temp3 + temp4));
	LINE_NUMBER(261);
	jfloat temp5 = jfloat(1);
	sp[0].f = temp5;
	sp += 1;
	if ((frame[6].i) == 0) goto label_126;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_127;
label_126:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_place;
label_127:;
	{
	sp -= 2;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, sp[0].f, sp[1].o);
	LINE_NUMBER(262);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(5.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, temp0, temp1, (temp2 + temp3));
	LINE_NUMBER(263);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(265);
	if ((frame[6].i) == 0) goto label_110;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bar.onlycoredeposit"_j))));
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[5].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[5].o));
	jfloat temp2 = (jfloat)((func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, (jint(0)));
	}
label_110:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:checkApplySelection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(273);
	if ((floatCompare(((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_unitFade), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_lastSelect;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_getMixColor_R_arc_graphics_Color(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(275);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_unitFade));
	sp += 1;
	goto label_5;
	}
label_4:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_5:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_unitFade), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_OverlayRenderer_lambda$drawTop$1_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:lambda$drawTop$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_OverlayRenderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(190);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), ((frame[1].f) * (jfloat(2))));
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(191);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_darkGray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(192);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) - (jfloat(2))), (frame[1].f));
	LINE_NUMBER(193);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(10.0f)), (jfloat(0.5f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (temp0 + temp1));
	LINE_NUMBER(194);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
	}
label_2:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_OverlayRenderer_lambda$drawTop$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:lambda$drawTop$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_OverlayRenderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_graphics_OverlayRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_OverlayRenderer_rect;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) * (jfloat(0.9f));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) * (jfloat(0.9f))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, temp2);
	jint temp3 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp3 != 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(14.0f)));
	LINE_NUMBER(116);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp3 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp2, temp4, temp5, (jfloat(3.0f)));
	LINE_NUMBER(118);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_1:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_updatedCores = (jint(1));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	((mindustry_graphics_OverlayRenderer *) NULL_CHECK((frame[0].o)))->F_updatedCores = (jint(1));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_OverlayRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_OverlayRenderer_indicatorLength = jfloat(14.0f);
	SF_mindustry_graphics_OverlayRenderer_spawnerMargin = jfloat(88.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_OverlayRenderer(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_graphics_OverlayRenderer(ctx);
	SF_mindustry_graphics_OverlayRenderer_rect = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_OverlayRenderer[] {
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
	(void *) M_mindustry_graphics_OverlayRenderer_updateCoreEdges,
	(void *) M_mindustry_graphics_OverlayRenderer_drawBottom,
	(void *) M_mindustry_graphics_OverlayRenderer_drawTop,
	(void *) M_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit,
	(void *) M_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent,
	(void *) M_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "updateCoreEdges", "()V" },
	{ "drawBottom", "()V" },
	{ "drawTop", "()V" },
	{ "checkApplySelection", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$CoreChangeEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_graphics_OverlayRenderer$CoreEdge,
};

static FieldMetadata fields[] {
	{ "indicatorLength", &class_float, (intptr_t) &SF_mindustry_graphics_OverlayRenderer_indicatorLength, "F", 26 },
	{ "spawnerMargin", &class_float, (intptr_t) &SF_mindustry_graphics_OverlayRenderer_spawnerMargin, "F", 26 },
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_graphics_OverlayRenderer_rect, "Larc/math/geom/Rect;", 26 },
	{ "buildFade", &class_float, offsetof(mindustry_graphics_OverlayRenderer, F_buildFade), "F", 2 },
	{ "unitFade", &class_float, offsetof(mindustry_graphics_OverlayRenderer, F_unitFade), "F", 2 },
	{ "lastSelect", &class_mindustry_entities_Sized, offsetof(mindustry_graphics_OverlayRenderer, F_lastSelect), "Lmindustry/entities/Sized;", 2 },
	{ "cedges", &class_arc_struct_Seq, offsetof(mindustry_graphics_OverlayRenderer, F_cedges), "Larc/struct/Seq;", 2 },
	{ "updatedCores", &class_boolean, offsetof(mindustry_graphics_OverlayRenderer, F_updatedCores), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_OverlayRenderer, 0, "()V", 1 },
	{ "updateCoreEdges", (intptr_t) M_mindustry_graphics_OverlayRenderer_updateCoreEdges, VTABLE_mindustry_graphics_OverlayRenderer_updateCoreEdges, "()V", 2 },
	{ "drawBottom", (intptr_t) M_mindustry_graphics_OverlayRenderer_drawBottom, VTABLE_mindustry_graphics_OverlayRenderer_drawBottom, "()V", 1 },
	{ "drawTop", (intptr_t) M_mindustry_graphics_OverlayRenderer_drawTop, VTABLE_mindustry_graphics_OverlayRenderer_drawTop, "()V", 1 },
	{ "checkApplySelection", (intptr_t) M_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit, VTABLE_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$drawTop$1", (intptr_t) SM_mindustry_graphics_OverlayRenderer_lambda$drawTop$1_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$drawTop$0", (intptr_t) SM_mindustry_graphics_OverlayRenderer_lambda$drawTop$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent, VTABLE_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent, "(Lmindustry/game/EventType$CoreChangeEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_OverlayRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_OverlayRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/OverlayRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_OverlayRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_OverlayRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_OverlayRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_OverlayRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_OverlayRenderer = registerClass(&class_mindustry_graphics_OverlayRenderer);

}
