#include "mindustry/ui/fragments/PlacementFragment.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_20.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Intf_7.h"
#include "java/lang/Integer.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Intf_6.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Intf_5.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_22.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Intf_4.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_21.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_util_Comparator_3.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_util_Comparator_2.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_23.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_23.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_24.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_25.h"
#include "java/util/Arrays.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_20.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_21.h"
#include "arc/util/Tmp.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_26.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_27.h"
#include "arc/func/Boolf.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_28.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_29.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/input/Binding.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_17.h"
#include "arc/util/Time.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_16.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_19.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_18.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_13.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_12.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_15.h"
#include "mindustry/gen/Building.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolf_14.h"
#include "mindustry/entities/units/UnitController.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolp_5.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolp_4.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Boolp_3.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/input/KeyBind.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/scene/ui/layout/Stack.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_33.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_23.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_34.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_35.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_36.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_26.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_27.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_30.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_24.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_31.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_25.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_32.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Prov_5.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_scene_ui_layout_Table_DrawRect_1.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Prov_9.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_37.h"
#include "mindustry/ui/fragments/PlacementFragment.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Prov_8.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_38.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Prov_7.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_39.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Prov_6.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/Events.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_28.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_29.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_33.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_34.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_31.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_32.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_37.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_38.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_35.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_36.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_30.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/ai/UnitStance.h"
#include "arc/scene/ui/Tooltip.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "arc/struct/Queue.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_39.h"
#include "mindustry/type/Item.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_44.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_45.h"
#include "mindustry/game/EventType_BlockInfoEvent.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_42.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_43.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_40.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_arc_func_Cons_41.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/scene/event/HandCursorListener.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/struct/IntSeq.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/ui/fragments/PlacementFragment_1.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValues.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Category.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"

extern "C" {


void mark_mindustry_ui_fragments_PlacementFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_PlacementFragment *) object;
	if (self->F_currentCategory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentCategory)->clazz)->markFunction)((jobject) self->F_currentCategory, mark, depth + 1);
	if (self->F_returnArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnArray)->clazz)->markFunction)((jobject) self->F_returnArray, mark, depth + 1);
	if (self->F_returnArray2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnArray2)->clazz)->markFunction)((jobject) self->F_returnArray2, mark, depth + 1);
	if (self->F_returnCatArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnCatArray)->clazz)->markFunction)((jobject) self->F_returnCatArray, mark, depth + 1);
	if (self->F_categoryEmpty)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_categoryEmpty)->clazz)->markFunction)((jobject) self->F_categoryEmpty, mark, depth + 1);
	if (self->F_selectedBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedBlocks)->clazz)->markFunction)((jobject) self->F_selectedBlocks, mark, depth + 1);
	if (self->F_scrollPositions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scrollPositions)->clazz)->markFunction)((jobject) self->F_scrollPositions, mark, depth + 1);
	if (self->F_menuHoverBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_menuHoverBlock)->clazz)->markFunction)((jobject) self->F_menuHoverBlock, mark, depth + 1);
	if (self->F_hover)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hover)->clazz)->markFunction)((jobject) self->F_hover, mark, depth + 1);
	if (self->F_lastFlowBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastFlowBuild)->clazz)->markFunction)((jobject) self->F_lastFlowBuild, mark, depth + 1);
	if (self->F_nextFlowBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextFlowBuild)->clazz)->markFunction)((jobject) self->F_nextFlowBuild, mark, depth + 1);
	if (self->F_lastDisplayState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDisplayState)->clazz)->markFunction)((jobject) self->F_lastDisplayState, mark, depth + 1);
	if (self->F_lastTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTeam)->clazz)->markFunction)((jobject) self->F_lastTeam, mark, depth + 1);
	if (self->F_blockTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockTable)->clazz)->markFunction)((jobject) self->F_blockTable, mark, depth + 1);
	if (self->F_toggler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_toggler)->clazz)->markFunction)((jobject) self->F_toggler, mark, depth + 1);
	if (self->F_topTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topTable)->clazz)->markFunction)((jobject) self->F_topTable, mark, depth + 1);
	if (self->F_blockCatTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockCatTable)->clazz)->markFunction)((jobject) self->F_blockCatTable, mark, depth + 1);
	if (self->F_commandTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandTable)->clazz)->markFunction)((jobject) self->F_commandTable, mark, depth + 1);
	if (self->F_mainStack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainStack)->clazz)->markFunction)((jobject) self->F_mainStack, mark, depth + 1);
	if (self->F_blockPane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockPane)->clazz)->markFunction)((jobject) self->F_blockPane, mark, depth + 1);
	if (self->F_rebuildCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rebuildCommand)->clazz)->markFunction)((jobject) self->F_rebuildCommand, mark, depth + 1);
	if (self->F_blockSelect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockSelect)->clazz)->markFunction)((jobject) self->F_blockSelect, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_PlacementFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_PlacementFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(77);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_rowWidth = (jint(4));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_currentCategory = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_returnArray = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_returnArray2 = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_returnCatArray = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_categoryEmpty = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_selectedBlocks = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_scrollPositions = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_input_KeyBind, (14));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect01;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect02;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect03;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect04;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect05;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect06;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect07;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect08;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect09;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 9;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelect10;
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 10;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelectLeft;
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = 11;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelectRight;
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = 12;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelectUp;
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = 13;
	clinit_mindustry_input_Binding(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Binding_blockSelectDown;
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_blockSelect = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnlockEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_hover_R_mindustry_ui_Displayable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:hover", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_hover;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:rebuild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_toggler;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_toggler;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getZIndex_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_toggler;
	jint temp1 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(127);
	((func_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_toggler;
	((func_arc_scene_ui_layout_Table_setZIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setZIndex_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(129);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastDisplayState = (jref) (jobject(nullptr));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlacementFragment_updatePick_mindustry_input_InputHandler_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:updatePick", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pick;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(139);
	frame[3].o = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(142);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_9;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	sp += 1;
	goto label_8;
	}
label_9:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_block;
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(143);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_copyConfig) != 0) goto label_13;
	}
label_12:;
	INST_ACONST_NULL();
	goto label_14;
label_13:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, sp[0].o);
	sp++;
label_14:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(146);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) != 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jint temp2 = (jint)((func_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_19;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	frame[4].o = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_config;
	frame[5].o = sp[0].o;
	LINE_NUMBER(149);
	goto label_17;
	}
label_19:;
	LINE_NUMBER(151);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(153);
	if ((frame[4].o) != nullptr) goto label_23;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) == 0) goto label_23;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp += 1;
	goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp += 1;
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp += 1;
	goto label_26;
	}
label_28:;
	INST_ACONST_NULL();
label_26:;
	INST_ASTORE(4);
label_23:;
	{
	LINE_NUMBER(160);
	if ((frame[4].o) == nullptr) goto label_29;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_29;
	INST_ALOAD(5);
	if ((--sp)->o != nullptr) goto label_29;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object])(ctx, (frame[4].o), (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(164);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_31;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	if (temp0 != 0) goto label_32;
	}
label_31:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) == 0) goto label_2;
	}
label_32:;
	{
	LINE_NUMBER(165);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(166);
	((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_lastConfig = (jref) (frame[5].o);
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_category;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_currentCategory = (jref) sp[1].o;
	}
label_35:;
	{
	LINE_NUMBER(170);
	((func_mindustry_world_Block_onPicked_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_onPicked_mindustry_world_Tile])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlacementFragment_gridUpdate_mindustry_input_InputHandler_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:gridUpdate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_scrollPositions;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockPane;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ScrollPane_getScrollY_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_getScrollY_R_float])(ctx, sp[2].o);
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(180);
	jint temp1 = (jint)((func_mindustry_ui_fragments_PlacementFragment_updatePick_mindustry_input_InputHandler_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_updatePick_mindustry_input_InputHandler_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(186);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelect;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(187);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelect;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(188);
	if ((frame[2].i) <= (9)) goto label_11;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(191);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_16;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[5].i));
	if (sp[0].o != (frame[4].o)) goto label_18;
	}
	{
	LINE_NUMBER(193);
	switch((frame[2].i)) {
		case 10: goto label_20;
		case 11: goto label_21;
		case 12: goto label_22;
		case 13: goto label_23;
		default: goto label_24;
	}
	}
label_20:;
	{
	LINE_NUMBER(195);
	frame[5].i = ((((frame[5].i) - (jint(1))) + ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) % ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size));
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(197);
	frame[5].i = (((frame[5].i) + (jint(1))) % ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(200);
	if ((frame[5].i) <= (jint(3))) goto label_25;
	}
	{
	jint temp0 = (frame[5].i) - (jint(4));
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	{
	jint temp0 = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) % (jint(4)))) + (frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_26:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(201);
	jint temp0 = frame[5].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_28;
	}
	INST_ICONST(0);
	goto label_29;
label_28:;
	INST_ICONST(4);
label_29:;
	{
	sp -= 2;
	frame[5].i = (sp[0].i - sp[1].i);
	LINE_NUMBER(202);
	goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(204);
	if ((frame[5].i) >= (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(4)))) goto label_31;
	}
	{
	jint temp0 = (frame[5].i) + (jint(4));
	sp[0].i = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	{
	jint temp0 = (frame[5].i) % (jint(4));
	sp[0].i = temp0;
	sp += 1;
	}
label_32:;
	INST_ISTORE(5);
label_24:;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[5].i));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) (checkCast(ctx, &class_mindustry_world_Block, sp[1].o));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_selectedBlocks;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(208);
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(191);
	INST_IINC(5, 1);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(211);
	goto label_35;
label_11:;
	{
	if (((jint)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectEnd) != 0) goto label_36;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectSeqMillis));
	if ((longCompare(temp0, (jlong(400ll)))) <= 0) goto label_37;
	}
label_36:;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_currentCategory = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_40:;
	{
	LINE_NUMBER(218);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectEnd = (jint(0));
	LINE_NUMBER(219);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectSeq = (jint(0));
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_blockSelectSeqMillis = temp0;
	goto label_35;
	}
label_37:;
	{
	LINE_NUMBER(223);
	if (((jint)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectSeq) != 0) goto label_44;
	}
	{
	LINE_NUMBER(224);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectSeq = ((frame[2].i) + (jint(1)));
	goto label_46;
	}
label_44:;
	{
	LINE_NUMBER(227);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectSeq;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[2].i) == (9)) goto label_47;
	}
	INST_ICONST(0);
	goto label_48;
label_47:;
	INST_ICONST(1);
label_48:;
	{
	sp -= 3;
	frame[2].i = (sp[0].i + ((sp[1].i - sp[2].i) * (10)));
	LINE_NUMBER(228);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelectEnd = (jint(1));
	}
label_46:;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(231);
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_51;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].i));
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_Block, sp[1].o)));
	if (temp0 != 0) goto label_52;
	}
label_51:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_52:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_53;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_mindustry_world_Block, sp[0].o);
	sp += 1;
	goto label_54;
	}
label_53:;
	INST_ACONST_NULL();
label_54:;
	{
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_selectedBlocks;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_blockSelectSeqMillis = temp0;
	}
label_35:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(186);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(240);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_categoryPrev;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(241);
	frame[2].i = (jint(0));
	}
label_59:;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[1].o = (jobject)((func_mindustry_type_Category_prev_R_mindustry_type_Category) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_prev_R_mindustry_type_Category])(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_currentCategory = (jref) sp[1].o;
	LINE_NUMBER(244);
	INST_IINC(2, 1);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) == 0) goto label_62;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_59;
	}
label_62:;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(1));
	}
label_57:;
	{
	LINE_NUMBER(250);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_categoryNext;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_64;
	}
	{
	LINE_NUMBER(251);
	frame[2].i = (jint(0));
	}
label_66:;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[1].o = (jobject)((func_mindustry_type_Category_next_R_mindustry_type_Category) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_next_R_mindustry_type_Category])(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_currentCategory = (jref) sp[1].o;
	LINE_NUMBER(254);
	INST_IINC(2, 1);
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) == 0) goto label_69;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_66;
	}
label_69:;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jint(1));
	}
label_64:;
	{
	LINE_NUMBER(260);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockInfo;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_71;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Unit)) == 0) goto label_73;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_unlockedNow_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_73;
	}
	{
	LINE_NUMBER(262);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, (frame[2].o));
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	goto label_71;
	}
label_73:;
	{
	LINE_NUMBER(264);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(265);
	if ((frame[3].o) != nullptr) goto label_77;
	}
	INST_ACONST_NULL();
	goto label_78;
label_77:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_79;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	sp += 1;
	goto label_78;
	}
label_79:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_block;
label_78:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock;
	if (sp[0].o == nullptr) goto label_82;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock;
	sp += 1;
	goto label_83;
	}
label_82:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o == nullptr) goto label_84;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[1].o)))->F_block;
	sp += 1;
	goto label_83;
	}
label_84:;
	INST_ALOAD(4);
label_83:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(267);
	if ((frame[5].o) == nullptr) goto label_71;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_71;
	}
	{
	LINE_NUMBER(268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(269);
	clinit_mindustry_game_EventType$BlockInfoEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockInfoEvent);
	init_mindustry_game_EventType$BlockInfoEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_71:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:getUnplaceableReason", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(754);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(755);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@unit.nobuild"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(756);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(757);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_Block_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 != 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@unsupported.environment"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(758);
	jint temp0 = (jint)((func_mindustry_world_Block_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_isBanned_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@banned"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(759);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"block.limit"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_state;
	sp[3].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[3].o))->F_rules;
	sp[3].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[3].o))->F_blockLimits;
	jint temp1 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[3].o, (frame[1].o));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(760);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_getCategories_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:getCategories", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_returnCatArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_util_Comparator_2(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_util_Comparator_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_util_Comparator_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:getByCategory", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_returnArray;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:getUnlockedByCategory", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_returnArray2;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_util_Comparator_3(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_util_Comparator_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_util_Comparator_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:getSelectedBlock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_selectedBlocks;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:unlocked", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(780);
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_unlockedNowHost_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_placeablePlayer) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_environmentBuildable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_environmentBuildable_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env;
	LINE_NUMBER(781);
	jint temp1 = (jint)((func_mindustry_world_Block_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(780);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlacementFragment_hasInfoBox_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:hasInfoBox", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable])(ctx, (frame[0].o));
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_hover = (jref) sp[1].o;
	LINE_NUMBER(786);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_hover;
	if (sp[0].o == nullptr) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:hovered", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_topTable;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(794);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_arc_scene_Scene_hasMouse_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_float_float_R_boolean])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	if (temp3 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_topTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (jint(0)));
	if (sp[0].o == nullptr) goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(797);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	jfloat temp2 = jfloat(5.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_14);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestOverlap_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(799);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(802);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(803);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_inMapArea_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_inMapArea_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_displayable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_displayable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_inMapArea_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_inMapArea_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(806);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_nextFlowBuild = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(810);
	jint temp0 = (jint)((func_mindustry_world_Tile_displayable_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_displayable_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_7:;
	{
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$hovered$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$hovered$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(797);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_displayable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_displayable_R_boolean])(ctx, (frame[0].o));
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

jobject M_mindustry_ui_fragments_PlacementFragment_lambda$getSelectedBlock$0_mindustry_type_Category_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$getSelectedBlock$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_PlacementFragment_lambda$getUnlockedByCategory$1_mindustry_world_Block_mindustry_world_Block_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$getUnlockedByCategory$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)((func_mindustry_world_Block_isPlaceable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isPlaceable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isPlaceable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_isPlaceable_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	POP_N(2); // Pop method args
	sp->i = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, sp[0].i, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlacementFragment_lambda$getUnlockedByCategory$0_mindustry_type_Category_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$getUnlockedByCategory$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_category;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[2].o));
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

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$getByCategory$0_mindustry_type_Category_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$getByCategory$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_category;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_environmentBuildable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_environmentBuildable_R_boolean])(ctx, (frame[1].o));
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

jint M_mindustry_ui_fragments_PlacementFragment_lambda$getCategories$0_mindustry_type_Category_mindustry_type_Category_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$getCategories$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	jint temp2 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp1, ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2)));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_toggler = (jref) (frame[1].o);
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(750);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_buttonEdge2;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = jint(3);
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_4(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_blockCatTable = (jref) sp[1].o;
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_pane2;
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_commandTable = (jref) sp[1].o;
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	init_arc_scene_ui_layout_Stack(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_mainStack = (jref) sp[1].o;
	LINE_NUMBER(446);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_mainStack;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_mainStack;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(465);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp1 = jint(3);
	LINE_NUMBER(469);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_commandTable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_commandTable;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"commandmode.name"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_commandTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_commandTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(677);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockCatTable;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane2;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(694);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(695);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockCatTable;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_31);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_bottom_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(741);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_mainStack;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockCatTable;
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(743);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(744);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_24);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$55_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$55", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(745);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_gridUpdate_mindustry_input_InputHandler_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_gridUpdate_mindustry_input_InputHandler_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(746);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(748);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$52_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$52", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(697);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_fragments_PlacementFragment$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment$1);
	sp[2].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_black6;
	init_mindustry_ui_fragments_PlacementFragment$1_mindustry_ui_fragments_PlacementFragment_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jint temp0 = jint(2);
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-3.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(704);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(706);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(709);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Category_all;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_9;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(711);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[8].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(709);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(716);
	frame[5].i = (jint(0));
	LINE_NUMBER(717);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getCategories_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getCategories_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_Category, sp[0].o));
	LINE_NUMBER(718);
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	if ((temp0 % (jint(2))) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_18:;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_categoryEmpty;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, (frame[7].o));
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(721);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(722);
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(725);
	if ((frame[4].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(726);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory = (jref) (frame[7].o);
	LINE_NUMBER(727);
	frame[4].i = (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(730);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[2].o = (jobject)((func_mindustry_type_Category_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Category_name_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable])(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_25);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = frame[3].o;
	LINE_NUMBER(736);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_32);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_type_Category_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Category_name_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"category-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(737);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(738);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$54_mindustry_type_Category_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$54", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(736);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
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

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$53_mindustry_type_Category_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$53", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(731);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory = (jref) (frame[1].o);
	LINE_NUMBER(732);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(733);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(735);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$48_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$48", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(679);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(194.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_34);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(686);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_blockPane = (jref) (checkCast(ctx, &class_arc_scene_ui_ScrollPane, sp[1].o));
	LINE_NUMBER(687);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockPane;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_smallPane;
	((func_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(689);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_35);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"inputTable"_j));
	LINE_NUMBER(693);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$51_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$51", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(691);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(692);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((func_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$50_arc_scene_ui_ScrollPane(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$50", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(680);
	jint temp0 = (jint)((func_arc_scene_ui_ScrollPane_hasScroll_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_hasScroll_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(681);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getHoverElement_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(682);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(683);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(686);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$49_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$49", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(679);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$24_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$24", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(479);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[3].o = sp[0].o;
	LINE_NUMBER(481);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[4].o = sp[0].o;
	LINE_NUMBER(482);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[5].o = sp[0].o;
	LINE_NUMBER(483);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[6].o = sp[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[7].o = sp[0].o;
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(486);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[8].o = sp[0].o;
	LINE_NUMBER(487);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(489);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[10].o = sp[0].o;
	LINE_NUMBER(490);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(491);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(493);
	sp[0].o = (jobject)createMultiArray(ctx, &class_int, {(jint(1)), (jint(0))});
	frame[13].o = sp[0].o;
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26);
		proxy->F_field8 = (jref) (frame[3].o);
		proxy->F_field7 = (jref) (frame[2].o);
		proxy->F_field6 = (jref) (frame[12].o);
		proxy->F_field5 = (jref) (frame[11].o);
		proxy->F_field4 = (jref) (frame[9].o);
		proxy->F_field3 = (jref) (frame[10].o);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[13].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_rebuildCommand = (jref) sp[1].o;
	LINE_NUMBER(615);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_27);
		proxy->F_field12 = (jref) (frame[9].o);
		proxy->F_field11 = (jref) (frame[11].o);
		proxy->F_field10 = (jref) (frame[7].o);
		proxy->F_field9 = (jref) (frame[10].o);
		proxy->F_field8 = (jref) (frame[8].o);
		proxy->F_field7 = (jref) (frame[12].o);
		proxy->F_field6 = (jref) (frame[6].o);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(671);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_rebuildCommand;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$43_Array2_int_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8, jobject param9, jobject param10, jobject param11) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$43", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	frame[12].o = param11;
	{
	LINE_NUMBER(617);
	jint temp0 = ((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(618);
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	LINE_NUMBER(619);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[2].o));
	LINE_NUMBER(620);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[3].o));
	LINE_NUMBER(621);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[4].o));
	LINE_NUMBER(622);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[5].o));
	LINE_NUMBER(623);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[6].o));
	LINE_NUMBER(625);
	SM_java_util_Arrays_fill_Array1_int_int(ctx, (frame[13].o), (jint(0)));
	LINE_NUMBER(628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(629);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[15].o));
	frame[17].o = sp[0].o;
	if ((isInstance(ctx, (frame[17].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_13;
	}
	{
	frame[16].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[17].o)));
	LINE_NUMBER(630);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_command;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(631);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_stances;
	((func_arc_struct_Bits_set_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_arc_struct_Bits])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(634);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(636);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_type;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[7].o));
	LINE_NUMBER(639);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_type;
	((func_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq])(ctx, sp[0].o, (frame[15].o), (frame[7].o));
	LINE_NUMBER(641);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[7].o));
	frame[16].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(642);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[5].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[17].o)))->F_id));
	LINE_NUMBER(643);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	}
label_24:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(646);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[4].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[17].o)))->F_id));
	LINE_NUMBER(647);
	goto label_24;
	}
label_25:;
	LINE_NUMBER(648);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(650);
	jint temp0 = (jint)((func_arc_struct_Bits_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Bits_equals_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[4].o));
	if (temp0 == 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Bits_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Bits_equals_java_lang_Object_R_boolean])(ctx, (frame[9].o), (frame[5].o));
	if (temp0 == 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Bits_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Bits_equals_java_lang_Object_R_boolean])(ctx, (frame[10].o), (frame[6].o));
	if (temp0 != 0) goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_rebuildCommand;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(652);
	((func_arc_struct_Bits_set_arc_struct_Bits) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Bits_set_arc_struct_Bits])(ctx, (frame[10].o), (frame[6].o));
	}
label_29:;
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[11].o));
	frame[14].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(658);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[15].o)))->F_keybind;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[15].o)))->F_keybind;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(659);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_4(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_4);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_16);
		proxy->F_field0 = (jref) (frame[15].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[1].o = frame[15].o;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[3].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[15].o)))->F_id));
	sp += 2;
	if (temp0 != 0) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	POP_N(3); // Pop method args
	SM_mindustry_input_InputHandler_setUnitStanceChunked_arc_struct_IntSeq_mindustry_ai_UnitStance_boolean(ctx, sp[0].o, sp[1].o, sp[2].i);
label_34:;
	LINE_NUMBER(661);
	goto label_31;
label_32:;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[12].o));
	frame[14].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[15].o)))->F_keybind;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[15].o)))->F_keybind;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(666);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_5(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_5);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_17);
		proxy->F_field0 = (jref) (frame[15].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	SM_mindustry_input_InputHandler_setUnitCommandChunked_arc_struct_IntSeq_mindustry_ai_UnitCommand(ctx, sp[0].o, (frame[15].o));
	}
label_41:;
	LINE_NUMBER(668);
	goto label_38;
label_39:;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$47_mindustry_ai_UnitCommand_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$47", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_PlacementFragment_lambda$build$46_mindustry_gen_Unit_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$46", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$45_mindustry_ai_UnitStance_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$45", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_PlacementFragment_lambda$build$44_mindustry_gen_Unit_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$44", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$25_Array2_int_arc_scene_ui_layout_Table_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8) {
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$25", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(496);
	jint temp0 = ((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(497);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))));
	LINE_NUMBER(499);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(500);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	frame[10].o = sp[0].o;
	LINE_NUMBER(501);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[10].o)))->F_size) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(502);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[2].o));
	LINE_NUMBER(503);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[3].o));
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[4].o));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[5].o));
	LINE_NUMBER(506);
	SM_java_util_Arrays_fill_Array1_int_int(ctx, (frame[9].o), (jint(0)));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(509);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[12].o)))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[6].o));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[12].o)))->F_type;
	((func_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq])(ctx, sp[0].o, (frame[12].o), (frame[6].o));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[13].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(515);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[3].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[14].o)))->F_id));
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[14].o));
	LINE_NUMBER(517);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[3].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[14].o)))->F_id));
	}
label_21:;
	LINE_NUMBER(519);
	goto label_18;
label_19:;
	LINE_NUMBER(520);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[11].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[11].o));
	LINE_NUMBER(525);
	frame[12].i = (jint(0));
	LINE_NUMBER(526);
	frame[13].i = (jint(0));
	}
label_27:;
	{
	if ((frame[13].i) >= (((jarray) nullCheck(ctx, (frame[9].o)))->length)) goto label_28;
	}
	{
	LINE_NUMBER(527);
	frame[14].i = (frame[13].i);
	LINE_NUMBER(528);
	if (((jint)ARRAY_ACCESS(jint, (frame[9].o), (frame[13].i))) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(529);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unit_int_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unit_int_R_mindustry_type_UnitType])(ctx, sp[0].o, (frame[13].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(530);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(ctx, (frame[15].o), ((jint)ARRAY_ACCESS(jint, (frame[9].o), (frame[13].i))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_36);
		proxy->F_field2 = (frame[14].i);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[15].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(558);
	INST_IINC(12, 1);
	if (((frame[12].i) % (7)) != 0) goto label_35;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[11].o));
	}
label_35:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[15].o)))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	}
label_37:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(563);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[17].o)))->F_id));
	if (temp0 != 0) goto label_39;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[17].o));
	LINE_NUMBER(565);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[2].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[17].o)))->F_id));
	}
label_39:;
	LINE_NUMBER(567);
	goto label_37;
label_31:;
	{
	LINE_NUMBER(526);
	INST_IINC(13, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(572);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) <= (jint(1))) goto label_42;
	}
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(575);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_37);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_42:;
	{
	LINE_NUMBER(590);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size) <= (jint(1))) goto label_46;
	}
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(593);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) <= (jint(1))) goto label_49;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(7.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_49:;
	{
	LINE_NUMBER(597);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_38);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_46:;
	LINE_NUMBER(610);
	goto label_52;
label_5:;
	{
	LINE_NUMBER(611);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"commandmode.nounits"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_center_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	}
label_52:;
	LINE_NUMBER(613);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$38_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$38", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(599);
	frame[4].i = (jint(0));
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(602);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable])(ctx, (frame[6].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_28);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_18);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[1].o = (jobject)((func_mindustry_ai_UnitStance_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ai_UnitStance_localized_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(606);
	INST_IINC(4, 1);
	if (((frame[4].i) % (6)) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_8:;
	LINE_NUMBER(607);
	goto label_3;
label_4:;
	LINE_NUMBER(608);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$42_arc_struct_Bits_mindustry_ai_UnitStance_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$42", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$39_arc_struct_Seq_mindustry_ai_UnitStance_arc_struct_Bits(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$39", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(603);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_6(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_6);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_19);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
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
	SM_mindustry_input_InputHandler_setUnitStanceChunked_arc_struct_IntSeq_mindustry_ai_UnitStance_boolean(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$41_mindustry_ai_UnitStance_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$41", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_PlacementFragment_lambda$build$40_mindustry_gen_Unit_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$40", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$33_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$33", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(577);
	frame[4].i = (jint(0));
	LINE_NUMBER(578);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(579);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[2].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[6].o)))->F_icon;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = checkCast(ctx, &class_arc_scene_style_Drawable, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_29);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_20);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[1].o = (jobject)((func_mindustry_ai_UnitCommand_localized_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ai_UnitCommand_localized_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(583);
	INST_IINC(4, 1);
	if (((frame[4].i) % (6)) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_8:;
	LINE_NUMBER(584);
	goto label_3;
label_4:;
	LINE_NUMBER(586);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$37_arc_struct_Bits_mindustry_ai_UnitCommand_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$37", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(581);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$34_arc_struct_Seq_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$34", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(580);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_7(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Intf_7);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	SM_mindustry_input_InputHandler_setUnitCommandChunked_arc_struct_IntSeq_mindustry_ai_UnitCommand(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$36_mindustry_ai_UnitCommand_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$36", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_fragments_PlacementFragment_lambda$build$35_mindustry_gen_Unit_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$35", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$26_mindustry_type_UnitType_Array1_int_int_arc_scene_ui_layout_Stack(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$26", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(531);
	((func_arc_scene_ui_layout_Stack_clearListeners) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_clearListeners])(ctx, (frame[3].o));
	LINE_NUMBER(532);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(ctx);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[1].o = (jobject)((func_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip])(ctx, sp[1].o, sp[2].o, (jint(0)));
	jint temp0 = (jint)((func_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_find_java_lang_String_R_arc_scene_Element])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"stack amount"_j))));
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o));
	LINE_NUMBER(535);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(536);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_6);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Label_setText_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(539);
	clinit_arc_scene_event_ClickListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_ClickListener);
	init_arc_scene_event_ClickListener(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(542);
	sp[0].o = frame[3].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(547);
	sp[0].o = frame[3].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(552);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean])(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(553);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(555);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_32);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$32_arc_scene_ui_layout_Stack_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$32", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, sp[0].o)))->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, (checkCast(ctx, &class_arc_scene_Group, sp[0].o)));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_Element, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_Element_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$30_mindustry_type_UnitType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$30", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(548);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(549);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$31_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$31", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
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

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$28_mindustry_type_UnitType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$28", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(543);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolf_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(544);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$29_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$29", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (sp[0].o == (frame[0].o)) goto label_1;
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

jobject SM_mindustry_ui_fragments_PlacementFragment_lambda$build$27_Array1_int_int_R_java_lang_CharSequence(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$27", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$23_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$23", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(466);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if ((floatCompare(((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_marginBottom), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(467);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_paneLeft;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].f), (jfloat(0)), (frame[2].f), (frame[1].f));
	}
label_1:;
	LINE_NUMBER(469);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$22(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$22", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode) == ((jint)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_wasCommandMode)) goto label_1;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_mainStack;
	((func_arc_scene_ui_layout_Stack_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_mainStack;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp += 1;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_commandTable;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[-1].o))->F_blockCatTable;
label_5:;
	{
	sp -= 2;
	((func_arc_scene_ui_layout_Stack_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(452);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode) == 0) goto label_7;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_commandTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockCatTable;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getWidth_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (temp0 / temp1));
	}
label_7:;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_wasCommandMode = ((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_commandMode);
	}
label_1:;
	LINE_NUMBER(458);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$11_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(348);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_topTable = (jref) (frame[1].o);
	LINE_NUMBER(349);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$12_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$12", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_hover;
	frame[2].o = sp[0].o;
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(354);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	INST_ALOAD(3);
	goto label_6;
label_5:;
	INST_ALOAD(2);
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(355);
	if ((frame[3].o) != nullptr) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(359);
	if (((jint)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_wasHovered) != (frame[5].i)) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastDisplayState;
	if (sp[0].o != (frame[4].o)) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastTeam;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(361);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(364);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastDisplayState = (jref) (frame[4].o);
	LINE_NUMBER(365);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_wasHovered = (frame[5].i);
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_lastTeam = (jref) sp[1].o;
	LINE_NUMBER(369);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_40);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(399);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_41);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(423);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_42);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_5(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Boolp_5);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_26;
	}
label_17:;
	{
	LINE_NUMBER(433);
	if ((frame[2].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(435);
	((func_mindustry_ui_Displayable_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_ui_Displayable, INDEX_mindustry_ui_Displayable_display_arc_scene_ui_layout_Table, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	}
label_26:;
	LINE_NUMBER(437);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlacementFragment_lambda$build$21_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
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

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$19_mindustry_world_Block_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$19", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(2)));
	LINE_NUMBER(426);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(427);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_7);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(190.0f);
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_lambda$build$20_mindustry_world_Block_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$20", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(429);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$16_mindustry_world_Block_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$16", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(403);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_43);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(402);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$17_mindustry_type_ItemStack_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(405);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(16.0f)));
	LINE_NUMBER(406);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Label_setEllipsis_boolean])(ctx, (checkCast(ctx, &class_arc_scene_ui_Label, sp[0].o)), (jint(1)));
	LINE_NUMBER(407);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_PlacementFragment_lambda$build$18_mindustry_type_ItemStack_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$18", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(408);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(409);
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier)));
	frame[2].i = temp1;
	LINE_NUMBER(410);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"*/\u0001"_j.string, 1, boxInteger(ctx, (frame[2].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(413);
	if ((floatCompare((jfloat((frame[3].i))), ((jfloat((frame[2].i))) / (jfloat(2))), 1)) >= 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[scarlet]"_j));
	goto label_7;
label_6:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[accent]"_j));
	goto label_7;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[white]"_j));
label_7:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong((frame[3].i))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001[white]/\u0001"_j.string, 3, sp[0].o, sp[1].o, boxInteger(ctx, (frame[2].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$13_mindustry_world_Block_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$13", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(372);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(373);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_2;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(375);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	if (sp[0].o != (frame[1].o)) goto label_7;
	}
	{
	jint temp0 = (((frame[5].i) + (jint(1))) / (10)) - (jint(1));
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelect;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(377);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"placement.blockselectkeys"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelect;
	sp[4].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	jint temp1 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[4].o);
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[3].o, temp1))))->F_value;
	sp[3].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[3].o))->F_key;
	sp[3].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(378);
	sp += 1;
	if ((frame[5].i) >= (10)) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelect;
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((((frame[5].i) + (jint(1))) / (10)) - (jint(1)))))))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	sp[0].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001,"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockSelect;
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((frame[5].i) % (10))))))->F_value;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[2].o))->F_key;
	LINE_NUMBER(379);
	sp[2].o = (jobject)((func_arc_input_KeyCode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_input_KeyCode_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001\u0001]"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(380);
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(375);
	INST_IINC(5, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(384);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(386);
	sp[0].o = frame[2].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(387);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Prov_9);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(390);
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"?"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatBordert;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockinfo"_j))));
	}
label_20:;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$15_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$15", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(392);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	((func_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_show_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(393);
	clinit_mindustry_game_EventType$BlockInfoEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockInfoEvent);
	init_mindustry_game_EventType$BlockInfoEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlacementFragment_lambda$build$14_mindustry_world_Block_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(387);
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"block.unknown"_j))));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$3", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(289);
	frame[1].i = (jint(0));
	LINE_NUMBER(291);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(292);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(296);
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	if ((temp0 % (jint(4))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_selecti;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_34);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(46.0f);
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(311);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[5].o), (jfloat(32.0f)));
	LINE_NUMBER(313);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_35);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_36);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_hovered_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_hovered_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(325);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_37);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_exited_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_exited_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(330);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(332);
	if ((frame[1].i) >= (jint(4))) goto label_18;
	}
	{
	LINE_NUMBER(333);
	frame[3].i = (jint(0));
	}
label_20:;
	{
	if ((frame[3].i) >= ((jint(4)) - (frame[1].i))) goto label_18;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	LINE_NUMBER(333);
	INST_IINC(3, 1);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockTable;
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockPane;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_scrollPositions;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(0)));
	((func_arc_scene_ui_ScrollPane_setScrollYForce_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(339);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$10(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockPane;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_scrollPositions;
	sp[2].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(0)));
	((func_arc_scene_ui_ScrollPane_setScrollYForce_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockPane;
	((func_arc_scene_ui_ScrollPane_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_act_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_blockPane;
	((func_arc_scene_ui_ScrollPane_layout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_layout])(ctx, sp[0].o);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$9_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(327);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$8_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_menuHoverBlock = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$5_mindustry_world_Block_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(314);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_4;
label_3:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(316);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_44);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_forEach_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_forEach_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(317);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_block;
	sp += 1;
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(319);
	jint temp0 = (jint)((func_mindustry_world_Block_isPlaceable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isPlaceable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_arc_func_Cons_45);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_forEach_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_forEach_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	LINE_NUMBER(322);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$7_arc_scene_Element(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_darkGray;
	((func_arc_scene_Element_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlacementFragment_lambda$build$6_arc_graphics_Color_arc_scene_Element(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(316);
	((func_arc_scene_Element_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_setColor_arc_graphics_Color])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$build$4_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)((func_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(303);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxCharacter(ctx, (jchar(temp0))));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(304);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(306);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_input;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_block;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	INST_ALOAD(1);
label_8:;
	{
	sp -= 2;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_selectedBlocks;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_currentCategory;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_control;
	sp[2].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[2].o))->F_input;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[2].o))->F_block;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlacementFragment_lambda$build$1_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$build$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlacementFragment(ctx);
	{
	LINE_NUMBER(280);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$new$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$new$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastFlowBuild;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastFlowBuild;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastFlowBuild;
	sp[0].o = (jobject)((func_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastFlowBuild;
	sp[0].o = (jobject)((func_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	((func_mindustry_world_modules_ItemModule_stopFlow) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_stopFlow])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastFlowBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_lastFlowBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_stopFlow) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_stopFlow])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_lastFlowBuild = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	sp[0].o = (jobject)((func_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	sp[0].o = (jobject)((func_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	((func_mindustry_world_modules_ItemModule_updateFlow) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_updateFlow])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_nextFlowBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_updateFlow) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_updateFlow])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$new$4_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$new$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_selectedBlocks;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$new$3_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$new$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[1].o)))->F_content;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_Block)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(94);
	((func_mindustry_ui_fragments_PlacementFragment_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_rebuild])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$new$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_rebuildCommand;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK((frame[0].o)))->F_rebuildCommand;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlacementFragment_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment:lambda$new$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	((mindustry_ui_fragments_PlacementFragment *) NULL_CHECK(sp[0].o))->F_currentCategory = (jref) sp[1].o;
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) (jobject(nullptr));
	LINE_NUMBER(82);
	((func_mindustry_ui_fragments_PlacementFragment_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_fragments_PlacementFragment;
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

	{ // Field menuHoverBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field hover
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastFlowBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field nextFlowBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastDisplayState
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastTeam
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getUnplaceableReason
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method hovered
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_fragments_PlacementFragment[] {
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
	(void *) M_mindustry_ui_fragments_PlacementFragment_hover_R_mindustry_ui_Displayable,
	(void *) M_mindustry_ui_fragments_PlacementFragment_rebuild,
	(void *) M_mindustry_ui_fragments_PlacementFragment_updatePick_mindustry_input_InputHandler_R_boolean,
	(void *) M_mindustry_ui_fragments_PlacementFragment_gridUpdate_mindustry_input_InputHandler_R_boolean,
	(void *) M_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String,
	(void *) M_mindustry_ui_fragments_PlacementFragment_getCategories_R_arc_struct_Seq,
	(void *) M_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq,
	(void *) M_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq,
	(void *) M_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block,
	(void *) M_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_ui_fragments_PlacementFragment_hasInfoBox_R_boolean,
	(void *) M_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$getSelectedBlock$0_mindustry_type_Category_R_mindustry_world_Block,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$getUnlockedByCategory$0_mindustry_type_Category_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$getCategories$0_mindustry_type_Category_mindustry_type_Category_R_int,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$55_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$52_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$54_mindustry_type_Category_arc_scene_ui_ImageButton,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$53_mindustry_type_Category_java_lang_Runnable,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$48_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$49_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$24_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$43_Array2_int_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$22,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$11_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$12_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$21_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$19_mindustry_world_Block_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$20_mindustry_world_Block_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$13_mindustry_world_Block_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$14_mindustry_world_Block_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$3,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$10,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$9_mindustry_world_Block,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$8_mindustry_world_Block,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$build$4_mindustry_world_Block,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$new$5,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$new$4_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$new$3_mindustry_game_EventType$UnlockEvent,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$new$2,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_ui_fragments_PlacementFragment_lambda$new$1,
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
	{ "hover", "()Lmindustry/ui/Displayable;" },
	{ "rebuild", "()V" },
	{ "updatePick", "(Lmindustry/input/InputHandler;)Z" },
	{ "gridUpdate", "(Lmindustry/input/InputHandler;)Z" },
	{ "build", "(Larc/scene/Group;)V" },
	{ "getUnplaceableReason", "(Lmindustry/world/Block;)Ljava/lang/String;" },
	{ "getCategories", "()Larc/struct/Seq;" },
	{ "getByCategory", "(Lmindustry/type/Category;)Larc/struct/Seq;" },
	{ "getUnlockedByCategory", "(Lmindustry/type/Category;)Larc/struct/Seq;" },
	{ "getSelectedBlock", "(Lmindustry/type/Category;)Lmindustry/world/Block;" },
	{ "unlocked", "(Lmindustry/world/Block;)Z" },
	{ "hasInfoBox", "()Z" },
	{ "hovered", "()Lmindustry/ui/Displayable;" },
	{ "lambda$getSelectedBlock$0", "(Lmindustry/type/Category;)Lmindustry/world/Block;" },
	{ "lambda$getUnlockedByCategory$0", "(Lmindustry/type/Category;Lmindustry/world/Block;)Z" },
	{ "lambda$getCategories$0", "(Lmindustry/type/Category;Lmindustry/type/Category;)I" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$55", "(Ljava/lang/Runnable;)V" },
	{ "lambda$build$52", "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$54", "(Lmindustry/type/Category;Larc/scene/ui/ImageButton;)V" },
	{ "lambda$build$53", "(Lmindustry/type/Category;Ljava/lang/Runnable;)V" },
	{ "lambda$build$48", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$49", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$24", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$43", "([[ILarc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Seq;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Seq;Larc/struct/Seq;)V" },
	{ "lambda$build$22", "()V" },
	{ "lambda$build$11", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$12", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$21", "(Lmindustry/world/Block;)Z" },
	{ "lambda$build$19", "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$20", "(Lmindustry/world/Block;)Ljava/lang/CharSequence;" },
	{ "lambda$build$13", "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$14", "(Lmindustry/world/Block;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$build$3", "()V" },
	{ "lambda$build$10", "()V" },
	{ "lambda$build$9", "(Lmindustry/world/Block;)V" },
	{ "lambda$build$8", "(Lmindustry/world/Block;)V" },
	{ "lambda$build$4", "(Lmindustry/world/Block;)V" },
	{ "lambda$new$5", "()V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$3", "(Lmindustry/game/EventType$UnlockEvent;)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$1", "()V" },
};

static FieldMetadata fields[] {
	{ "rowWidth", &class_int, offsetof(mindustry_ui_fragments_PlacementFragment, F_rowWidth), "I", 16 },
	{ "currentCategory", &class_mindustry_type_Category, offsetof(mindustry_ui_fragments_PlacementFragment, F_currentCategory), "Lmindustry/type/Category;", 1 },
	{ "returnArray", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlacementFragment, F_returnArray), "Larc/struct/Seq;", 0 },
	{ "returnArray2", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlacementFragment, F_returnArray2), "Larc/struct/Seq;", 0 },
	{ "returnCatArray", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlacementFragment, F_returnCatArray), "Larc/struct/Seq;", 0 },
	{ "categoryEmpty", getArrayClass(&class_boolean, 1), offsetof(mindustry_ui_fragments_PlacementFragment, F_categoryEmpty), "[Z", 0 },
	{ "selectedBlocks", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_fragments_PlacementFragment, F_selectedBlocks), "Larc/struct/ObjectMap;", 0 },
	{ "scrollPositions", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_ui_fragments_PlacementFragment, F_scrollPositions), "Larc/struct/ObjectFloatMap;", 0 },
	{ "menuHoverBlock", &class_mindustry_world_Block, offsetof(mindustry_ui_fragments_PlacementFragment, F_menuHoverBlock), "Lmindustry/world/Block;", 0 },
	{ "hover", &class_mindustry_ui_Displayable, offsetof(mindustry_ui_fragments_PlacementFragment, F_hover), "Lmindustry/ui/Displayable;", 0 },
	{ "lastFlowBuild", &class_mindustry_gen_Building, offsetof(mindustry_ui_fragments_PlacementFragment, F_lastFlowBuild), "Lmindustry/gen/Building;", 0 },
	{ "nextFlowBuild", &class_mindustry_gen_Building, offsetof(mindustry_ui_fragments_PlacementFragment, F_nextFlowBuild), "Lmindustry/gen/Building;", 0 },
	{ "lastDisplayState", &class_java_lang_Object, offsetof(mindustry_ui_fragments_PlacementFragment, F_lastDisplayState), "Ljava/lang/Object;", 0 },
	{ "lastTeam", &class_mindustry_game_Team, offsetof(mindustry_ui_fragments_PlacementFragment, F_lastTeam), "Lmindustry/game/Team;", 0 },
	{ "wasHovered", &class_boolean, offsetof(mindustry_ui_fragments_PlacementFragment, F_wasHovered), "Z", 0 },
	{ "blockTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlacementFragment, F_blockTable), "Larc/scene/ui/layout/Table;", 0 },
	{ "toggler", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlacementFragment, F_toggler), "Larc/scene/ui/layout/Table;", 0 },
	{ "topTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlacementFragment, F_topTable), "Larc/scene/ui/layout/Table;", 0 },
	{ "blockCatTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlacementFragment, F_blockCatTable), "Larc/scene/ui/layout/Table;", 0 },
	{ "commandTable", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlacementFragment, F_commandTable), "Larc/scene/ui/layout/Table;", 0 },
	{ "mainStack", &class_arc_scene_ui_layout_Stack, offsetof(mindustry_ui_fragments_PlacementFragment, F_mainStack), "Larc/scene/ui/layout/Stack;", 0 },
	{ "blockPane", &class_arc_scene_ui_ScrollPane, offsetof(mindustry_ui_fragments_PlacementFragment, F_blockPane), "Larc/scene/ui/ScrollPane;", 0 },
	{ "rebuildCommand", &class_java_lang_Runnable, offsetof(mindustry_ui_fragments_PlacementFragment, F_rebuildCommand), "Ljava/lang/Runnable;", 0 },
	{ "blockSelectEnd", &class_boolean, offsetof(mindustry_ui_fragments_PlacementFragment, F_blockSelectEnd), "Z", 0 },
	{ "wasCommandMode", &class_boolean, offsetof(mindustry_ui_fragments_PlacementFragment, F_wasCommandMode), "Z", 0 },
	{ "blockSelectSeq", &class_int, offsetof(mindustry_ui_fragments_PlacementFragment, F_blockSelectSeq), "I", 0 },
	{ "blockSelectSeqMillis", &class_long, offsetof(mindustry_ui_fragments_PlacementFragment, F_blockSelectSeqMillis), "J", 0 },
	{ "blockSelect", getArrayClass(&class_arc_input_KeyBind, 1), offsetof(mindustry_ui_fragments_PlacementFragment, F_blockSelect), "[Larc/input/KeyBind;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_PlacementFragment, 0, "()V", 1 },
	{ "hover", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_hover_R_mindustry_ui_Displayable, VTABLE_mindustry_ui_fragments_PlacementFragment_hover_R_mindustry_ui_Displayable, "()Lmindustry/ui/Displayable;", 1 },
	{ "rebuild", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_rebuild, VTABLE_mindustry_ui_fragments_PlacementFragment_rebuild, "()V", 1 },
	{ "updatePick", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_updatePick_mindustry_input_InputHandler_R_boolean, VTABLE_mindustry_ui_fragments_PlacementFragment_updatePick_mindustry_input_InputHandler_R_boolean, "(Lmindustry/input/InputHandler;)Z", 0 },
	{ "gridUpdate", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_gridUpdate_mindustry_input_InputHandler_R_boolean, VTABLE_mindustry_ui_fragments_PlacementFragment_gridUpdate_mindustry_input_InputHandler_R_boolean, "(Lmindustry/input/InputHandler;)Z", 0 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_PlacementFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "getUnplaceableReason", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String, VTABLE_mindustry_ui_fragments_PlacementFragment_getUnplaceableReason_mindustry_world_Block_R_java_lang_String, "(Lmindustry/world/Block;)Ljava/lang/String;", 0 },
	{ "getCategories", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_getCategories_R_arc_struct_Seq, VTABLE_mindustry_ui_fragments_PlacementFragment_getCategories_R_arc_struct_Seq, "()Larc/struct/Seq;", 0 },
	{ "getByCategory", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq, VTABLE_mindustry_ui_fragments_PlacementFragment_getByCategory_mindustry_type_Category_R_arc_struct_Seq, "(Lmindustry/type/Category;)Larc/struct/Seq;", 0 },
	{ "getUnlockedByCategory", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq, VTABLE_mindustry_ui_fragments_PlacementFragment_getUnlockedByCategory_mindustry_type_Category_R_arc_struct_Seq, "(Lmindustry/type/Category;)Larc/struct/Seq;", 0 },
	{ "getSelectedBlock", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block, VTABLE_mindustry_ui_fragments_PlacementFragment_getSelectedBlock_mindustry_type_Category_R_mindustry_world_Block, "(Lmindustry/type/Category;)Lmindustry/world/Block;", 0 },
	{ "unlocked", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean, VTABLE_mindustry_ui_fragments_PlacementFragment_unlocked_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 0 },
	{ "hasInfoBox", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_hasInfoBox_R_boolean, VTABLE_mindustry_ui_fragments_PlacementFragment_hasInfoBox_R_boolean, "()Z", 0 },
	{ "hovered", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable, VTABLE_mindustry_ui_fragments_PlacementFragment_hovered_R_mindustry_ui_Displayable, "()Lmindustry/ui/Displayable;", 1 },
	{ "lambda$hovered$0", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$hovered$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$getSelectedBlock$0", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$getSelectedBlock$0_mindustry_type_Category_R_mindustry_world_Block, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$getSelectedBlock$0_mindustry_type_Category_R_mindustry_world_Block, "(Lmindustry/type/Category;)Lmindustry/world/Block;", 4098 },
	{ "lambda$getUnlockedByCategory$1", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$getUnlockedByCategory$1_mindustry_world_Block_mindustry_world_Block_R_int, 0, "(Lmindustry/world/Block;Lmindustry/world/Block;)I", 4106 },
	{ "lambda$getUnlockedByCategory$0", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$getUnlockedByCategory$0_mindustry_type_Category_mindustry_world_Block_R_boolean, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$getUnlockedByCategory$0_mindustry_type_Category_mindustry_world_Block_R_boolean, "(Lmindustry/type/Category;Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$getByCategory$0", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$getByCategory$0_mindustry_type_Category_mindustry_world_Block_R_boolean, 0, "(Lmindustry/type/Category;Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$getCategories$0", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$getCategories$0_mindustry_type_Category_mindustry_type_Category_R_int, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$getCategories$0_mindustry_type_Category_mindustry_type_Category_R_int, "(Lmindustry/type/Category;Lmindustry/type/Category;)I", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$55", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$55_java_lang_Runnable, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$55_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$52", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$52_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$52_java_lang_Runnable_arc_scene_ui_layout_Table, "(Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$54", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$54_mindustry_type_Category_arc_scene_ui_ImageButton, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$54_mindustry_type_Category_arc_scene_ui_ImageButton, "(Lmindustry/type/Category;Larc/scene/ui/ImageButton;)V", 4098 },
	{ "lambda$build$53", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$53_mindustry_type_Category_java_lang_Runnable, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$53_mindustry_type_Category_java_lang_Runnable, "(Lmindustry/type/Category;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$build$48", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$48_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$48_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$51", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$51_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$50", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$50_arc_scene_ui_ScrollPane, 0, "(Larc/scene/ui/ScrollPane;)V", 4106 },
	{ "lambda$build$49", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$49_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$49_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$24", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$24_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$24_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$43", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$43_Array2_int_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$43_Array2_int_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq, "([[ILarc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Seq;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Seq;Larc/struct/Seq;)V", 4098 },
	{ "lambda$build$47", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$47_mindustry_ai_UnitCommand_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/ai/UnitCommand;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$build$46", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$46_mindustry_gen_Unit_R_int, 0, "(Lmindustry/gen/Unit;)I", 4106 },
	{ "lambda$build$45", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$45_mindustry_ai_UnitStance_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/ai/UnitStance;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$build$44", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$44_mindustry_gen_Unit_R_int, 0, "(Lmindustry/gen/Unit;)I", 4106 },
	{ "lambda$build$25", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$25_Array2_int_arc_scene_ui_layout_Table_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits, 0, "([[ILarc/scene/ui/layout/Table;Larc/struct/Bits;Larc/struct/Bits;Larc/struct/Seq;Larc/struct/Seq;Larc/struct/Seq;Larc/struct/Bits;Larc/struct/Bits;)V", 4106 },
	{ "lambda$build$38", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$38_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/struct/Seq;Larc/struct/Bits;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$42", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$42_arc_struct_Bits_mindustry_ai_UnitStance_arc_scene_ui_ImageButton_R_boolean, 0, "(Larc/struct/Bits;Lmindustry/ai/UnitStance;Larc/scene/ui/ImageButton;)Z", 4106 },
	{ "lambda$build$39", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$39_arc_struct_Seq_mindustry_ai_UnitStance_arc_struct_Bits, 0, "(Larc/struct/Seq;Lmindustry/ai/UnitStance;Larc/struct/Bits;)V", 4106 },
	{ "lambda$build$41", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$41_mindustry_ai_UnitStance_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/ai/UnitStance;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$build$40", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$40_mindustry_gen_Unit_R_int, 0, "(Lmindustry/gen/Unit;)I", 4106 },
	{ "lambda$build$33", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$33_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_scene_ui_layout_Table, 0, "(Larc/struct/Seq;Larc/struct/Seq;Larc/struct/Bits;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$37", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$37_arc_struct_Bits_mindustry_ai_UnitCommand_arc_scene_ui_ImageButton_R_boolean, 0, "(Larc/struct/Bits;Lmindustry/ai/UnitCommand;Larc/scene/ui/ImageButton;)Z", 4106 },
	{ "lambda$build$34", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$34_arc_struct_Seq_mindustry_ai_UnitCommand, 0, "(Larc/struct/Seq;Lmindustry/ai/UnitCommand;)V", 4106 },
	{ "lambda$build$36", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$36_mindustry_ai_UnitCommand_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/ai/UnitCommand;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$build$35", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$35_mindustry_gen_Unit_R_int, 0, "(Lmindustry/gen/Unit;)I", 4106 },
	{ "lambda$build$26", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$26_mindustry_type_UnitType_Array1_int_int_arc_scene_ui_layout_Stack, 0, "(Lmindustry/type/UnitType;[IILarc/scene/ui/layout/Stack;)V", 4106 },
	{ "lambda$build$32", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$32_arc_scene_ui_layout_Stack_arc_scene_event_ClickListener, 0, "(Larc/scene/ui/layout/Stack;Larc/scene/event/ClickListener;)V", 4106 },
	{ "lambda$build$30", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$30_mindustry_type_UnitType, 0, "(Lmindustry/type/UnitType;)V", 4106 },
	{ "lambda$build$31", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$31_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$build$28", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$28_mindustry_type_UnitType, 0, "(Lmindustry/type/UnitType;)V", 4106 },
	{ "lambda$build$29", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$29_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$build$27", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$27_Array1_int_int_R_java_lang_CharSequence, 0, "([II)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$23", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$23_float_float_float_float, 0, "(FFFF)V", 4106 },
	{ "lambda$build$22", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$22, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$22, "()V", 4098 },
	{ "lambda$build$11", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$11_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$11_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$12", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$12_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$12_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$21", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$21_mindustry_world_Block_R_boolean, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$21_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$build$19", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$19_mindustry_world_Block_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$19_mindustry_world_Block_arc_scene_ui_layout_Table, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$20", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$20_mindustry_world_Block_R_java_lang_CharSequence, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$20_mindustry_world_Block_R_java_lang_CharSequence, "(Lmindustry/world/Block;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$build$16", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$16_mindustry_world_Block_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$17", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$17_mindustry_type_ItemStack_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/ItemStack;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$18", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$18_mindustry_type_ItemStack_R_java_lang_CharSequence, 0, "(Lmindustry/type/ItemStack;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$13", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$13_mindustry_world_Block_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$13_mindustry_world_Block_arc_scene_ui_layout_Table, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$15", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$15_mindustry_world_Block, 0, "(Lmindustry/world/Block;)V", 4106 },
	{ "lambda$build$14", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$14_mindustry_world_Block_java_lang_String_R_java_lang_CharSequence, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$14_mindustry_world_Block_java_lang_String_R_java_lang_CharSequence, "(Lmindustry/world/Block;Ljava/lang/String;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$3, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$3, "()V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$10, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$10, "()V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$9_mindustry_world_Block, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$9_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$8_mindustry_world_Block, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$8_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$5_mindustry_world_Block_arc_scene_ui_ImageButton, 0, "(Lmindustry/world/Block;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$7_arc_scene_Element, 0, "(Larc/scene/Element;)V", 4106 },
	{ "lambda$build$6", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$6_arc_graphics_Color_arc_scene_Element, 0, "(Larc/graphics/Color;Larc/scene/Element;)V", 4106 },
	{ "lambda$build$4", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$build$4_mindustry_world_Block, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$build$4_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_ui_fragments_PlacementFragment_lambda$build$1_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$new$5, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$new$5, "()V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$new$4_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$new$4_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$new$3_mindustry_game_EventType$UnlockEvent, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$new$3_mindustry_game_EventType$UnlockEvent, "(Lmindustry/game/EventType$UnlockEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$new$2, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$new$2, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_lambda$new$1, VTABLE_mindustry_ui_fragments_PlacementFragment_lambda$new$1, "()V", 4098 },
};

Class class_mindustry_ui_fragments_PlacementFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/PlacementFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_PlacementFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_PlacementFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_PlacementFragment,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_PlacementFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 82,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 56,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_PlacementFragment = registerClass(&class_mindustry_ui_fragments_PlacementFragment);

}
