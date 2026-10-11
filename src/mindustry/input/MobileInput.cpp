#include "mindustry/input/MobileInput.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "arc/util/Eachable.h"
#include "mindustry/gen/Minerc.h"
#include "arc/graphics/Color.h"
#include "arc/math/Interp_SwingIn.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/Settings.h"
#include "arc/func/Floatp.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_21.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_22.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_20.h"
#include "arc/math/Interp.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_25.h"
#include "arc/util/Nullable.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_23.h"
#include "mindustry/gen/Building.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_24.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Floatp_1.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_21.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_22.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_20.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_25.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_23.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_24.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_11.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_12.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_13.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Iterable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_14.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_15.h"
#include "mindustry/core/Control.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_13.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_18.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_19.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_16.h"
#include "arc/input/KeyBind.h"
#include "mindustry/input/MobileInput_invoke_java_lang_Runnable_17.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_10.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/Events.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_12.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_13.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_14.h"
#include "mindustry/entities/EntityCollisions.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_15.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_16.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_17.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_18.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_19.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/input/MobileInput_invoke_arc_scene_ui_layout_Table_DrawRect_1.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/input/MobileInput.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/entities/Predict.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Mechc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/input/InputProcessor.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/input/PlaceMode.h"
#include "arc/struct/Queue.h"
#include "mindustry/game/EventType_LineConfirmEvent.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_9.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_8.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolp_7.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_18.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_19.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_16.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_17.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_14.h"
#include "arc/files/Fi.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_15.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Cons_13.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/gen/BlockUnitUnit.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/input/MobileInput_invoke_mindustry_entities_EntityCollisions_SolidPred_1.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_20.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_21.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_22.h"
#include "mindustry/input/MobileInput_invoke_arc_func_Boolf_23.h"
#include "mindustry/core/UI.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "mindustry/gen/Player.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "arc/input/GestureDetector_GestureListener.h"

extern "C" {

jfloat SF_mindustry_input_MobileInput_maxPanSpeed;

void mark_mindustry_input_MobileInput(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_input_InputHandler(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_input_MobileInput *) object;
	if (self->F_vector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vector)->clazz)->markFunction)((jobject) self->F_vector, mark, depth + 1);
	if (self->F_movement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_movement)->clazz)->markFunction)((jobject) self->F_movement, mark, depth + 1);
	if (self->F_targetPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetPos)->clazz)->markFunction)((jobject) self->F_targetPos, mark, depth + 1);
	if (self->F_lastTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTarget)->clazz)->markFunction)((jobject) self->F_lastTarget, mark, depth + 1);
	if (self->F_removals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_removals)->clazz)->markFunction)((jobject) self->F_removals, mark, depth + 1);
	if (self->F_mode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mode)->clazz)->markFunction)((jobject) self->F_mode, mark, depth + 1);
	if (self->F_lastBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastBlock)->clazz)->markFunction)((jobject) self->F_lastBlock, mark, depth + 1);
	if (self->F_lastPlaced)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPlaced)->clazz)->markFunction)((jobject) self->F_lastPlaced, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_payloadTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloadTarget)->clazz)->markFunction)((jobject) self->F_payloadTarget, mark, depth + 1);
	if (self->F_unitTapped)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitTapped)->clazz)->markFunction)((jobject) self->F_unitTapped, mark, depth + 1);
	if (self->F_buildingTapped)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingTapped)->clazz)->markFunction)((jobject) self->F_buildingTapped, mark, depth + 1);
}

void clinit_mindustry_input_MobileInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_MobileInput_maxPanSpeed = jfloat(1.3f);
}

void init_mindustry_input_MobileInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_mindustry_input_InputHandler(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(60.0f)));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_edgePan = temp0;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_vector = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_movement = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_targetPos = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastZoom = (jfloat(-1.0f));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_removals = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(66);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_down = (jint(0));
	LINE_NUMBER(68);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(0));
	LINE_NUMBER(80);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_checkTargets_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:checkTargets", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(91);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(20.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_12);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(95);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canAttack) == 0) goto label_3;
	}
	{
	LINE_NUMBER(96);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(97);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[3].o);
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) == 0) goto label_8;
	}
label_9:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canAttack) != 0) goto label_10;
	}
label_8:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_6;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canHeal) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(103);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[4].o);
	}
label_6:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:hasPlan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jbool M_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:checkOverlapPlacement", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(115);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_size) * (8)))));
	LINE_NUMBER(116);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(121);
	if ((frame[6].o) == nullptr) goto label_3;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_breaking) == 0) goto label_7;
	}
	goto label_3;
label_7:;
	{
	LINE_NUMBER(123);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(124);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	LINE_NUMBER(126);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	clinit_mindustry_input_MobileInput(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_10;
	}
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	LINE_NUMBER(129);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_y));
	frame[6].o = sp[0].o;
	LINE_NUMBER(135);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_breaking) == 0) goto label_17;
	}
	goto label_14;
label_17:;
	{
	LINE_NUMBER(137);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(138);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	LINE_NUMBER(140);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	clinit_mindustry_input_MobileInput(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_20;
	}
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(1));
	}
label_20:;
	LINE_NUMBER(143);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:getPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(152);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	goto label_3;
label_7:;
	{
	LINE_NUMBER(159);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) != 0) goto label_8;
	}
	{
	LINE_NUMBER(160);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(161);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[4].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[4].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(164);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(165);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	}
label_11:;
	{
	LINE_NUMBER(168);
	clinit_mindustry_input_MobileInput(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	clinit_mindustry_input_MobileInput(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	LINE_NUMBER(169);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:removePlan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(175);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_2;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_isLinePlacing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:isLinePlacing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat((((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY) * (8)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	if ((floatCompare(temp3, (jfloat(24.0f)), -1)) < 0) goto label_1;
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

jbool M_mindustry_input_MobileInput_isAreaBreaking_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:isAreaBreaking", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat((((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY) * (8)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	if ((floatCompare(temp3, (jfloat(16.0f)), -1)) < 0) goto label_1;
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

void M_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:buildPlacementUI", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	LINE_NUMBER(195);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_hammer;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"breakmode"_j))));
	LINE_NUMBER(201);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_diagonal;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_14);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_15);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_right;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(227);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_ok;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_7(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_7 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"confirmplace"_j));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_showCancel_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:showCancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasSchematic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_hasSchematic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:hasSchematic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_input_MobileInput_buildUI_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:buildUI", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(327);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_drawBottom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:drawBottom", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(364);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	goto label_2;
label_6:;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_animScale), (jfloat(0)), (jfloat(0.2f)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_animScale = temp0;
	LINE_NUMBER(368);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) == 0) goto label_8;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_remove;
	((func_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	}
label_10:;
	LINE_NUMBER(373);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(375);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(376);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(379);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_13;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_input_MobileInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tileX_float_R_int])(ctx, sp[0].o, (jfloat(temp0)));
	frame[1].i = temp1;
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_mindustry_input_MobileInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tileY_float_R_int])(ctx, sp[0].o, (jfloat(temp2)));
	frame[2].i = temp3;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(385);
	frame[3].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_20;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(387);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	if (temp0 != (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawArrow) == 0) goto label_23;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_rotation));
	}
label_23:;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	sp[3].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y;
	sp[4].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[3].o, temp0, temp1, sp[4].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_rotation));
	sp += 3;
	if (temp2 == 0) goto label_25;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size), (jobject(nullptr)));
	if (sp[0].o != nullptr) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 4;
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i);
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	LINE_NUMBER(385);
	INST_IINC(3, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(395);
	((func_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), (frame[1].i), (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(399);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_drawTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:drawTop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_schematicSelect;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(405);
	((func_mindustry_input_MobileInput_drawSelection_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_drawSelection_int_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY), (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxSchematicSize));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_rebuildSelect;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(407);
	((func_mindustry_input_MobileInput_drawRebuildSelection_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_drawRebuildSelection_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY));
	}
label_3:;
	LINE_NUMBER(409);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_drawOverSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:drawOverSelect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(417);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	goto label_1;
label_5:;
	{
	LINE_NUMBER(419);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) != 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation));
	if (temp2 != 0) goto label_7;
	}
label_6:;
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y;
	LINE_NUMBER(420);
	jint temp2 = (jint)((func_mindustry_input_MobileInput_validBreak_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_validBreak_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(421);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_animScale), (jfloat(1)), (jfloat(0.2f)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_animScale = temp0;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_animScale), (jfloat(0.6f)), (jfloat(0.1f)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_animScale = temp0;
	}
label_10:;
	{
	LINE_NUMBER(426);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getMixColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(428);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) != 0) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastPlaced;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(429);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawArrow) == 0) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation));
	}
label_12:;
	{
	LINE_NUMBER(433);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(434);
	((func_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(435);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) != 0) goto label_17;
	}
	{
	LINE_NUMBER(436);
	((func_mindustry_input_MobileInput_drawOverPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_drawOverPlan_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(440);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) != 0) goto label_19;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastPlaced;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation));
	frame[4].i = temp0;
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp3 = (jint)((func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[0].o, temp1, temp2, sp[1].o, (frame[4].i));
	frame[5].i = temp3;
	LINE_NUMBER(443);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_world_Block_drawPlace_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlace_int_int_int_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y), (frame[4].i), (frame[5].i));
	LINE_NUMBER(446);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_input_MobileInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y), (frame[5].i));
	}
label_19:;
	LINE_NUMBER(448);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_25;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting) != 0) goto label_25;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastTarget;
	if (sp[0].o == sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(453);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_crosshairScale = (jfloat(0));
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastTarget = (jref) sp[1].o;
	}
label_27:;
	{
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_crosshairScale), (jfloat(1)), (jfloat(0.2f)));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_crosshairScale = temp0;
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = jfloat(7.0f);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_swingIn;
	jfloat temp4 = (jfloat)((func_arc_math_Interp$SwingIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$SwingIn_apply_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_crosshairScale));
	jfloat temp5 = temp3 * temp4;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_mindustry_graphics_Drawf_target_float_float_float_arc_graphics_Color(ctx, temp1, temp2, temp5, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(462);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:drawPlan", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale), (jfloat(1)), (jfloat(0.1f)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_animScale = temp0;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_animScale = temp0;
	LINE_NUMBER(470);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_3;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_remove;
	((func_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	sp[3].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[4].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[3].o, temp0, temp1, sp[4].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation));
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2);
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp4 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp3, temp4, sp[1].o, sp[2].o);
	}
label_5:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_isRebuildSelecting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:isRebuildSelecting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode);
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_MobileInput_schemOriginX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:schemOriginX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(488);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_22);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(490);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)))));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_MobileInput_schemOriginY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:schemOriginY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(495);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(496);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_23);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(497);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)))));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_isPlacing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:isPlacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(502);
	jint temp0 = (jint)M_mindustry_input_InputHandler_isPlacing_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_mindustry_input_MobileInput_isBreaking_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:isBreaking", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:useSchematic", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[2].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_camera;
	sp[3].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[3].o))->F_position;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[3].o))->F_x));
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_camera;
	sp[3].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[3].o))->F_position;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[3].o))->F_y));
	sp[1].o = (jobject)((func_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o, temp0, temp1, (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(514);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (frame[1].o);
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:touchDown", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(521);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_down = (jint(1));
	LINE_NUMBER(523);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(528);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(531);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_float_float_R_boolean])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	sp += 1;
	if (temp0 == 0) goto label_10;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_selecting = sp[1].i;
	LINE_NUMBER(537);
	if ((frame[3].i) != 0) goto label_13;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_selecting) != 0) goto label_13;
	}
	{
	LINE_NUMBER(538);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode) == 0) goto label_17;
	}
	clinit_mindustry_input_PlaceMode(ctx);
	(sp++)->o = SF_mindustry_input_PlaceMode_rebuildSelect;
	goto label_18;
label_17:;
	clinit_mindustry_input_PlaceMode(ctx);
	(sp++)->o = SF_mindustry_input_PlaceMode_schematicSelect;
label_18:;
	{
	sp -= 2;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(542);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tileX_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileX_float_R_int])(ctx, (frame[0].o), (jfloat((frame[1].i))));
	frame[8].i = temp0;
	LINE_NUMBER(543);
	jint temp1 = (jint)((func_mindustry_input_MobileInput_tileY_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileY_float_R_int])(ctx, (frame[0].o), (jfloat((frame[2].i))));
	frame[9].i = temp1;
	LINE_NUMBER(544);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX = (frame[8].i);
	LINE_NUMBER(545);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY = (frame[9].i);
	LINE_NUMBER(546);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX = (frame[8].i);
	LINE_NUMBER(547);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY = (frame[9].i);
	LINE_NUMBER(548);
	goto label_13;
	}
label_15:;
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tryTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryTapPlayer_float_float_R_boolean])(ctx, (frame[0].o), (frame[6].f), (frame[7].f));
	if (temp0 != 0) goto label_13;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(550);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	sp -= 2;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = sp[1].i;
label_13:;
	{
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:touchUp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_getScale_R_float])(ctx, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastZoom = temp0;
	LINE_NUMBER(561);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp1 = (jint)((func_arc_Input_isTouched_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_isTouched_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(562);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_down = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(565);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(0));
	LINE_NUMBER(566);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_selecting = (jint(0));
	LINE_NUMBER(569);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_6;
	}
	{
	LINE_NUMBER(570);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tileX_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileX_float_R_int])(ctx, (frame[0].o), (jfloat((frame[1].i))));
	frame[5].i = temp0;
	LINE_NUMBER(571);
	jint temp1 = (jint)((func_mindustry_input_MobileInput_tileY_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileY_float_R_int])(ctx, (frame[0].o), (jfloat((frame[2].i))));
	frame[6].i = temp1;
	LINE_NUMBER(573);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	((func_mindustry_input_MobileInput_flushSelectPlans_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_flushSelectPlans_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(575);
	clinit_mindustry_game_EventType$LineConfirmEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$LineConfirmEvent);
	init_mindustry_game_EventType$LineConfirmEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(577);
	((func_mindustry_input_MobileInput_removeSelection_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_removeSelection_int_int_int_int_boolean])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), (frame[5].i), (frame[6].i), (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(580);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode = (jint(0));
	LINE_NUMBER(581);
	goto label_16;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_schematicSelect;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(583);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[1].o = (jobject)((func_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic])(ctx, sp[1].o, ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_lastSchematic = (jref) sp[1].o;
	LINE_NUMBER(584);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	((func_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(585);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(586);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	}
label_22:;
	{
	LINE_NUMBER(588);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode = (jint(0));
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_rebuildSelect;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(591);
	((func_mindustry_input_MobileInput_rebuildArea_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_rebuildArea_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY));
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	goto label_16;
	}
label_25:;
	{
	LINE_NUMBER(593);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(596);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].o) != nullptr) goto label_30;
	}
	INST_ACONST_NULL();
	goto label_31;
label_30:;
	INST_ALOAD(5);
	sp[-1].o = (jobject) ((mindustry_world_Tile *) NULL_CHECK(sp[-1].o))->F_build;
label_31:;
	{
	sp -= 2;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	sp[2].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	sp[2].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	((func_mindustry_input_MobileInput_tryDropItems_mindustry_gen_Building_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tryDropItems_mindustry_gen_Building_float_float])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	}
label_16:;
	{
	LINE_NUMBER(600);
	((func_mindustry_input_MobileInput_selectUnitsRect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_selectUnitsRect])(ctx, (frame[0].o));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:longPress", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(607);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(612);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 != 0) goto label_4;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) == 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(616);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(618);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_9;
	}
	{
	LINE_NUMBER(621);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect = (jint(1));
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandRectX = temp0;
	LINE_NUMBER(623);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandRectY = temp1;
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(627);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Payloadc)) == 0) goto label_14;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[6].o)));
	LINE_NUMBER(628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y;
	jfloat temp2 = jfloat(8.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_13);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(629);
	if ((frame[6].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(630);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (frame[6].o);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(632);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y));
	frame[7].o = sp[0].o;
	LINE_NUMBER(634);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[7].o));
	if (temp0 != 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[7].o));
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(635);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (frame[7].o);
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_arc_math_geom_Vec2(ctx, sp[1].o, (frame[4].o));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_payloadTarget = (jref) sp[1].o;
	goto label_19;
	}
label_23:;
	{
	LINE_NUMBER(640);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(1));
	LINE_NUMBER(641);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_19:;
	LINE_NUMBER(644);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(645);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(1));
	LINE_NUMBER(646);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(650);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	{
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_select;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[4].o));
	}
label_27:;
	LINE_NUMBER(651);
	goto label_28;
label_6:;
	{
	LINE_NUMBER(654);
	if ((frame[3].o) != nullptr) goto label_29;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_29:;
	{
	LINE_NUMBER(658);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(659);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(660);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(661);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(662);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode = (jint(1));
	LINE_NUMBER(664);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(665);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_28;
	}
	{
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_tapBlock;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[3].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(1)));
	goto label_28;
	}
label_35:;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(667);
	((func_mindustry_input_MobileInput_updateLine_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_updateLine_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y));
	LINE_NUMBER(668);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_28;
	}
	{
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_tapBlock;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp1, temp3, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	}
label_28:;
	{
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:tap", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(677);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(679);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[5].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(682);
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	frame[7].o = sp[0].o;
	LINE_NUMBER(685);
	if ((frame[7].o) == nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(687);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_tileTap_mindustry_gen_Player_mindustry_world_Tile(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(689);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o != nullptr) goto label_9;
	}
	INST_ALOAD(7);
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(691);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(692);
	((func_mindustry_input_MobileInput_checkTargets_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_checkTargets_float_float])(ctx, (frame[0].o), (frame[5].f), (frame[6].f));
	}
label_12:;
	{
	LINE_NUMBER(696);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	if (temp0 == 0) goto label_14;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_14;
	}
	{
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[7].o));
	((func_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation));
	if (temp2 == 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 != 0) goto label_17;
	}
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[1].o = frame[0].o;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	jint temp2 = (jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[3].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[4].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[4].o = (jobject)((func_mindustry_world_Block_nextConfig_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_Block_nextConfig_R_java_lang_Object])(ctx, sp[4].o);
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[2].o, temp0, temp1, temp2, sp[3].o, sp[4].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[1].o))->F_lastPlaced = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[2].o);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_validBreak_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_validBreak_int_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_y));
	if (temp0 == 0) goto label_19;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[8].o));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan_int_int(ctx, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_y));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_16;
	}
label_19:;
	{
	LINE_NUMBER(704);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_22;
	}
label_21:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(706);
	((func_mindustry_input_MobileInput_commandTap_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_commandTap_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_queueCommandMode));
	goto label_16;
	}
label_23:;
	{
	LINE_NUMBER(707);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_24;
	}
	{
	LINE_NUMBER(708);
	((func_mindustry_input_MobileInput_tapCommandUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tapCommandUnit])(ctx, (frame[0].o));
	goto label_16;
	}
label_24:;
	{
	LINE_NUMBER(709);
	if ((frame[3].i) != (jint(3))) goto label_26;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(710);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, sp[0].o, (frame[5].f), (frame[6].f), (jobject(nullptr)));
	goto label_16;
	}
label_26:;
	{
	LINE_NUMBER(713);
	if ((frame[3].i) != (jint(2))) goto label_28;
	}
	{
	LINE_NUMBER(715);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(718);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_unitTapped;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_possessionAllowed) == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_unitTapped;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_unitTapped;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_unitTapped;
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dead) != 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_unitTapped;
	jint temp0 = (jint)((func_mindustry_gen_Unit_playerControllable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_playerControllable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(719);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_unitTapped;
	SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(720);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_recentRespawnTimer = (jfloat(1));
	goto label_34;
	}
label_31:;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_buildingTapped;
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_possessionAllowed) == 0) goto label_35;
	}
	{
	LINE_NUMBER(722);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_buildingTapped;
	SM_mindustry_gen_Call_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(723);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_recentRespawnTimer = (jfloat(1));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(724);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_checkConfigTap_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_checkConfigTap_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tryBeginMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryBeginMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(725);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tileTapped_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tileTapped_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_34:;
	{
	LINE_NUMBER(727);
	popStackFrame(ctx);
	return (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(730);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_input_MobileInput_selectedUnit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_selectedUnit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_unitTapped = (jref) sp[1].o;
	LINE_NUMBER(731);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_input_MobileInput_selectedControlBuild_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_selectedControlBuild_R_mindustry_gen_Building])(ctx, (frame[0].o));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_buildingTapped = (jref) sp[1].o;
	LINE_NUMBER(734);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tryRepairDerelict_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryRepairDerelict_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tryStopMine_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryStopMine_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_canTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_canTapPlayer_float_float_R_boolean])(ctx, (frame[0].o), (frame[5].f), (frame[6].f));
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_checkConfigTap_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_checkConfigTap_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tileTapped_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tileTapped_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"doubletapmine"_j))));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(735);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_tryBeginMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryBeginMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	}
label_16:;
	{
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_updateState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:updateState", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(744);
	M_mindustry_input_InputHandler_updateState(ctx, (frame[0].o));
	LINE_NUMBER(746);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(748);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(749);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(750);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(0));
	LINE_NUMBER(751);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (jobject(nullptr));
	}
label_2:;
	LINE_NUMBER(753);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(757);
	M_mindustry_input_InputHandler_reset(ctx, (frame[0].o));
	LINE_NUMBER(758);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[1].o))->F_down = temp0;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_manualShooting = temp0;
	LINE_NUMBER(759);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:getSyncedPlans", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(763);
	M_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(764);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(765);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) != 0) goto label_5;
	}
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	}
label_5:;
	LINE_NUMBER(768);
	goto label_2;
label_3:;
	LINE_NUMBER(769);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(773);
	M_mindustry_input_InputHandler_update(ctx, (frame[0].o));
	LINE_NUMBER(775);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_locked_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(777);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_3;
	}
	{
	LINE_NUMBER(778);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_queueCommandMode = (jint(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(781);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(786);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(789);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(791);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(0));
	LINE_NUMBER(792);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(795);
	if ((frame[1].i) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasField_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasSchematic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(796);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_14);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(802);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_16;
	}
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(804);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(808);
	if ((frame[1].i) != 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasScroll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasScroll_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_zoom;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	if ((floatCompare(temp1, (jfloat(0)), -1)) <= 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rotatePlaced;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) != 0) goto label_19;
	}
label_21:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(809);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_zoom;
	jfloat temp0 = (jfloat)((func_arc_Input_axisTap_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_core_Renderer_scaleCamera_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_scaleCamera_float])(ctx, sp[0].o, temp0);
	}
label_19:;
	{
	LINE_NUMBER(812);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp0 != 0) goto label_22;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_22;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(814);
	frame[2].f = (jfloat(6.0f));
	LINE_NUMBER(815);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_moveX;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_moveY;
	jfloat temp1 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (frame[2].f)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(816);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(817);
	jint temp2 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, (frame[3].o));
	if (temp2 != 0) goto label_22;
	}
	{
	LINE_NUMBER(818);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (jobject(nullptr));
	}
label_22:;
	{
	LINE_NUMBER(822);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(823);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_select;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(824);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(827);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting) == 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_canShoot_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_canShoot_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(828);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(832);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_33;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_33;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_33;
	{
	LINE_NUMBER(833);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	((func_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	}
label_33:;
	{
	LINE_NUMBER(837);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(838);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode = (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(841);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_37;
	}
	{
	LINE_NUMBER(842);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode = (jint(0));
	}
label_37:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	if (sp[0].o != sp[1].o) goto label_39;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_39:;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	if (sp[0].o != sp[1].o) goto label_41;
	}
	{
	LINE_NUMBER(851);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_41:;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(856);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode = (jint(0));
	}
label_43:;
	{
	LINE_NUMBER(860);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) != 0) goto label_45;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_schematicSelect;
	if (sp[0].o == sp[1].o) goto label_46;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_rebuildSelect;
	if (sp[0].o != sp[1].o) goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(861);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_45:;
	{
	LINE_NUMBER(864);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode) != 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_rebuildSelect;
	if (sp[0].o != sp[1].o) goto label_47;
	}
	{
	LINE_NUMBER(865);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_47:;
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_schematicSelect;
	if (sp[0].o == sp[1].o) goto label_49;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_rebuildSelect;
	if (sp[0].o != sp[1].o) goto label_50;
	}
label_49:;
	{
	LINE_NUMBER(869);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_input_MobileInput_rawTileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_rawTileX_R_int])(ctx, (frame[0].o));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastLineX = temp0;
	LINE_NUMBER(870);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_mindustry_input_MobileInput_rawTileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_rawTileY_R_int])(ctx, (frame[0].o));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastLineY = temp1;
	LINE_NUMBER(871);
	((func_mindustry_input_MobileInput_autoPan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_autoPan])(ctx, (frame[0].o));
	}
label_50:;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastBlock;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_53;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	if (sp[0].o != sp[1].o) goto label_53;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	LINE_NUMBER(876);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_placing;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(877);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastBlock = (jref) sp[1].o;
	}
label_53:;
	{
	LINE_NUMBER(880);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_56;
	}
	{
	LINE_NUMBER(881);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineScale), (jfloat(1)), (jfloat(0.1f)));
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lineScale = temp0;
	LINE_NUMBER(884);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp1 = (jint)((func_arc_Input_isTouched_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_isTouched_int_R_boolean])(ctx, sp[0].o, (jint(0)));
	if (temp1 == 0) goto label_59;
	}
	{
	LINE_NUMBER(885);
	((func_mindustry_input_MobileInput_autoPan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_autoPan])(ctx, (frame[0].o));
	}
label_59:;
	{
	LINE_NUMBER(888);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_input_MobileInput_tileX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tileX_float_R_int])(ctx, sp[0].o, (jfloat(temp0)));
	frame[2].i = temp1;
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_mindustry_input_MobileInput_tileY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_tileY_float_R_int])(ctx, sp[0].o, (jfloat(temp2)));
	frame[3].i = temp3;
	LINE_NUMBER(890);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX) != (frame[2].i)) goto label_63;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY) == (frame[3].i)) goto label_64;
	}
label_63:;
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_isPlacing_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_64;
	}
	{
	LINE_NUMBER(891);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineX = (frame[2].i);
	LINE_NUMBER(892);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastLineY = (frame[3].i);
	LINE_NUMBER(893);
	((func_mindustry_input_MobileInput_updateLine_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_updateLine_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartX), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineStartY), (frame[2].i), (frame[3].i));
	}
label_64:;
	LINE_NUMBER(895);
	goto label_68;
label_56:;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(897);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineScale = (jfloat(0));
	}
label_68:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	frame[2].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_70:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_71;
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	if ((floatCompare(((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_animScale), (jfloat(1,000000e-04f)), 1)) > 0) goto label_73;
	}
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(905);
	INST_IINC(2, -1);
	}
label_73:;
	{
	LINE_NUMBER(901);
	INST_IINC(2, -1);
	goto label_70;
	}
label_71:;
	{
	LINE_NUMBER(909);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting) == 0) goto label_76;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_76;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_77;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_76;
	}
label_77:;
	{
	LINE_NUMBER(910);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_76:;
	LINE_NUMBER(912);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_autoPan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:autoPan", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(915);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[0].o);
	frame[1].f = (jfloat(temp0));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp1 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat(temp1));
	LINE_NUMBER(917);
	frame[3].f = (jfloat(0));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(919);
	if ((floatCompare((frame[1].f), ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan), 1)) > 0) goto label_5;
	}
	{
	LINE_NUMBER(920);
	frame[3].f = (-(((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan) - (frame[1].f)));
	}
label_5:;
	{
	LINE_NUMBER(923);
	jfloat temp0 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare(temp0, ((jfloat(temp1)) - ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(924);
	jfloat temp0 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[3].f = ((temp0 - (jfloat(temp1))) + ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan));
	}
label_7:;
	{
	LINE_NUMBER(927);
	if ((floatCompare((frame[2].f), ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan), 1)) > 0) goto label_9;
	}
	{
	LINE_NUMBER(928);
	frame[4].f = (-(((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan) - (frame[2].f)));
	}
label_9:;
	{
	LINE_NUMBER(931);
	jfloat temp0 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	if ((floatCompare(temp0, ((jfloat(temp1)) - ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan)), -1)) < 0) goto label_11;
	}
	{
	LINE_NUMBER(932);
	jfloat temp0 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[4].f = ((temp0 - (jfloat(temp1))) + ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_edgePan));
	}
label_11:;
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 / (jfloat(temp1))));
	LINE_NUMBER(936);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(1.3f)));
	LINE_NUMBER(939);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_vector;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(940);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_vector;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(941);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:pan", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(945);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_MobileInput_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(947);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[5].f = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(948);
	frame[3].f = ((frame[3].f) * (frame[5].f));
	LINE_NUMBER(949);
	frame[4].f = ((frame[4].f) * (frame[5].f));
	LINE_NUMBER(952);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lineMode) == 0) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_isTouched_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_isTouched_int_R_boolean])(ctx, sp[0].o, (jint(1)));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem) != 0) goto label_7;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(953);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(957);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_down) == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting) == 0) goto label_10;
	}
label_9:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(959);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_selecting) == 0) goto label_11;
	}
	{
	LINE_NUMBER(960);
	sp[0].o = frame[0].o;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaX = (((jfloat)((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaX) + (frame[3].f));
	LINE_NUMBER(961);
	sp[0].o = frame[0].o;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaY = (((jfloat)((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaY) + (frame[4].f));
	LINE_NUMBER(963);
	frame[6].i = (jint((((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_shiftDeltaX) / (jfloat(8.0f)))));
	LINE_NUMBER(964);
	frame[7].i = (jint((((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_shiftDeltaY) / (jfloat(8.0f)))));
	LINE_NUMBER(966);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[6].i));
	if (temp0 > 0) goto label_17;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[7].i));
	if (temp0 <= 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(968);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[9].o)))->F_breaking) == 0) goto label_22;
	}
	goto label_19;
label_22:;
	{
	LINE_NUMBER(969);
	sp[0].o = frame[9].o;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x) + (frame[6].i));
	LINE_NUMBER(970);
	sp[0].o = frame[9].o;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y) + (frame[7].i));
	LINE_NUMBER(971);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(973);
	sp[0].o = frame[0].o;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaX = (fmodf(((jfloat)((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaX), (jfloat(8.0f))));
	LINE_NUMBER(974);
	sp[0].o = frame[0].o;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaY = (fmodf(((jfloat)((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaY), (jfloat(8.0f))));
	}
label_18:;
	LINE_NUMBER(976);
	goto label_26;
label_11:;
	{
	LINE_NUMBER(978);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[3].f));
	LINE_NUMBER(979);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - (frame[4].f));
	LINE_NUMBER(980);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (jobject(nullptr));
	}
label_26:;
	{
	LINE_NUMBER(983);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (-((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width)) / (jfloat(4.0f));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp1 = (-((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height)) / (jfloat(4.0f));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp4 = temp3 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) / (jfloat(4.0f)));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp5 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[1].o);
	jfloat temp6 = jfloat(temp5);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp4, (temp6 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) / (jfloat(4.0f)))));
	LINE_NUMBER(985);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:panStop", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(990);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[1].o))->F_shiftDeltaY = temp0;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_shiftDeltaX = temp0;
	LINE_NUMBER(991);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:zoom", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(996);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(997);
	if ((floatCompare(((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastZoom), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(998);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_getScale_R_float])(ctx, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastZoom = temp0;
	}
label_2:;
	{
	LINE_NUMBER(1001);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_setScale_float])(ctx, sp[0].o, (((frame[2].f) / (frame[1].f)) * ((jfloat)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_lastZoom)));
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:updateMovement", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1009);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1012);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	frame[4].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement);
	LINE_NUMBER(1015);
	frame[5].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_canHeal);
	LINE_NUMBER(1016);
	if ((frame[5].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_gen_Building)) == 0) goto label_6;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[8].o)));
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[0].o))(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp0 = (jint)((func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_range));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_8;
label_6:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1017);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Mechc)) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp0 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Teamc_mindustry_gen_Unit_float_R_boolean(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_range));
	if (temp0 == 0) goto label_13;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_14;
label_13:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1022);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(1025);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_targetPos;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1027);
	frame[8].f = (jfloat(15.0f));
	LINE_NUMBER(1028);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, (frame[1].o));
	frame[9].f = temp0;
	LINE_NUMBER(1029);
	jint temp1 = (jint)((func_mindustry_gen_Unit_hasWeapons_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean])(ctx, (frame[1].o));
	if (temp1 == 0) goto label_19;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_FCONST(0);
label_20:;
	{
	sp -= 1;
	frame[10].f = sp[0].f;
	LINE_NUMBER(1030);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_aimX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_aimX_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_aimY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_aimY_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_angleTo_float_float_R_float])(ctx, sp[0].o, temp0, temp1);
	frame[11].f = temp2;
	LINE_NUMBER(1031);
	if ((frame[4].i) == 0) goto label_23;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting) == 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasWeapons_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_23;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_23;
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_faceTarget) == 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(1033);
	if ((frame[12].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1034);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, (frame[1].o), (frame[11].f));
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(1036);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, (frame[1].o));
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_28:;
	{
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	frame[14].o = sp[0].o;
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_gen_Healthc)) == 0) goto label_29;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[14].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 != 0) goto label_29;
	}
	{
	LINE_NUMBER(1041);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_32;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1046);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(1048);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat(3.0f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1049);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	if ((isInstance(ctx, sp[0].o, &class_arc_math_geom_Vec2)) != 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	frame[17].o = sp[0].o;
	if ((isInstance(ctx, (frame[17].o), &class_mindustry_gen_Building)) == 0) goto label_38;
	}
	{
	frame[14].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[17].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[14].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_38;
	}
	{
	sp[0].o = frame[14].o;
	sp[1].o = frame[14].o;
	sp[2].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[13].o)))(ctx, (frame[13].o));
	sp[2].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[2].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[2].o)));
	if (temp0 == 0) goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(1051);
	((func_mindustry_input_MobileInput_tryDropPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryDropPayload])(ctx, (frame[0].o));
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	frame[17].o = sp[0].o;
	if ((isInstance(ctx, (frame[17].o), &class_mindustry_gen_Building)) == 0) goto label_42;
	}
	{
	frame[15].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[17].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_42;
	}
	{
	LINE_NUMBER(1054);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(ctx, sp[0].o, (frame[15].o));
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget;
	frame[17].o = sp[0].o;
	if ((isInstance(ctx, (frame[17].o), &class_mindustry_gen_Unit)) == 0) goto label_41;
	}
	{
	frame[16].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[17].o)));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[13].o)))(ctx, (frame[13].o), (frame[16].o));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(1057);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[16].o));
	}
label_41:;
	{
	LINE_NUMBER(1060);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (jobject(nullptr));
	goto label_36;
	}
label_32:;
	{
	LINE_NUMBER(1063);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_payloadTarget = (jref) (jobject(nullptr));
	}
label_36:;
	{
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_movement;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_movement;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_movement;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, temp0, temp1, (jfloat(0.05f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2);
	LINE_NUMBER(1069);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jint temp3 = (jint)((func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[8].f));
	if (temp3 == 0) goto label_49;
	}
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_movement;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec2_ZERO;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, ((temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_accel)) / (jfloat(2))));
	}
label_49:;
	{
	LINE_NUMBER(1074);
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, (frame[2].o), (jfloat(4.0f)));
	LINE_NUMBER(1077);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_collisions;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_mindustry_entities_EntityCollisions$SolidPred_1(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_mindustry_entities_EntityCollisions$SolidPred_1 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_mindustry_entities_EntityCollisions$SolidPred_1);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	if (temp0 != 0) goto label_54;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (jfloat(85.0f)));
	if (temp0 != 0) goto label_55;
	}
label_54:;
	INST_ICONST(1);
	goto label_56;
label_55:;
	INST_ICONST(0);
label_56:;
	{
	sp -= 2;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting = sp[1].i;
	LINE_NUMBER(1079);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_movement;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1082);
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mineTile;
	if (sp[0].o != nullptr) goto label_59;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_59;
	}
	{
	LINE_NUMBER(1085);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting) == 0) goto label_61;
	}
	{
	LINE_NUMBER(1086);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp += 1;
	if ((frame[7].i) != 0) goto label_63;
	}
	INST_ICONST(1);
	goto label_64;
label_63:;
	INST_ICONST(0);
label_64:;
	{
	sp -= 2;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = sp[1].i;
	LINE_NUMBER(1087);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_mouseX = temp0;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jfloat temp3 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_mouseY = temp3;
	((func_mindustry_gen_Unit_aim_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float_boolean])(ctx, sp[0].o, temp0, temp3, (jint(1)));
	goto label_59;
	}
label_61:;
	{
	LINE_NUMBER(1088);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_66;
	}
	{
	LINE_NUMBER(1089);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	LINE_NUMBER(1090);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autotarget"_j))));
	if (temp0 == 0) goto label_69;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	if ((isInstance(ctx, (frame[15].o), &class_mindustry_gen_BlockUnitUnit)) == 0) goto label_70;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_gen_BlockUnitUnit, (frame[15].o)));
	sp[0].o = (jobject)((func_mindustry_gen_BlockUnitUnit_tile_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_gen_BlockUnitUnit_tile_R_mindustry_gen_Building])(ctx, (frame[13].o));
	frame[15].o = sp[0].o;
	if ((isInstance(ctx, (frame[15].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_70;
	}
	{
	frame[14].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[15].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canAttack) == 0) goto label_73;
	}
	{
	LINE_NUMBER(1092);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = frame[10].f;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_15);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_16);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_73:;
	{
	LINE_NUMBER(1095);
	if ((frame[5].i) == 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_69;
	}
	{
	LINE_NUMBER(1096);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, temp0, temp1, sp[1].o);
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_target = (jref) (checkCast(ctx, &class_mindustry_gen_Teamc, sp[1].o));
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_69;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[10].f));
	if (temp0 != 0) goto label_69;
	}
	{
	LINE_NUMBER(1098);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_69:;
	{
	LINE_NUMBER(1105);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_aim_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float_boolean])(ctx, sp[0].o, temp0, temp1, (jint(1)));
	goto label_59;
	}
label_66:;
	{
	LINE_NUMBER(1107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_17);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_78;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_weapons;
	sp[2].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[2].o))))->F_bullet;
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_79;
	}
label_78:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_79:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_x);
	LINE_NUMBER(1110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_y);
	LINE_NUMBER(1111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp += 1;
	if ((frame[7].i) != 0) goto label_83;
	}
	INST_ICONST(1);
	goto label_84;
label_83:;
	INST_ICONST(0);
label_84:;
	{
	sp -= 2;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = sp[1].i;
	LINE_NUMBER(1113);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_mouseX;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Unit_aim_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float_boolean])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_mouseY), (jint(1)));
	}
label_59:;
	{
	LINE_NUMBER(1117);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp += 1;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting) == 0) goto label_86;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_86;
	INST_ICONST(1);
	goto label_87;
label_86:;
	INST_ICONST(0);
label_87:;
	{
	sp -= 2;
	((func_mindustry_gen_Unit_controlWeapons_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controlWeapons_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$updateMovement$2_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$updateMovement$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$updateMovement$1_mindustry_type_UnitType_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$updateMovement$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1092);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetGround) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetBuildingsMobile) == 0) goto label_1;
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

jbool SM_mindustry_input_MobileInput_lambda$updateMovement$0_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$updateMovement$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1092);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetAir), ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetGround));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(800);
	jint temp0 = (jint)((func_mindustry_gen_Unit_allowCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_allowCommand_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_2;
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

jbool SM_mindustry_input_MobileInput_lambda$longPress$0_mindustry_gen_Payloadc_arc_math_geom_Vec2_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$longPress$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(628);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[1].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) + (jfloat(8.0f))));
	if (temp0 == 0) goto label_1;
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

void SM_mindustry_input_MobileInput_lambda$schemOriginY$0_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$schemOriginY$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(496);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_MobileInput_lambda$schemOriginX$0_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$schemOriginX$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(489);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_8(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_8 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(330);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$16", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(333);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_clearNonei;
	frame[2].o = sp[0].o;
	LINE_NUMBER(335);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_save;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(336);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_flipX;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(342);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_flipY;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(344);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_rotate;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Cons_25);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_MobileInput_lambda$buildUI$22_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$22", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getCells_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(347);
	((func_arc_scene_Element_setScale_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_setScale_float_float])(ctx, (frame[1].o), (jfloat(-1.0f)), (jfloat(1)));
	LINE_NUMBER(349);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getWidth_R_float])(ctx, (frame[1].o));
	((func_arc_scene_Element_setTranslation_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setTranslation_float_float])(ctx, sp[0].o, temp0, (jfloat(0)));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$21(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_mindustry_input_MobileInput_rotatePlans_arc_struct_Seq_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_rotatePlans_arc_struct_Seq_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$20(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_mindustry_input_MobileInput_flipPlans_arc_struct_Seq_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_flipPlans_arc_struct_Seq_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$19(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_mindustry_input_MobileInput_flipPlans_arc_struct_Seq_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_flipPlans_arc_struct_Seq_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$18(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$18", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(338);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic = (jref) (jobject(nullptr));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$17", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_file;
	if (sp[0].o == nullptr) goto label_2;
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

jbool M_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasSchematic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_9(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_9 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(304);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@command.queue"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rightOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_clearTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(155.0f);
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_10(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_10 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(308);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@command"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_units;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_clearTogglet;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp1 = jfloat(155.0f);
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(48.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_11(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_11 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(317);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(320);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_scene_ui_layout_Table$DrawRect_1(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_scene_ui_layout_Table$DrawRect_1 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_scene_ui_layout_Table$DrawRect_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_MobileInput_lambda$buildUI$13_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$13", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(321);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(322);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_black6;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].f), (jfloat(0)), (frame[2].f), (frame[1].f));
	}
label_1:;
	LINE_NUMBER(324);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_input_MobileInput_lambda$buildUI$12_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_showCancel_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_showCancel_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->f = jfloat(50.0f);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$buildUI$11_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	{
	LINE_NUMBER(315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicHideHud) != 0) goto label_1;
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

jbool M_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode);
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$9(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode = sp[1].i;
	LINE_NUMBER(310);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_4;
	}
	{
	LINE_NUMBER(311);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(312);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode = (jint(0));
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(315);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_queueCommandMode);
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_queueCommandMode) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_queueCommandMode = sp[1].i;
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)((func_mindustry_input_MobileInput_hasSchematic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"editor-blocks-shown"_j))));
	if (temp0 != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_12(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_12 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(284);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(77.5f);
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	LINE_NUMBER(293);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pause;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(77.5f)));
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if ((frame[2].i) != 0) goto label_4;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_pause;
	goto label_5;
label_4:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_play;
label_5:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_isBuilding = sp[1].i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildUI$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildUI$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(290);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode) == 0) goto label_2;
	}
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_wrench;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_ok;
label_3:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(264);
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode));
	LINE_NUMBER(265);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolp_13(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolp_13 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolp_13);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setDisabled_arc_func_Boolp])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$buildPlacementUI$10_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$10", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	{
	LINE_NUMBER(265);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode) == 0) goto label_2;
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

void M_mindustry_input_MobileInput_lambda$buildPlacementUI$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$6", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) == 0) goto label_1;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	sp -= 2;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_rebuildMode = sp[1].i;
	goto label_5;
label_1:;
	{
	LINE_NUMBER(230);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(235);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(236);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) != 0) goto label_13;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	if (temp2 == 0) goto label_15;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_input_MobileInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_MobileInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(242);
	if ((frame[4].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[5].o));
	goto label_15;
	}
label_20:;
	{
	LINE_NUMBER(244);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_breaking) != 0) goto label_15;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x)) goto label_15;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y)) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (temp0 != ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_15;
	}
	{
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Queue_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[5].o));
	}
label_15:;
	{
	LINE_NUMBER(250);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(252);
	((func_mindustry_input_MobileInput_tryBreakBlock_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_MobileInput_tryBreakBlock_int_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y));
	}
label_11:;
	LINE_NUMBER(255);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_removals;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_22);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(260);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_selecting = (jint(0));
	}
label_5:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$buildPlacementUI$7_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(258);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) != 0) goto label_1;
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

void M_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[1].o));
	sp += 1;
	if ((frame[2].i) != 0) goto label_4;
	}
	INST_FCONST(0);
	goto label_5;
label_4:;
	{
	jfloat temp0 = jfloat((((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setRotationOrigin_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setRotationOrigin_float_int])(ctx, sp[0].o, sp[1].f, (jint(1)));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp += 1;
	if ((frame[2].i) == 0) goto label_7;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_right;
	goto label_8;
label_7:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_copy;
label_8:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(223);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].i) != 0) goto label_10;
	}
	{
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildPlacementUI$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))), (jint(4)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_schematicMode = sp[1].i;
	LINE_NUMBER(211);
	if (((jint)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_schematicMode) == 0) goto label_7;
	}
	{
	LINE_NUMBER(212);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_input_PlaceMode_none;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(215);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_rebuildMode = (jint(0));
	}
label_3:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_MobileInput_lambda$buildPlacementUI$3_arc_scene_ui_ImageButton(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"swapdiagonal"_j))));
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_MobileInput_lambda$buildPlacementUI$2(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	{
	LINE_NUMBER(202);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"swapdiagonal"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"swapdiagonal"_j))));
	sp += 2;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[2].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_MobileInput_lambda$buildPlacementUI$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$buildPlacementUI$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_mode;
	clinit_mindustry_input_PlaceMode(ctx);
	sp[2].o = (jobject)SF_mindustry_input_PlaceMode_breaking;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_2;
	}
	clinit_mindustry_input_PlaceMode(ctx);
	(sp++)->o = SF_mindustry_input_PlaceMode_none;
	goto label_3;
label_2:;
	clinit_mindustry_input_PlaceMode(ctx);
	(sp++)->o = SF_mindustry_input_PlaceMode_placing;
	goto label_3;
label_1:;
	clinit_mindustry_input_PlaceMode(ctx);
	(sp++)->o = SF_mindustry_input_PlaceMode_breaking;
label_3:;
	{
	sp -= 2;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_mode = (jref) sp[1].o;
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_input_MobileInput *) NULL_CHECK(sp[0].o))->F_lastBlock = (jref) sp[1].o;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$checkTargets$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$checkTargets$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(93);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
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

void M_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_input_MobileInput_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_input_MobileInput_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_input_MobileInput_invoke_arc_func_Boolf_23);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(82);
	((mindustry_input_MobileInput *) NULL_CHECK((frame[0].o)))->F_manualShooting = (jint(0));
	}
label_1:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_MobileInput_lambda$new$1_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/MobileInput:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_MobileInput(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_input_MobileInput;
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

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastPlaced
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field target
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field payloadTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[27]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field unitTapped
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field buildingTapped
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_input_MobileInput[] {
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
	(void *) M_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyTyped_char_R_boolean,
	(void *) M_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_scrolled_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_input_MobileInput_longPress_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean,
	(void *) M_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_mindustry_input_MobileInput_zoom_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinchStop,
	(void *) M_mindustry_input_InputHandler_initQuadtrees,
	(void *) M_mindustry_input_InputHandler_createPlanLists,
	(void *) M_mindustry_input_InputHandler_updateSelectQuadtree,
	(void *) M_mindustry_input_InputHandler_addLock_arc_func_Boolp,
	(void *) M_mindustry_input_InputHandler_locked_R_boolean,
	(void *) M_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable,
	(void *) M_mindustry_input_InputHandler_isUsingSchematic_R_boolean,
	(void *) M_mindustry_input_InputHandler_spectate_mindustry_gen_Unit,
	(void *) M_mindustry_input_MobileInput_reset,
	(void *) M_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq,
	(void *) M_mindustry_input_MobileInput_update,
	(void *) M_mindustry_input_InputHandler_checkUnit,
	(void *) M_mindustry_input_InputHandler_tryPickupPayload,
	(void *) M_mindustry_input_InputHandler_tryDropPayload,
	(void *) M_mindustry_input_InputHandler_getMouseX_R_float,
	(void *) M_mindustry_input_InputHandler_getMouseY_R_float,
	(void *) M_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_MobileInput_buildUI_arc_scene_Group,
	(void *) M_mindustry_input_MobileInput_updateState,
	(void *) M_mindustry_input_InputHandler_multiUnitSelect_R_boolean,
	(void *) M_mindustry_input_InputHandler_selectUnitsRect,
	(void *) M_mindustry_input_InputHandler_selectTypedUnits,
	(void *) M_mindustry_input_InputHandler_tapCommandUnit,
	(void *) M_mindustry_input_InputHandler_commandTap_float_float,
	(void *) M_mindustry_input_InputHandler_commandTap_float_float_boolean,
	(void *) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building,
	(void *) M_mindustry_input_InputHandler_drawCommanded,
	(void *) M_mindustry_input_InputHandler_drawCommandedTargets,
	(void *) M_mindustry_input_InputHandler_drawCommanded_boolean,
	(void *) M_mindustry_input_InputHandler_drawUnitSelection,
	(void *) M_mindustry_input_InputHandler_drawOtherBuildPlans,
	(void *) M_mindustry_input_InputHandler_drawBuildPlans,
	(void *) M_mindustry_input_MobileInput_drawBottom,
	(void *) M_mindustry_input_MobileInput_drawTop,
	(void *) M_mindustry_input_MobileInput_drawOverSelect,
	(void *) M_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color,
	(void *) M_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_input_InputHandler_drawBreaking_int_int,
	(void *) M_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic,
	(void *) M_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean,
	(void *) M_mindustry_input_InputHandler_showSchematicSave,
	(void *) M_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int,
	(void *) M_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean,
	(void *) M_mindustry_input_MobileInput_schemOriginX_R_int,
	(void *) M_mindustry_input_MobileInput_schemOriginY_R_int,
	(void *) M_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean,
	(void *) M_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_flushPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int,
	(void *) M_mindustry_input_InputHandler_updateLine_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_updateLine_int_int,
	(void *) M_mindustry_input_InputHandler_checkConfigTap_R_boolean,
	(void *) M_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean,
	(void *) M_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryStopMine_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile,
	(void *) M_mindustry_input_InputHandler_rawTileX_R_int,
	(void *) M_mindustry_input_InputHandler_rawTileY_R_int,
	(void *) M_mindustry_input_InputHandler_tileX_float_R_int,
	(void *) M_mindustry_input_InputHandler_tileY_float_R_int,
	(void *) M_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2,
	(void *) M_mindustry_input_InputHandler_selectedBlock_R_boolean,
	(void *) M_mindustry_input_MobileInput_isPlacing_R_boolean,
	(void *) M_mindustry_input_MobileInput_isBreaking_R_boolean,
	(void *) M_mindustry_input_MobileInput_isRebuildSelecting_R_boolean,
	(void *) M_mindustry_input_InputHandler_mouseAngle_float_float_R_float,
	(void *) M_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_remove,
	(void *) M_mindustry_input_InputHandler_add,
	(void *) M_mindustry_input_InputHandler_canShoot_R_boolean,
	(void *) M_mindustry_input_InputHandler_onConfigurable_R_boolean,
	(void *) M_mindustry_input_InputHandler_isDroppingItem_R_boolean,
	(void *) M_mindustry_input_InputHandler_canDropItem_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float,
	(void *) M_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_input_InputHandler_rebuildArea_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_tryBreakBlock_int_int,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean,
	(void *) M_mindustry_input_InputHandler_validBreak_int_int_R_boolean,
	(void *) M_mindustry_input_InputHandler_breakBlock_int_int,
	(void *) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons,
	(void *) M_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine,
	(void *) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player,
	(void *) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$2,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$1,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$0,
	(void *) M_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_input_InputHandler_lambda$new$1_R_boolean,
	(void *) M_mindustry_input_MobileInput_checkTargets_float_float,
	(void *) M_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_MobileInput_isLinePlacing_R_boolean,
	(void *) M_mindustry_input_MobileInput_isAreaBreaking_R_boolean,
	(void *) M_mindustry_input_MobileInput_showCancel_R_boolean,
	(void *) M_mindustry_input_MobileInput_hasSchematic_R_boolean,
	(void *) M_mindustry_input_MobileInput_autoPan,
	(void *) M_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$21,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$20,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$19,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$18,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$12_R_float,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$9,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$6,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$2,
	(void *) M_mindustry_input_MobileInput_lambda$buildUI$1,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$6,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$4,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton,
	(void *) M_mindustry_input_MobileInput_lambda$buildPlacementUI$0,
	(void *) M_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "tap", "(FFILarc/input/KeyCode;)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFLarc/input/KeyCode;)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFILarc/input/KeyCode;)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "pinchStop", "()V" },
	{ "initQuadtrees", "()V" },
	{ "createPlanLists", "()V" },
	{ "updateSelectQuadtree", "()V" },
	{ "addLock", "(Larc/func/Boolp;)V" },
	{ "locked", "()Z" },
	{ "allPlans", "()Larc/util/Eachable;" },
	{ "isUsingSchematic", "()Z" },
	{ "spectate", "(Lmindustry/gen/Unit;)V" },
	{ "reset", "()V" },
	{ "getSyncedPlans", "(Larc/struct/Seq;)V" },
	{ "update", "()V" },
	{ "checkUnit", "()V" },
	{ "tryPickupPayload", "()V" },
	{ "tryDropPayload", "()V" },
	{ "getMouseX", "()F" },
	{ "getMouseY", "()F" },
	{ "buildPlacementUI", "(Larc/scene/ui/layout/Table;)V" },
	{ "buildUI", "(Larc/scene/Group;)V" },
	{ "updateState", "()V" },
	{ "multiUnitSelect", "()Z" },
	{ "selectUnitsRect", "()V" },
	{ "selectTypedUnits", "()V" },
	{ "tapCommandUnit", "()V" },
	{ "commandTap", "(FF)V" },
	{ "commandTap", "(FFZ)V" },
	{ "drawCommand", "(Lmindustry/gen/Unit;)V" },
	{ "drawCommand", "(Lmindustry/gen/Building;)V" },
	{ "drawCommanded", "()V" },
	{ "drawCommandedTargets", "()V" },
	{ "drawCommanded", "(Z)V" },
	{ "drawUnitSelection", "()V" },
	{ "drawOtherBuildPlans", "()V" },
	{ "drawBuildPlans", "()V" },
	{ "drawBottom", "()V" },
	{ "drawTop", "()V" },
	{ "drawOverSelect", "()V" },
	{ "drawSelected", "(IILmindustry/world/Block;Larc/graphics/Color;)V" },
	{ "drawBreaking", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawOverlapCheck", "(Lmindustry/world/Block;IIZ)V" },
	{ "planMatches", "(Lmindustry/entities/units/BuildPlan;)Z" },
	{ "drawBreaking", "(II)V" },
	{ "useSchematic", "(Lmindustry/game/Schematic;)V" },
	{ "useSchematic", "(Lmindustry/game/Schematic;Z)V" },
	{ "showSchematicSave", "()V" },
	{ "rotatePlans", "(Larc/struct/Seq;I)V" },
	{ "flipPlans", "(Larc/struct/Seq;Z)V" },
	{ "schemOriginX", "()I" },
	{ "schemOriginY", "()I" },
	{ "getPlan", "(II)Lmindustry/entities/units/BuildPlan;" },
	{ "getPlan", "(IIILmindustry/entities/units/BuildPlan;)Lmindustry/entities/units/BuildPlan;" },
	{ "drawBreakSelection", "(IIIII)V" },
	{ "drawBreakSelection", "(IIIIIZ)V" },
	{ "drawRebuildSelection", "(IIII)V" },
	{ "drawBreakSelection", "(IIII)V" },
	{ "drawSelection", "(IIIII)V" },
	{ "drawSelection", "(IIIIILarc/graphics/Color;Larc/graphics/Color;Z)V" },
	{ "flushSelectPlans", "(Larc/struct/Seq;)V" },
	{ "flushPlansReverse", "(Larc/struct/Seq;)V" },
	{ "flushPlans", "(Larc/struct/Seq;)V" },
	{ "drawOverPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawOverPlan", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "drawPlan", "(IILmindustry/world/Block;I)V" },
	{ "removeSelection", "(IIII)V" },
	{ "removeSelection", "(IIIII)V" },
	{ "removeSelection", "(IIIIZ)V" },
	{ "removeSelection", "(IIIIZI)V" },
	{ "updateLine", "(IIII)V" },
	{ "updateLine", "(II)V" },
	{ "checkConfigTap", "()Z" },
	{ "tileTapped", "(Lmindustry/gen/Building;)Z" },
	{ "tryTapPlayer", "(FF)Z" },
	{ "canTapPlayer", "(FF)Z" },
	{ "tryBeginMine", "(Lmindustry/world/Tile;)Z" },
	{ "tryStopMine", "()Z" },
	{ "tryStopMine", "(Lmindustry/world/Tile;)Z" },
	{ "tryRepairDerelict", "(Lmindustry/world/Tile;)Z" },
	{ "canRepairDerelict", "(Lmindustry/world/Tile;)Z" },
	{ "canMine", "(Lmindustry/world/Tile;)Z" },
	{ "tileAt", "(FF)Lmindustry/world/Tile;" },
	{ "rawTileX", "()I" },
	{ "rawTileY", "()I" },
	{ "tileX", "(F)I" },
	{ "tileY", "(F)I" },
	{ "panCamera", "(Larc/math/geom/Vec2;)V" },
	{ "selectedBlock", "()Z" },
	{ "isPlacing", "()Z" },
	{ "isBreaking", "()Z" },
	{ "isRebuildSelecting", "()Z" },
	{ "mouseAngle", "(FF)F" },
	{ "selectedUnit", "()Lmindustry/gen/Unit;" },
	{ "selectedControlBuild", "()Lmindustry/gen/Building;" },
	{ "selectedCommandUnit", "(FF)Lmindustry/gen/Unit;" },
	{ "selectedEnemyUnit", "(FF)Lmindustry/gen/Unit;" },
	{ "selectedCommandBuildings", "(FFFF)Larc/struct/Seq;" },
	{ "selectedCommandUnits", "(FFFFLarc/func/Boolf;)Larc/struct/Seq;" },
	{ "selectedCommandUnits", "(FFFF)Larc/struct/Seq;" },
	{ "remove", "()V" },
	{ "add", "()V" },
	{ "canShoot", "()Z" },
	{ "onConfigurable", "()Z" },
	{ "isDroppingItem", "()Z" },
	{ "canDropItem", "()Z" },
	{ "tryDropItems", "(Lmindustry/gen/Building;FF)V" },
	{ "canDepositItem", "(Lmindustry/gen/Building;)Z" },
	{ "rebuildArea", "(IIII)V" },
	{ "tryBreakBlock", "(II)V" },
	{ "validPlace", "(IILmindustry/world/Block;I)Z" },
	{ "validPlace", "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;)Z" },
	{ "validPlace", "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;Z)Z" },
	{ "validBreak", "(II)Z" },
	{ "breakBlock", "(II)V" },
	{ "drawArrow", "(Lmindustry/world/Block;III)V" },
	{ "drawArrow", "(Lmindustry/world/Block;IIIZ)V" },
	{ "iterateLine", "(IIIILarc/func/Cons;)V" },
	{ "lambda$updateLine$1", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "lambda$updateLine$0", "(Lmindustry/input/InputHandler$PlaceLine;)V" },
	{ "lambda$drawOtherBuildPlans$0", "(Lmindustry/gen/Player;)V" },
	{ "lambda$drawOtherBuildPlans$1", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Player;Lmindustry/entities/units/BuildPlan;)V" },
	{ "lambda$drawCommanded$2", "()V" },
	{ "lambda$drawCommanded$1", "()V" },
	{ "lambda$drawCommanded$0", "()V" },
	{ "lambda$checkUnit$0", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$update$1", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$new$5", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$1", "()Z" },
	{ "checkTargets", "(FF)V" },
	{ "hasPlan", "(Lmindustry/world/Tile;)Z" },
	{ "checkOverlapPlacement", "(IILmindustry/world/Block;)Z" },
	{ "getPlan", "(Lmindustry/world/Tile;)Lmindustry/entities/units/BuildPlan;" },
	{ "removePlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "isLinePlacing", "()Z" },
	{ "isAreaBreaking", "()Z" },
	{ "showCancel", "()Z" },
	{ "hasSchematic", "()Z" },
	{ "autoPan", "()V" },
	{ "updateMovement", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$buildUI$14", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$16", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$21", "()V" },
	{ "lambda$buildUI$20", "()V" },
	{ "lambda$buildUI$19", "()V" },
	{ "lambda$buildUI$18", "()V" },
	{ "lambda$buildUI$17", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$buildUI$15", "()Z" },
	{ "lambda$buildUI$4", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$12", "()F" },
	{ "lambda$buildUI$10", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$buildUI$9", "()V" },
	{ "lambda$buildUI$8", "()Z" },
	{ "lambda$buildUI$7", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$buildUI$6", "()V" },
	{ "lambda$buildUI$5", "()Z" },
	{ "lambda$buildUI$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildUI$3", "(Larc/scene/ui/ImageButton;)Z" },
	{ "lambda$buildUI$2", "()V" },
	{ "lambda$buildUI$1", "()V" },
	{ "lambda$buildPlacementUI$9", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$buildPlacementUI$8", "()Z" },
	{ "lambda$buildPlacementUI$6", "()V" },
	{ "lambda$buildPlacementUI$5", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$buildPlacementUI$4", "()V" },
	{ "lambda$buildPlacementUI$1", "(Larc/scene/ui/ImageButton;)V" },
	{ "lambda$buildPlacementUI$0", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$UnitDestroyEvent;)V" },
};

static jclass interfaces[] { &class_arc_input_GestureDetector$GestureListener, };

static FieldMetadata fields[] {
	{ "maxPanSpeed", &class_float, (intptr_t) &SF_mindustry_input_MobileInput_maxPanSpeed, "F", 26 },
	{ "edgePan", &class_float, offsetof(mindustry_input_MobileInput, F_edgePan), "F", 17 },
	{ "vector", &class_arc_math_geom_Vec2, offsetof(mindustry_input_MobileInput, F_vector), "Larc/math/geom/Vec2;", 1 },
	{ "movement", &class_arc_math_geom_Vec2, offsetof(mindustry_input_MobileInput, F_movement), "Larc/math/geom/Vec2;", 1 },
	{ "targetPos", &class_arc_math_geom_Vec2, offsetof(mindustry_input_MobileInput, F_targetPos), "Larc/math/geom/Vec2;", 1 },
	{ "lastZoom", &class_float, offsetof(mindustry_input_MobileInput, F_lastZoom), "F", 1 },
	{ "lineStartX", &class_int, offsetof(mindustry_input_MobileInput, F_lineStartX), "I", 1 },
	{ "lineStartY", &class_int, offsetof(mindustry_input_MobileInput, F_lineStartY), "I", 1 },
	{ "lastLineX", &class_int, offsetof(mindustry_input_MobileInput, F_lastLineX), "I", 1 },
	{ "lastLineY", &class_int, offsetof(mindustry_input_MobileInput, F_lastLineY), "I", 1 },
	{ "lineScale", &class_float, offsetof(mindustry_input_MobileInput, F_lineScale), "F", 1 },
	{ "crosshairScale", &class_float, offsetof(mindustry_input_MobileInput, F_crosshairScale), "F", 1 },
	{ "lastTarget", &class_mindustry_gen_Teamc, offsetof(mindustry_input_MobileInput, F_lastTarget), "Lmindustry/gen/Teamc;", 1 },
	{ "shiftDeltaX", &class_float, offsetof(mindustry_input_MobileInput, F_shiftDeltaX), "F", 1 },
	{ "shiftDeltaY", &class_float, offsetof(mindustry_input_MobileInput, F_shiftDeltaY), "F", 1 },
	{ "removals", &class_arc_struct_Seq, offsetof(mindustry_input_MobileInput, F_removals), "Larc/struct/Seq;", 1 },
	{ "selecting", &class_boolean, offsetof(mindustry_input_MobileInput, F_selecting), "Z", 1 },
	{ "lineMode", &class_boolean, offsetof(mindustry_input_MobileInput, F_lineMode), "Z", 1 },
	{ "schematicMode", &class_boolean, offsetof(mindustry_input_MobileInput, F_schematicMode), "Z", 1 },
	{ "rebuildMode", &class_boolean, offsetof(mindustry_input_MobileInput, F_rebuildMode), "Z", 1 },
	{ "queueCommandMode", &class_boolean, offsetof(mindustry_input_MobileInput, F_queueCommandMode), "Z", 1 },
	{ "mode", &class_mindustry_input_PlaceMode, offsetof(mindustry_input_MobileInput, F_mode), "Lmindustry/input/PlaceMode;", 1 },
	{ "lastBlock", &class_mindustry_world_Block, offsetof(mindustry_input_MobileInput, F_lastBlock), "Lmindustry/world/Block;", 1 },
	{ "lastPlaced", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_input_MobileInput, F_lastPlaced), "Lmindustry/entities/units/BuildPlan;", 1 },
	{ "down", &class_boolean, offsetof(mindustry_input_MobileInput, F_down), "Z", 1 },
	{ "manualShooting", &class_boolean, offsetof(mindustry_input_MobileInput, F_manualShooting), "Z", 1 },
	{ "target", &class_mindustry_gen_Teamc, offsetof(mindustry_input_MobileInput, F_target), "Lmindustry/gen/Teamc;", 1 },
	{ "payloadTarget", &class_arc_math_geom_Position, offsetof(mindustry_input_MobileInput, F_payloadTarget), "Larc/math/geom/Position;", 1 },
	{ "unitTapped", &class_mindustry_gen_Unit, offsetof(mindustry_input_MobileInput, F_unitTapped), "Lmindustry/gen/Unit;", 1 },
	{ "buildingTapped", &class_mindustry_gen_Building, offsetof(mindustry_input_MobileInput, F_buildingTapped), "Lmindustry/gen/Building;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_MobileInput, 0, "()V", 1 },
	{ "checkTargets", (intptr_t) M_mindustry_input_MobileInput_checkTargets_float_float, VTABLE_mindustry_input_MobileInput_checkTargets_float_float, "(FF)V", 0 },
	{ "hasPlan", (intptr_t) M_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean, VTABLE_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "checkOverlapPlacement", (intptr_t) M_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean, VTABLE_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean, "(IILmindustry/world/Block;)Z", 0 },
	{ "getPlan", (intptr_t) M_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan, "(Lmindustry/world/Tile;)Lmindustry/entities/units/BuildPlan;", 0 },
	{ "removePlan", (intptr_t) M_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 0 },
	{ "isLinePlacing", (intptr_t) M_mindustry_input_MobileInput_isLinePlacing_R_boolean, VTABLE_mindustry_input_MobileInput_isLinePlacing_R_boolean, "()Z", 0 },
	{ "isAreaBreaking", (intptr_t) M_mindustry_input_MobileInput_isAreaBreaking_R_boolean, VTABLE_mindustry_input_MobileInput_isAreaBreaking_R_boolean, "()Z", 0 },
	{ "buildPlacementUI", (intptr_t) M_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table, VTABLE_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "showCancel", (intptr_t) M_mindustry_input_MobileInput_showCancel_R_boolean, VTABLE_mindustry_input_MobileInput_showCancel_R_boolean, "()Z", 1 },
	{ "hasSchematic", (intptr_t) M_mindustry_input_MobileInput_hasSchematic_R_boolean, VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean, "()Z", 1 },
	{ "buildUI", (intptr_t) M_mindustry_input_MobileInput_buildUI_arc_scene_Group, VTABLE_mindustry_input_MobileInput_buildUI_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "drawBottom", (intptr_t) M_mindustry_input_MobileInput_drawBottom, VTABLE_mindustry_input_MobileInput_drawBottom, "()V", 1 },
	{ "drawTop", (intptr_t) M_mindustry_input_MobileInput_drawTop, VTABLE_mindustry_input_MobileInput_drawTop, "()V", 1 },
	{ "drawOverSelect", (intptr_t) M_mindustry_input_MobileInput_drawOverSelect, VTABLE_mindustry_input_MobileInput_drawOverSelect, "()V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 4 },
	{ "isRebuildSelecting", (intptr_t) M_mindustry_input_MobileInput_isRebuildSelecting_R_boolean, VTABLE_mindustry_input_MobileInput_isRebuildSelecting_R_boolean, "()Z", 1 },
	{ "schemOriginX", (intptr_t) M_mindustry_input_MobileInput_schemOriginX_R_int, VTABLE_mindustry_input_MobileInput_schemOriginX_R_int, "()I", 4 },
	{ "schemOriginY", (intptr_t) M_mindustry_input_MobileInput_schemOriginY_R_int, VTABLE_mindustry_input_MobileInput_schemOriginY_R_int, "()I", 4 },
	{ "isPlacing", (intptr_t) M_mindustry_input_MobileInput_isPlacing_R_boolean, VTABLE_mindustry_input_MobileInput_isPlacing_R_boolean, "()Z", 1 },
	{ "isBreaking", (intptr_t) M_mindustry_input_MobileInput_isBreaking_R_boolean, VTABLE_mindustry_input_MobileInput_isBreaking_R_boolean, "()Z", 1 },
	{ "useSchematic", (intptr_t) M_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean, VTABLE_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean, "(Lmindustry/game/Schematic;Z)V", 1 },
	{ "touchDown", (intptr_t) M_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "longPress", (intptr_t) M_mindustry_input_MobileInput_longPress_float_float_R_boolean, VTABLE_mindustry_input_MobileInput_longPress_float_float_R_boolean, "(FF)Z", 1 },
	{ "tap", (intptr_t) M_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "updateState", (intptr_t) M_mindustry_input_MobileInput_updateState, VTABLE_mindustry_input_MobileInput_updateState, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_input_MobileInput_reset, VTABLE_mindustry_input_MobileInput_reset, "()V", 1 },
	{ "getSyncedPlans", (intptr_t) M_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq, VTABLE_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "update", (intptr_t) M_mindustry_input_MobileInput_update, VTABLE_mindustry_input_MobileInput_update, "()V", 1 },
	{ "autoPan", (intptr_t) M_mindustry_input_MobileInput_autoPan, VTABLE_mindustry_input_MobileInput_autoPan, "()V", 4 },
	{ "pan", (intptr_t) M_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean, VTABLE_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "panStop", (intptr_t) M_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "zoom", (intptr_t) M_mindustry_input_MobileInput_zoom_float_float_R_boolean, VTABLE_mindustry_input_MobileInput_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit, VTABLE_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4 },
	{ "lambda$updateMovement$2", (intptr_t) SM_mindustry_input_MobileInput_lambda$updateMovement$2_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$updateMovement$1", (intptr_t) SM_mindustry_input_MobileInput_lambda$updateMovement$1_mindustry_type_UnitType_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$updateMovement$0", (intptr_t) SM_mindustry_input_MobileInput_lambda$updateMovement$0_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_input_MobileInput_lambda$update$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$longPress$0", (intptr_t) SM_mindustry_input_MobileInput_lambda$longPress$0_mindustry_gen_Payloadc_arc_math_geom_Vec2_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Payloadc;Larc/math/geom/Vec2;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$schemOriginY$0", (intptr_t) SM_mindustry_input_MobileInput_lambda$schemOriginY$0_mindustry_entities_units_BuildPlan, 0, "(Lmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$schemOriginX$0", (intptr_t) SM_mindustry_input_MobileInput_lambda$schemOriginX$0_mindustry_entities_units_BuildPlan, 0, "(Lmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$buildUI$14", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table, VTABLE_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$16", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table, VTABLE_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$22", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildUI$22_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$buildUI$21", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$21, VTABLE_mindustry_input_MobileInput_lambda$buildUI$21, "()V", 4098 },
	{ "lambda$buildUI$20", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$20, VTABLE_mindustry_input_MobileInput_lambda$buildUI$20, "()V", 4098 },
	{ "lambda$buildUI$19", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$19, VTABLE_mindustry_input_MobileInput_lambda$buildUI$19, "()V", 4098 },
	{ "lambda$buildUI$18", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$18, VTABLE_mindustry_input_MobileInput_lambda$buildUI$18, "()V", 4098 },
	{ "lambda$buildUI$17", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$buildUI$15", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean, "()Z", 4098 },
	{ "lambda$buildUI$4", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table, VTABLE_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$13", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildUI$13_float_float_float_float, 0, "(FFFF)V", 4106 },
	{ "lambda$buildUI$12", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$12_R_float, VTABLE_mindustry_input_MobileInput_lambda$buildUI$12_R_float, "()F", 4098 },
	{ "lambda$buildUI$11", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildUI$11_R_boolean, 0, "()Z", 4106 },
	{ "lambda$buildUI$10", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$buildUI$9", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$9, VTABLE_mindustry_input_MobileInput_lambda$buildUI$9, "()V", 4098 },
	{ "lambda$buildUI$8", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean, "()Z", 4098 },
	{ "lambda$buildUI$7", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$buildUI$6", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$6, VTABLE_mindustry_input_MobileInput_lambda$buildUI$6, "()V", 4098 },
	{ "lambda$buildUI$5", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean, "()Z", 4098 },
	{ "lambda$buildUI$0", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table, VTABLE_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildUI$3", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean, "(Larc/scene/ui/ImageButton;)Z", 4098 },
	{ "lambda$buildUI$2", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$2, VTABLE_mindustry_input_MobileInput_lambda$buildUI$2, "()V", 4098 },
	{ "lambda$buildUI$1", (intptr_t) M_mindustry_input_MobileInput_lambda$buildUI$1, VTABLE_mindustry_input_MobileInput_lambda$buildUI$1, "()V", 4098 },
	{ "lambda$buildPlacementUI$9", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$buildPlacementUI$10", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildPlacementUI$10_R_boolean, 0, "()Z", 4106 },
	{ "lambda$buildPlacementUI$8", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean, "()Z", 4098 },
	{ "lambda$buildPlacementUI$6", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$6, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$6, "()V", 4098 },
	{ "lambda$buildPlacementUI$7", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildPlacementUI$7_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$buildPlacementUI$5", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$buildPlacementUI$4", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$4, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$4, "()V", 4098 },
	{ "lambda$buildPlacementUI$3", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildPlacementUI$3_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$buildPlacementUI$2", (intptr_t) SM_mindustry_input_MobileInput_lambda$buildPlacementUI$2, 0, "()V", 4106 },
	{ "lambda$buildPlacementUI$1", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton, "(Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$buildPlacementUI$0", (intptr_t) M_mindustry_input_MobileInput_lambda$buildPlacementUI$0, VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$0, "()V", 4098 },
	{ "lambda$checkTargets$0", (intptr_t) SM_mindustry_input_MobileInput_lambda$checkTargets$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent, VTABLE_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent, "(Lmindustry/game/EventType$UnitDestroyEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_input_MobileInput_lambda$new$1_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
};

Class class_mindustry_input_MobileInput{
		.nativeName = (intptr_t) "mindustry/input/MobileInput",
		.parentClass = (intptr_t) &class_mindustry_input_InputHandler,
		.size = sizeof(mindustry_input_MobileInput),
		.classVtable = (intptr_t) vtable_mindustry_input_MobileInput,
		.staticInitializer = (intptr_t) clinit_mindustry_input_MobileInput,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_input_MobileInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 30,
		.nativeFields = (intptr_t) fields,
		.methodCount = 79,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 195,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_MobileInput = registerClass(&class_mindustry_input_MobileInput);

}
