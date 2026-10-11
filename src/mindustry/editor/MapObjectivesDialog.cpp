#include "mindustry/editor/MapObjectivesDialog.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "arc/util/serialization/Json_FieldMetadata.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/game/MapObjectives_IndexBool.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_62.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_63.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_64.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_65.h"
#include "arc/util/serialization/Json.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_60.h"
#include "arc/util/Tmp.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_61.h"
#include "arc/func/Boolc.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_66.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_67.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_68.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_69.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_55.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_57.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_58.h"
#include "arc/struct/OrderedMap.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolf_9.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_33.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_90.h"
#include "arc/func/Cons.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_84.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_85.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_86.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_87.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolf_6.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_80.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_30.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_81.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_82.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolf_8.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_32.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolf_7.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_83.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_31.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_88.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_89.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_23.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_22.h"
#include "mindustry/io/JsonIO.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_25.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_24.h"
#include "java/lang/Long.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_27.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_26.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_29.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_28.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_73.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_74.h"
#include "mindustry/game/MapObjectives_LabelFlag.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_75.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_76.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_70.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_71.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_21.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_72.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_20.h"
#include "mindustry/game/MapObjectives_Researchable.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_77.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_78.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_79.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_33.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_27.h"
#include "java/lang/Override.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_28.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_29.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_23.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_24.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_25.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_26.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_21.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_22.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_32.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_31.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_30.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/editor/MapObjectivesDialog_4.h"
#include "mindustry/type/Item.h"
#include "mindustry/editor/MapObjectivesDialog_FieldProvider.h"
#include "mindustry/content/Items.h"
#include "mindustry/editor/MapObjectivesDialog_2.h"
#include "mindustry/editor/MapObjectivesDialog_3.h"
#include "mindustry/editor/MapObjectivesCanvas.h"
#include "mindustry/editor/MapObjectivesDialog_1.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/MapObjectives_Immutable.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/event/HandCursorListener.h"
#include "arc/struct/IntMap.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_41.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/Byte.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_38.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_39.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_106.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_34.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_105.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_35.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_104.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_36.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_103.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_37.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_102.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_30.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_101.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_31.h"
#include "mindustry/core/UI.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_100.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_32.h"
#include "java/lang/CharSequence.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_33.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldInterpreter_40.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolf_10.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolf_11.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_109.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_108.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_107.h"
#include "java/lang/Class.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "java/lang/Integer.h"
#include "mindustry/ui/dialogs/ColorPicker.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_23.h"
#include "arc/func/Intc.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_29.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_28.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_27.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_26.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_25.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_24.h"
#include "arc/scene/ui/CheckBox.h"
#include "arc/Core.h"
#include "java/lang/reflect/Modifier.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_32.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_31.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_30.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_39.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_38.h"
#include "java/lang/Double.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_35.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_5.h"
#include "mindustry/game/MapObjectives_Synthetic.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_4.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_18.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_3.h"
#include "java/lang/Boolean.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_17.h"
#include "mindustry/editor/MapObjectivesDialog.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_19.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/content/UnitTypes.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_25.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_24.h"
#include "mindustry/editor/MapObjectivesDialog_FieldInterpreter.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_23.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_22.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_29.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_28.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_27.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_26.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/game/MapObjectives_Alignment.h"
#include "mindustry/game/MapObjectives_TilePos.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_21.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Prov_20.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_19.h"
#include "arc/scene/ui/TextField.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_18.h"
#include "mindustry/game/MapObjectives_LogicCode.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog_FieldProvider_17.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolc_5.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolc_4.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolc_7.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Boolc_6.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives_TextureHolder.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "arc/util/Structs.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_95.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_96.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_97.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_98.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_91.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_92.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_93.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_94.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_99.h"
#include "mindustry/logic/LogicDialog.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Intc_1.h"
#include "mindustry/game/MapObjectives_Second.h"
#include "java/lang/Float.h"
#include "mindustry/logic/LExecutor.h"
#include "arc/Application.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_45.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_44.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_42.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_java_lang_Runnable_40.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/game/MapObjectives_Vertices.h"
#include "arc/util/Reflect.h"
#include "mindustry/game/MapObjectives_Unordered.h"
#include "mindustry/content/Blocks.h"
#include "arc/scene/Element.h"
#include "mindustry/editor/MapObjectivesDialog_TypeInfo.h"

extern "C" {

jobject SF_mindustry_editor_MapObjectivesDialog_providers;
jobject SF_mindustry_editor_MapObjectivesDialog_interpreters;

void mark_mindustry_editor_MapObjectivesDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_MapObjectivesDialog_providers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapObjectivesDialog_providers)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapObjectivesDialog_providers, mark, depth + 1);
		if (SF_mindustry_editor_MapObjectivesDialog_interpreters)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapObjectivesDialog_interpreters)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapObjectivesDialog_interpreters, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_BaseDialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapObjectivesDialog *) object;
	if (self->F_canvas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_canvas)->clazz)->markFunction)((jobject) self->F_canvas, mark, depth + 1);
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
}

jobject SM_mindustry_editor_MapObjectivesDialog_defaultInterpreter_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:defaultInterpreter", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	{
	LINE_NUMBER(418);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_21(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_21 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_21);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:name", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(471);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_55);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(478);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: "_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_mindustry_editor_MapObjectivesDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(485);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@editor.objectives"_j))));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_56);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_editor_MapObjectivesDialog *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(486);
	((func_mindustry_editor_MapObjectivesDialog_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_clear])(ctx, (frame[0].o));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesDialog_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (jfloat(0)));
	LINE_NUMBER(489);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_black5;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesCanvas(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas);
	init_mindustry_editor_MapObjectivesCanvas(ctx, sp[3].o);
	((mindustry_editor_MapObjectivesDialog *) NULL_CHECK(sp[2].o))->F_canvas = (jref) sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[3].o;
	jint temp2 = jint(2);
	clinit_mindustry_editor_MapObjectivesDialog$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$4);
	init_mindustry_editor_MapObjectivesDialog$4_mindustry_editor_MapObjectivesDialog(ctx, sp[2].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesDialog_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(544);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog_hidden_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_hidden_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesDialog_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesDialog_doInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:doInput", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(557);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_c;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesDialog_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(559);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jfloat temp2 = temp0 - ((temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp2 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[2].i = temp3;
	LINE_NUMBER(560);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jfloat temp5 = temp4 - ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jint temp6 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (temp5 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[3].i = temp6;
	LINE_NUMBER(561);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat(1)), (jfloat(1)));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(-1,000000e-03f)));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_objectives;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(563);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[5].o)))->F_editorX) - (jint(2))))), (jfloat((((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[5].o)))->F_editorY) - (jint(1))))), (jfloat(5.0f)), (jfloat(2)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(564);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_mindustry_io_JsonIO(ctx);
	sp[1].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String])(ctx, sp[1].o, (frame[5].o), (((jobject) &class_java_lang_Object)));
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(565);
	goto label_5;
	}
label_13:;
	LINE_NUMBER(567);
	goto label_11;
label_5:;
	{
	LINE_NUMBER(570);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_ctrl_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_ctrl_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_v;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(571);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(572);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_mindustry_game_MapObjectives$MapObjective)), (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesDialog_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(577);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jfloat temp2 = temp0 - ((temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp2 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[4].i = temp3;
	LINE_NUMBER(578);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jfloat temp5 = temp4 - ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	jint temp6 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (temp5 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[5].i = temp6;
	LINE_NUMBER(579);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean])(ctx, sp[0].o, (frame[4].i), (frame[5].i), (jobject(nullptr)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(580);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[2].o)))->F_editorX = (frame[4].i);
	LINE_NUMBER(581);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[2].o)))->F_editorY = (frame[5].i);
	LINE_NUMBER(582);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean])(ctx, sp[0].o, (frame[4].i), (frame[5].i), (frame[2].o), (jint(1)));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_objectives;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(586);
	goto label_16;
label_2:;
	LINE_NUMBER(585);
	INST_ASTORE(2);
label_16:;
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesDialog_show_arc_struct_Seq_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:show", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(591);
	((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(593);
	((func_mindustry_editor_MapObjectivesDialog_rebuildObjectives_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_rebuildObjectives_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesDialog_rebuildObjectives_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:rebuildObjectives", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_editor_MapObjectivesCanvas_clearObjectives) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_clearObjectives])(ctx, sp[0].o);
	LINE_NUMBER(599);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_57);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(601);
	sp[0].o = frame[1].o;
	LINE_NUMBER(602);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	((func_mindustry_editor_MapObjectivesCanvas_clearObjectives) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_clearObjectives])(ctx, sp[0].o);
	LINE_NUMBER(609);
	frame[2].i = (7);
	LINE_NUMBER(610);
	frame[3].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) * (frame[2].i));
	LINE_NUMBER(611);
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(612);
	frame[5].i = (jint(1));
	LINE_NUMBER(614);
	if ((frame[3].i) <= (100)) goto label_12;
	}
	{
	LINE_NUMBER(615);
	frame[5].i = ((frame[3].i) / (100));
	LINE_NUMBER(616);
	frame[4].i = ((100) / (frame[2].i));
	}
label_12:;
	{
	LINE_NUMBER(619);
	frame[6].i = (jint(0));
	LINE_NUMBER(621);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(622);
	frame[8].i = (jint(0));
	}
label_19:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_20;
	}
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	jint temp0 = (frame[8].i) * (frame[2].i);
	jint temp1 = frame[7].i;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	jint temp2 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean])(ctx, sp[0].o, temp0, temp1, (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[1].o)));
	if (temp2 == 0) goto label_22;
	}
	LINE_NUMBER(624);
	INST_IINC(6, 1);
label_22:;
	{
	LINE_NUMBER(626);
	if ((frame[6].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_24;
	}
	goto label_17;
label_24:;
	{
	LINE_NUMBER(622);
	INST_IINC(8, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(621);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(629);
	goto label_25;
label_4:;
	{
	LINE_NUMBER(630);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_objectives;
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_showContentSelect_mindustry_ctype_ContentType_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:showContentSelect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(637);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(638);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[3].o)))->F_cont;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_noBarPane;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_59);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(658);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack])(ctx, (frame[3].o));
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[3].o));
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_arc_func_Cons(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:showTeamSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(663);
	SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_boolean_arc_func_Cons(ctx, (jint(0)), (frame[0].o));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_boolean_arc_func_Cons(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:showTeamSelect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(667);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(669);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(671);
	if ((frame[0].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_25);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@none"_j));
	LINE_NUMBER(675);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(678);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(679);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_color;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_60);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[6].o;
	LINE_NUMBER(681);
	sp[1].o = (jobject)((func_mindustry_game_Team_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_26);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(678);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(687);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack])(ctx, (frame[2].o));
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(689);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:unbox", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	frame[2].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case -726803703: goto label_1;
		case -672261858: goto label_2;
		case 2086184: goto label_3;
		case 2374300: goto label_4;
		case 67973692: goto label_5;
		case 79860828: goto label_6;
		case 1729365000: goto label_7;
		case 2052876273: goto label_8;
		default: goto label_9;
	}
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Boolean"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (jint(0));
	goto label_9;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Byte"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (jint(1));
	goto label_9;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Character"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (jint(2));
	goto label_9;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Short"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (jint(3));
	goto label_9;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Integer"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (jint(4));
	goto label_9;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Long"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (jint(5));
	goto label_9;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Float"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[2].i = (6);
	goto label_9;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Double"_j))));
	if (temp0 == 0) goto label_9;
	}
	INST_BIPUSH(7);
	INST_ISTORE(2);
label_9:;
	INST_ILOAD(2);
	switch((--sp)->i) {
		case 0: goto label_10;
		case 1: goto label_11;
		case 2: goto label_12;
		case 3: goto label_13;
		case 4: goto label_14;
		case 5: goto label_15;
		case 6: goto label_16;
		case 7: goto label_17;
		default: goto label_18;
	}
label_10:;
	{
	LINE_NUMBER(693);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TYPE;
	sp += 1;
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(694);
	clinit_java_lang_Byte(ctx);
	sp[0].o = (jobject)SF_java_lang_Byte_TYPE;
	sp += 1;
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(695);
	clinit_java_lang_Character(ctx);
	sp[0].o = (jobject)SF_java_lang_Character_TYPE;
	sp += 1;
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(696);
	clinit_java_lang_Short(ctx);
	sp[0].o = (jobject)SF_java_lang_Short_TYPE;
	sp += 1;
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(697);
	clinit_java_lang_Integer(ctx);
	sp[0].o = (jobject)SF_java_lang_Integer_TYPE;
	sp += 1;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(698);
	clinit_java_lang_Long(ctx);
	sp[0].o = (jobject)SF_java_lang_Long_TYPE;
	sp += 1;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(699);
	clinit_java_lang_Float(ctx);
	sp[0].o = (jobject)SF_java_lang_Float_TYPE;
	sp += 1;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(700);
	clinit_java_lang_Double(ctx);
	sp[0].o = (jobject)SF_java_lang_Double_TYPE;
	sp += 1;
	goto label_19;
	}
label_18:;
	LINE_NUMBER(701);
	INST_ALOAD(0);
label_19:;
	LINE_NUMBER(692);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:setInterpreter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(706);
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, (((jobject) &class_java_lang_Override)), (frame[0].o), (frame[1].o));
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:setInterpreter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(710);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_interpreters;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_17(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_17);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[1].o), (frame[2].o));
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:hasInterpreter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_lang_Override)), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:hasInterpreter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(718);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_interpreters;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_18(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_18);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o);
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:getInterpreter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, (((jobject) &class_java_lang_Override)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:getInterpreter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(726);
	jint temp0 = (jint)SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(727);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_interpreters;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_19(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_19);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o);
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(728);
	jint temp0 = (jint)SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_lang_Override)), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(729);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_interpreters;
	sp[1].o = ((jobject) &class_java_lang_Override);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_20(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_20);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o);
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(730);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(731);
	jint temp0 = (jint)SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean(ctx, (frame[0].o), (((jobject) getArrayClass(&class_java_lang_Object, 1))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(732);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_interpreters;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (((jobject) getArrayClass(&class_java_lang_Object, 1))));
	sp[0].o = checkCast(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, sp[0].o);
	sp += 1;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(733);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_interpreters;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_Override)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (((jobject) getArrayClass(&class_java_lang_Object, 1))));
	sp[0].o = checkCast(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, sp[0].o);
	sp += 1;
	}
label_9:;
	LINE_NUMBER(731);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(736);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Interpreter for type \u0001 not set up yet."_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:setProvider", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(741);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_providers;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_hasProvider_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:hasProvider", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(745);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_providers;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_getProvider_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldProvider(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:getProvider", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(749);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapObjectivesDialog_providers;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_21(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldProvider, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$getProvider$0_java_lang_Class_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$getProvider$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(749);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Provider for type \u0001 not set up yet."_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$showTeamSelect$2_arc_func_Cons_mindustry_game_Team_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$showTeamSelect$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(682);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(683);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(684);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$showTeamSelect$1_arc_scene_ui_Image(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$showTeamSelect$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(680);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$showTeamSelect$0_arc_func_Cons_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$showTeamSelect$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(673);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(674);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$showContentSelect$0_mindustry_ctype_ContentType_arc_func_Boolf_arc_func_Cons_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$showContentSelect$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(639);
	frame[5].i = (jint(0));
	LINE_NUMBER(640);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(643);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	LINE_NUMBER(641);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	LINE_NUMBER(642);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	LINE_NUMBER(643);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(646);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_isHidden_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[7].o));
	if (temp0 != 0) goto label_12;
	}
	goto label_9;
label_12:;
	{
	LINE_NUMBER(647);
	sp[0].o = frame[4].o;
	sp[1].o = frame[7].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(7);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_uiIcon;
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_61);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[7].o)))->F_localizedName;
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_27);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(654);
	INST_IINC(5, 1);
	if (((frame[5].i) % (10)) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_18:;
	LINE_NUMBER(655);
	goto label_9;
label_10:;
	LINE_NUMBER(656);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$showContentSelect$2_arc_func_Cons_mindustry_ctype_UnlockableContent_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$showContentSelect$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(650);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(651);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$showContentSelect$1_arc_scene_ui_Image(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$showContentSelect$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(648);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesDialog_lambda$rebuildObjectives$1_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$rebuildObjectives$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_tilemap;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_editorX), ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_editorY), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_lambda$rebuildObjectives$0_mindustry_game_MapObjectives$MapObjective_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$rebuildObjectives$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(604);
	if (((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_editorX) == (-999)) goto label_1;
	}
	{
	if (((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_editorY) != (-999)) goto label_2;
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

void M_mindustry_editor_MapObjectivesDialog_lambda$new$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$new$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesDialog_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_hasKeyboard_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(551);
	((func_mindustry_editor_MapObjectivesDialog_doInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesDialog_doInput])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(553);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$new$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesDialog *) NULL_CHECK((frame[0].o)))->F_canvas;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[1].o))->F_objectives;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(546);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_62);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_editor_MapObjectivesDialog *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$new$2_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$new$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$name$0_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$name$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(473);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_1:;
	{
	LINE_NUMBER(474);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(476);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_2:;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$name$2_arc_func_Boolc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$name$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(476);
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, (frame[0].o)))(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$name$1_arc_func_Boolc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$name$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(475);
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, (frame[0].o)))(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$0_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_63);
		proxy->F_field4 = (jref) (frame[2].o);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$1_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o), (jfloat(0)), (jfloat(10.0f)), (jfloat(0)), (jfloat(10.0f)));
	LINE_NUMBER(420);
	sp[0].o = frame[5].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_64);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)), (jfloat(-10.0f)), (jfloat(-0,000000e+00f)), (jfloat(-10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_65);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(-10.0f);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(466);
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, (frame[6].o));
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$5_arc_func_Prov_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$5", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(20.0f)));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(443);
	frame[4].i = (jint(0));
	LINE_NUMBER(444);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[1].o)))->F_raw;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(445);
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	if (temp0 <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_9:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_field;
	frame[7].o = sp[0].o;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(449);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[7].o));
	frame[9].i = temp0;
	LINE_NUMBER(451);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[9].i));
	if (temp1 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, (frame[9].i));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = ((jobject) &class_java_lang_String);
	sp[1].o = frame[8].o;
	LINE_NUMBER(452);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = frame[8].o;
	LINE_NUMBER(453);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	LINE_NUMBER(454);
	goto label_6;
label_13:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, (frame[7].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[10].o = (checkCast(ctx, &class_java_lang_annotation_Annotation, sp[0].o));
	LINE_NUMBER(457);
	if ((frame[10].o) != nullptr) goto label_18;
	}
	(sp++)->o = ((jobject) &class_java_lang_Override);
	goto label_19;
label_18:;
	INST_ALOAD(10);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, sp[0].o))(ctx, sp[0].o);
	sp++;
label_19:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, (frame[8].o));
	sp[1].o = frame[2].o;
	sp[2].o = frame[7].o;
	LINE_NUMBER(458);
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, sp[2].o);
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field(ctx, sp[3].o, (frame[7].o));
	sp[4].o = frame[7].o;
	sp[5].o = jobject(nullptr);
	sp[6].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_22(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_22 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_22);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[7].o = (jobject) proxy;
	}
	LINE_NUMBER(461);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, (frame[9].i));
	sp += 8;
	if (temp0 == 0) goto label_22;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_66);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_23;
label_22:;
	{
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_67);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	}
label_23:;
	{
	sp -= 9;
	LINE_NUMBER(457);
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(463);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(464);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$9_java_lang_Object_java_lang_reflect_Field_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$9", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(461);
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$8_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$7_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$6_java_lang_Class_java_lang_annotation_Annotation_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[1].o)))(ctx, (frame[1].o));
	jint temp0 = (jint)SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$2_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(10.0f)));
	LINE_NUMBER(424);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[0].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(427);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(428);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(429);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(430);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (jfloat(4.0f)));
	}
label_9:;
	{
	LINE_NUMBER(431);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(432);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$4_arc_func_Boolc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(432);
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, (frame[0].o)))(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$3_arc_func_Boolc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$defaultInterpreter$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(431);
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, (frame[0].o)))(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$107_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$107", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, (((jobject) &class_arc_struct_Seq)));
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	sp[4].o = ((jobject) &class_arc_struct_Seq);
	sp[5].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[2].o)))->F_element;
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = frame[3].o;
	sp[5].o = frame[4].o;
	sp[6].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_23(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_23 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_23);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_68);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[8].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$109_arc_func_Cons_arc_struct_Seq_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$109", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[2].o)))->F_element;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[2].o))->F_raw;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$108_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$108", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$106_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$106", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(405);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_element;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[1].o))->F_raw;
	sp[1].o = (jobject)SM_arc_util_Reflect_newArray_java_lang_Class_int_R_Array1_java_lang_Object(ctx, sp[1].o, (jint(0)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$93_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$93", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_69);
		proxy->F_field6 = (jref) (frame[7].o);
		proxy->F_field5 = (jref) (frame[2].o);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$94_arc_func_Prov_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_java_lang_reflect_Field_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[20];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$94", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[8].o = sp[0].o;
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[9].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o), (jfloat(0)), (jfloat(10.0f)), (jfloat(0)), (jfloat(10.0f)));
	LINE_NUMBER(340);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_70(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_70 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_70);
		proxy->F_field6 = (jref) (frame[8].o);
		proxy->F_field5 = (jref) (frame[9].o);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(46.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_float_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)), (jfloat(-10.0f)), (jfloat(0)), (jfloat(-10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_71(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_71 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_71);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(-10.0f);
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(399);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(0)))));
	LINE_NUMBER(401);
	((func_arc_scene_ui_layout_Table_toFront) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_toFront])(ctx, (frame[10].o));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$100_Array1_java_lang_Runnable_arc_struct_Seq_java_lang_reflect_Field_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$100", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_32);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[0].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$101_arc_scene_ui_layout_Table_arc_struct_Seq_java_lang_reflect_Field_Array1_java_lang_Runnable_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[19];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$101", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(362);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[0].o));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_clear;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(0)));
	((func_arc_scene_ui_layout_Table_setSize_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setSize_float])(ctx, sp[0].o, (jfloat(0)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(20.0f)));
	}
label_5:;
	{
	LINE_NUMBER(371);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(372);
	frame[7].i = (frame[5].i);
	LINE_NUMBER(373);
	if ((frame[7].i) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	}
label_11:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[7].i));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	sp[4].o = frame[1].o;
	jint temp0 = frame[7].i;
	LINE_NUMBER(376);
	sp[4].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[4].o, temp0);
	sp[4].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[4].o);
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[2].o;
	LINE_NUMBER(377);
	sp += 5;
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[2].o), (((jobject) &class_mindustry_game_MapObjectives$Immutable)));
	if (temp0 != 0) goto label_15;
	}
label_14:;
	{
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_33);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_16;
	}
label_15:;
	LINE_NUMBER(380);
	INST_ACONST_NULL();
label_16:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_17;
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[2].o), (((jobject) &class_mindustry_game_MapObjectives$Unordered)));
	if (temp0 != 0) goto label_18;
	}
label_17:;
	{
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_4(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_4 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_4);
		proxy->F_field3 = (frame[6].i);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[7].i);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_19;
	}
label_18:;
	LINE_NUMBER(388);
	INST_ACONST_NULL();
label_19:;
	{
	sp -= 7;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_24(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_24 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_24);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_72(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_72 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_72);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[8].o = (jobject) proxy;
	}
	LINE_NUMBER(375);
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(371);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(397);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$105_arc_struct_Seq_int_arc_func_Cons_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$105", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(391);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, (frame[0].o), (frame[1].i), (frame[3].o));
	LINE_NUMBER(392);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$104_arc_struct_Seq_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$104", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$103_int_arc_struct_Seq_Array1_java_lang_Runnable_int_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jbool param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$103", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(381);
	if ((frame[4].i) == 0) goto label_1;
	}
	INST_ILOAD(0);
	if ((--sp)->i <= 0) goto label_1;
	{
	LINE_NUMBER(382);
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, (frame[1].o), (frame[0].i), ((frame[0].i) - (jint(1))));
	LINE_NUMBER(383);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(384);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	if ((frame[0].i) >= ((frame[3].i) - (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(385);
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, (frame[1].o), (frame[0].i), ((frame[0].i) + (jint(1))));
	LINE_NUMBER(386);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	}
label_4:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$102_arc_struct_Seq_int_Array1_java_lang_Runnable(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$102", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(379);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$95_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_java_lang_reflect_Field_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_struct_Seq_Array1_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$95", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o), (jfloat(10.0f)));
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_3;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(347);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_trash;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_5:;
	{
	LINE_NUMBER(348);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_34);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(350);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	}
label_6:;
	{
	LINE_NUMBER(353);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_MapObjectives$Immutable)));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_add;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_emptyi;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_36);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$98_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_struct_Seq_Array1_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$98", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_raw;
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getProvider_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_element;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_73(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_73 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_73);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog$FieldProvider_get_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldProvider, INDEX_mindustry_editor_MapObjectivesDialog$FieldProvider_get_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$99_arc_struct_Seq_Array1_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$99", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(356);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$97_arc_func_Boolc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$97", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(350);
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, (frame[0].o)))(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$96_arc_func_Boolc(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$96", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(349);
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, (frame[0].o)))(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$92_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$92", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[1].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_element;
	sp[2].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[2].o))->F_raw;
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, sp[2].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$89_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$89", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, (((jobject) &class_java_lang_Boolean)));
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	sp[5].o = frame[4].o;
	sp[6].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_25(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_25 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_25);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_74(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_74 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_74);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[8].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$91_arc_func_Cons_java_lang_Boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$91", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(-1);
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[1].i);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$90_arc_func_Prov_R_java_lang_Boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$90", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	if (temp0 == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$85_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$85", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(310);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_75(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_75 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_75);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$86_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$86", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_Byte_byteValue_R_byte) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[0].o)))->vtable)[VTABLE_java_lang_Byte_byteValue_R_byte])(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[0].o)));
	frame[3].i = temp0;
	LINE_NUMBER(315);
	frame[4].i = (jint(1));
	frame[5].i = (jint(2));
	LINE_NUMBER(317);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@marker.background"_j));
	sp += 2;
	if (((frame[3].i) & (frame[4].i)) != (frame[4].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_5(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_5 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_5);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o);
	LINE_NUMBER(318);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_CheckBox_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_CheckBox_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(322);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@marker.outline"_j));
	sp += 2;
	if (((frame[3].i) & (frame[5].i)) != (frame[5].i)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_6(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_6 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_6);
		proxy->F_field2 = (frame[5].i);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_CheckBox_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_CheckBox_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$88_arc_func_Cons_byte_byte_boolean(jcontext ctx, jobject param0, jbyte param1, jbyte param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$88", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	jint temp0 = (frame[1].i) | (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (frame[1].i) & ((frame[2].i) ^ (jint(-1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (jbyte(sp[1].i)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$87_arc_func_Cons_byte_byte_boolean(jcontext ctx, jobject param0, jbyte param1, jbyte param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$87", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	jint temp0 = (frame[1].i) | (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (frame[1].i) & ((frame[2].i) ^ (jint(-1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (jbyte(sp[1].i)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$83_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$83", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(300);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_MapObjectives$TextureHolder, sp[1].o))))->F_value;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_76(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_76 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_76);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$84_arc_func_Prov_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$84", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_MapObjectives$TextureHolder, sp[0].o))))->F_value = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$78_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$78", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_MapObjectives$Alignment)));
	frame[8].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$Alignment, sp[0].o));
	LINE_NUMBER(292);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_77(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_77 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_77);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_37);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$82(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$82", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	LINE_NUMBER(296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$79_arc_func_Prov_arc_func_Cons_mindustry_game_MapObjectives$Alignment_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$79", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_26(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_26 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(295);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_38);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$81_arc_scene_ui_Button_arc_func_Prov_arc_func_Cons_mindustry_game_MapObjectives$Alignment(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$81", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_mindustry_game_MapObjectives$Alignment_hor_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_MapObjectives$Alignment, INDEX_mindustry_game_MapObjectives$Alignment_hor_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	jint temp2 = (jint)((func_mindustry_game_MapObjectives$Alignment_ver_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_game_MapObjectives$Alignment, INDEX_mindustry_game_MapObjectives$Alignment_ver_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	SM_mindustry_logic_LStatement_showAlignSelect_arc_scene_ui_Button_int_arc_func_Intc_boolean_boolean(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$80_arc_func_Prov_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$80", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(294);
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_alignToName;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, (((jobject) createStringLiteral(ctx, u8"center"_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_CharSequence, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$70_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$70", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_78(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_78 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_78);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$71_arc_func_Prov_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$71", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[6].o = (checkCast(ctx, getArrayClass(&class_float, 1), sp[0].o));
	LINE_NUMBER(261);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(262);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_79(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_79 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_79);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$72_Array1_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$72", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(265);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"color"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"u"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"v"_j)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(266);
	frame[3].i = (6);
	LINE_NUMBER(267);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (frame[3].i));
	LINE_NUMBER(269);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(270);
	frame[6].i = ((frame[5].i) * (frame[3].i));
	LINE_NUMBER(272);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_80(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_80 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_80);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(285);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(269);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$73_Array1_java_lang_String_int_Array1_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$73", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(273);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(274);
	frame[5].i = ((frame[1].i) + (frame[4].i));
	LINE_NUMBER(276);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"color"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"color"_j))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, (((jobject) &class_arc_graphics_Color)));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i));
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[3].o, (((jobject) &class_arc_graphics_Color)));
	sp[4].o = jobject(nullptr);
	sp[5].o = jobject(nullptr);
	sp[6].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_27(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_27 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_27);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_81(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_81 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_81);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[8].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(279);
	if ((frame[4].i) > (jint(1))) goto label_8;
	}
	(sp++)->f = jfloat(8.0f);
	goto label_9;
label_8:;
	INST_FCONST(1);
label_9:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(280);
	clinit_java_lang_Float(ctx);
	sp[0].o = (jobject)SF_java_lang_Float_TYPE;
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o);
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i));
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	clinit_java_lang_Float(ctx);
	sp[4].o = (jobject)SF_java_lang_Float_TYPE;
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[3].o, sp[4].o);
	sp[4].o = jobject(nullptr);
	sp[5].o = jobject(nullptr);
	sp[6].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_28(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_28 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_28);
		proxy->F_field2 = (frame[6].f);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_82(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_82 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_82);
		proxy->F_field2 = (frame[6].f);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[8].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	}
label_7:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(273);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$77_Array1_float_int_float_java_lang_Float(jcontext ctx, jobject param0, jint param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$77", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jfloat temp1 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[3].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp1 * (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$76_Array1_float_int_float_R_java_lang_Float(jcontext ctx, jobject param0, jint param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$76", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i))) / (frame[2].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$75_Array1_float_int_arc_graphics_Color(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$75", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[2].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$74_Array1_float_int_R_arc_graphics_Color(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$74", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(277);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$69_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$69", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(236);
	clinit_mindustry_editor_MapObjectivesDialog$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$3);
	init_mindustry_editor_MapObjectivesDialog$3_java_lang_String_arc_func_Cons(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@add"_j))), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$68_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$68", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(214);
	clinit_mindustry_editor_MapObjectivesDialog$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$2);
	init_mindustry_editor_MapObjectivesDialog$2_java_lang_String_arc_func_Cons(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@add"_j))), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$65_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$65", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(201);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x))), (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, (((jobject) &class_arc_math_geom_Vec2)));
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	clinit_java_lang_Integer(ctx);
	sp[4].o = (jobject)SF_java_lang_Integer_TYPE;
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[3].o;
	sp[5].o = frame[4].o;
	sp[6].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_29(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_29 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_29);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[7].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_83(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_83 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_83);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[8].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$67_arc_math_geom_Vec2_arc_func_Cons_arc_math_geom_Point2_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$67", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(208);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[2].o), (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))), (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$66_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$66", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$64_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$64", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$56_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$56", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o));
	LINE_NUMBER(169);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_84(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_84 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_84);
		proxy->F_field3 = (jref) (frame[7].o);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$57_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_arc_math_geom_Vec2_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$57", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_raw;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(173);
	clinit_java_lang_Float(ctx);
	sp[0].o = (jobject)SF_java_lang_Float_TYPE;
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(174);
	if ((frame[5].i) == 0) goto label_5;
	}
	{
	clinit_java_lang_Integer(ctx);
	sp[0].o = (jobject)SF_java_lang_Integer_TYPE;
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[6].o;
	sp[1].o = frame[4].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	LINE_NUMBER(177);
	sp[4].o = sp[3].o;
	sp += 5;
	if ((frame[5].i) == 0) goto label_8;
	}
	clinit_java_lang_Integer(ctx);
	(sp++)->o = SF_java_lang_Integer_TYPE;
	goto label_9;
label_8:;
	clinit_java_lang_Float(ctx);
	(sp++)->o = SF_java_lang_Float_TYPE;
label_9:;
	{
	sp -= 2;
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[0].o, sp[1].o);
	sp[0].o = frame[1].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = jobject(nullptr);
	LINE_NUMBER(179);
	sp += 3;
	if ((frame[5].i) == 0) goto label_11;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_30(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_30 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_30);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_31(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_31 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_31);
		proxy->F_field0 = (jref) (--sp)->o;
		PUSH_OBJECT((jobject) proxy);
	}
label_12:;
	{
	sp -= 8;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_85(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_85 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_85);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[8].o = (jobject) proxy;
	}
	LINE_NUMBER(176);
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(186);
	sp[0].o = frame[6].o;
	sp[1].o = frame[4].o;
	LINE_NUMBER(187);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[1].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	sp[4].o = sp[3].o;
	sp += 5;
	if ((frame[5].i) == 0) goto label_17;
	}
	clinit_java_lang_Integer(ctx);
	(sp++)->o = SF_java_lang_Integer_TYPE;
	goto label_18;
label_17:;
	clinit_java_lang_Float(ctx);
	(sp++)->o = SF_java_lang_Float_TYPE;
label_18:;
	{
	sp -= 2;
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(ctx, sp[0].o, sp[1].o);
	sp[0].o = frame[1].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = jobject(nullptr);
	LINE_NUMBER(189);
	sp += 3;
	if ((frame[5].i) == 0) goto label_20;
	}
	{
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_32(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_32 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_32);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_33(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_33 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Prov_33);
		proxy->F_field0 = (jref) (--sp)->o;
		PUSH_OBJECT((jobject) proxy);
	}
label_21:;
	{
	sp -= 8;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_86(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_86 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_86);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[8].o = (jobject) proxy;
	}
	LINE_NUMBER(186);
	((func_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$63_arc_math_geom_Vec2_boolean_arc_func_Cons_java_lang_Object(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$63", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[3].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[3].o))));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[3].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[3].o))));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = sp[1].f;
	LINE_NUMBER(192);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$62_arc_math_geom_Vec2_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$62", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$61_arc_math_geom_Vec2_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$61", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$60_arc_math_geom_Vec2_boolean_arc_func_Cons_java_lang_Object(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$60", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[3].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[3].o))));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[3].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[3].o))));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = sp[1].f;
	LINE_NUMBER(182);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$59_arc_math_geom_Vec2_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$59", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog_lambda$static$58_arc_math_geom_Vec2_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$58", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$55_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$55", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$50_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$50", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	LINE_NUMBER(155);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_87(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_87 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_87);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$51_arc_graphics_Color_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$51", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_88(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_88 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_88);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squarei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_39);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$53_arc_graphics_Color_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$53", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_picker;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_89(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_89 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_89);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$54_arc_func_Cons_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$54", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, (frame[1].o), (frame[2].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$52_arc_graphics_Color_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$52", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_alphaBg;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_MapObjectivesDialog$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$1);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	init_mindustry_editor_MapObjectivesDialog$1_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[2].o, sp[3].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$49_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$49", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$44_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$44", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(143);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_90(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_90 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_90);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$45_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$45", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_91(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_91 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_91);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squarei;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_40);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$48_arc_func_Cons(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$48", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(147);
	SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_arc_func_Cons(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$46_arc_func_Prov_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$46", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_92(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_92 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_92);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$47_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$47", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_Team, sp[1].o))))->F_color;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$43_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$43", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$37_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$37", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(134);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_93(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_93 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_93);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$38_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$38", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_94(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_94 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_94);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_41);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$41_arc_func_Cons(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$41", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_8);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_showContentSelect_mindustry_ctype_ContentType_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_lambda$static$42_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$42", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$39_arc_func_Prov_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$39", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_95(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_95 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_95);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$40_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$40", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o))))->F_uiIcon;
	((func_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$36_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$36", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$30_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$30", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(125);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_96(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_96 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_96);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$31_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$31", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_97(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_97 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_97);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_42);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$34_arc_func_Cons(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$34", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_item;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_9);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_showContentSelect_mindustry_ctype_ContentType_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_lambda$static$35_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$35", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$32_arc_func_Prov_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$32", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_98(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_98 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_98);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$33_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$33", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Item, sp[1].o))))->F_uiIcon;
	((func_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$29_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$29", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$23_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$23", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(116);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_99(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_99 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_99);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$24_arc_func_Prov_arc_func_Cons_java_lang_reflect_Field_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$24", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_100(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_100 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_100);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_43);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$27_arc_func_Cons_java_lang_reflect_Field(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$27", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(119);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_block;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_showContentSelect_mindustry_ctype_ContentType_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_lambda$static$28_java_lang_reflect_Field_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$28", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(119);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[0].o), (((jobject) &class_mindustry_game_MapObjectives$Synthetic)));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
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

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$25_arc_func_Prov_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$25", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_101(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_101 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_101);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$26_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$26", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, sp[1].o))))->F_uiIcon;
	((func_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$22_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$22", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_copperWall;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$16_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$16", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(107);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_102(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_102 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_102);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$17_arc_func_Prov_arc_func_Cons_java_lang_reflect_Field_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$17", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_103(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_103 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_103);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_44(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_44 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_44);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$20_arc_func_Cons_java_lang_reflect_Field(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$20", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = jobject(nullptr);
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_showContentSelect_mindustry_ctype_ContentType_arc_func_Cons_arc_func_Boolf(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesDialog_lambda$static$21_java_lang_reflect_Field_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(110);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[0].o), (((jobject) &class_mindustry_game_MapObjectives$Researchable)));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_techNode;
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

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$18_arc_func_Prov_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$18", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_image_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_104(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_104 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_104);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$19_arc_func_Prov_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[1].o))))->F_uiIcon;
	((func_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$15_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreShard;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$13_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$13", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(87);
	frame[8].f = (jfloat(1));
	LINE_NUMBER(88);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_MapObjectives$Second)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(90);
	frame[8].f = (jfloat(60.0f));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_MapObjectives$TilePos)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(92);
	frame[8].f = (jfloat(8.0f));
	}
label_2:;
	{
	LINE_NUMBER(96);
	frame[9].f = (frame[8].f);
	LINE_NUMBER(98);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[1].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[1].o)));
	sp[1].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (temp0 / (frame[9].f)));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_105(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_105 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_105);
		proxy->F_field1 = (frame[9].f);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_3(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_3 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_3);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o);
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly;
	((func_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$14_arc_func_Cons_float_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$14", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (temp0 * (frame[1].f)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$12_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$10_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$10", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(78);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_106(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_106 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_106);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_4(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_4 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_4);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o);
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	((func_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$11_arc_func_Cons_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$9_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$7_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$7", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(69);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Byte_byteValue_R_byte) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[1].o)))->vtable)[VTABLE_java_lang_Byte_byteValue_R_byte])(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[1].o)));
	sp[1].o = (jobject)SM_java_lang_Byte_toString_byte_R_java_lang_String(ctx, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_107(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_107 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_107);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_5(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_5 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_5);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o);
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	((func_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$8_arc_func_Cons_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (jbyte(temp0)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$6_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (jint(0)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$5_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$5", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(63);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[2].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)));
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_7(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_7 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Boolc_7);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_CheckBox_getLabelCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_CheckBox_getLabelCell_R_arc_scene_ui_layout_Cell])(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$4_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$1_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(48);
	SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(50);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_MapObjectives$Multiline)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(100.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(52);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[3].o), (((jobject) &class_mindustry_game_MapObjectives$LogicCode)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_108(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_108 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_108);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_45(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_45 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_java_lang_Runnable_45);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$3_arc_func_Prov_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_logic;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = jobject(nullptr);
	jint temp0 = jint(1);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_109(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_109 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_109);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LogicDialog_show_java_lang_String_mindustry_logic_LExecutor_boolean_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$2_arc_scene_ui_Button(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(24.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$static$0_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$static$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(46);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapObjectivesDialog_lambda$new$0_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	frame[0].o = param0;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_editor_MapObjectivesDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	{
	LINE_NUMBER(40);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	SF_mindustry_editor_MapObjectivesDialog_providers = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_editor_MapObjectivesDialog(ctx);
	SF_mindustry_editor_MapObjectivesDialog_interpreters = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_17(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_17 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_17);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_22(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_22 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_22);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_18(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_18 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_18);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_23(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_23 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_23);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	clinit_java_lang_Byte(ctx);
	sp[0].o = (jobject)SF_java_lang_Byte_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_19(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_19 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_19);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	clinit_java_lang_Byte(ctx);
	sp[0].o = (jobject)SF_java_lang_Byte_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_24(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_24 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_24);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	clinit_java_lang_Integer(ctx);
	sp[0].o = (jobject)SF_java_lang_Integer_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_20(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_20 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_20);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	clinit_java_lang_Integer(ctx);
	sp[0].o = (jobject)SF_java_lang_Integer_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_25(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_25 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_25);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	clinit_java_lang_Float(ctx);
	sp[0].o = (jobject)SF_java_lang_Float_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_21(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_21 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_21);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	clinit_java_lang_Float(ctx);
	sp[0].o = (jobject)SF_java_lang_Float_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_26(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_26 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_26);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	sp[0].o = ((jobject) &class_mindustry_ctype_UnlockableContent);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_22(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_22 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_22);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	sp[0].o = ((jobject) &class_mindustry_ctype_UnlockableContent);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_27(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_27 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_27);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = ((jobject) &class_mindustry_world_Block);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_23(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_23 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_23);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	sp[0].o = ((jobject) &class_mindustry_world_Block);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_28(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_28 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_28);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	sp[0].o = ((jobject) &class_mindustry_type_Item);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_24(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_24 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_24);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	sp[0].o = ((jobject) &class_mindustry_type_Item);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_29(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_29 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_29);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	sp[0].o = ((jobject) &class_mindustry_type_UnitType);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_25(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_25 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_25);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = ((jobject) &class_mindustry_type_UnitType);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_30(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_30 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_30);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(141);
	sp[0].o = ((jobject) &class_mindustry_game_Team);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_26(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_26 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_26);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = ((jobject) &class_mindustry_game_Team);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_31(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_31 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_31);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	sp[0].o = ((jobject) &class_arc_graphics_Color);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_27(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_27 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_27);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	sp[0].o = ((jobject) &class_arc_graphics_Color);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_32(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_32 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_32);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	sp[0].o = ((jobject) &class_arc_math_geom_Vec2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_28(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_28 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_28);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(166);
	sp[0].o = ((jobject) &class_arc_math_geom_Vec2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_33(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_33 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_33);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	sp[0].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_29(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_29 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_29);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	sp[0].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_34(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_34 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_34);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(214);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$MapObjective);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_30(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_30 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_30);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$ObjectiveMarker);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_31(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_31 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_31);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(258);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$Vertices);
	sp[1].o = ((jobject) getArrayClass(&class_float, 1));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_35(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_35 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_35);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(290);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$Alignment);
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_36(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_36 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_36);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(299);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$TextureHolder);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_37(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_37 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_37);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_allObjectiveTypes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_34:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_func_Prov, sp[0].o));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o)));
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_defaultInterpreter_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx);
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(306);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_allMarkerTypes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_func_Prov, sp[0].o));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o)));
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_defaultInterpreter_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx);
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(309);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$LabelFlag);
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_38(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_38 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_38);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(328);
	sp[0].o = ((jobject) &class_mindustry_game_MapObjectives$IndexBool);
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_39(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_39 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_39);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(334);
	sp[0].o = ((jobject) &class_arc_struct_Seq);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_32(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_32 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_32);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	sp[0].o = ((jobject) &class_arc_struct_Seq);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_40(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_40 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_40);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(405);
	sp[0].o = ((jobject) getArrayClass(&class_java_lang_Object, 1));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_33(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_33 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldProvider_33);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(406);
	sp[0].o = ((jobject) getArrayClass(&class_java_lang_Object, 1));
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_41(ctx);
		auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_41 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog_invoke_mindustry_editor_MapObjectivesDialog$FieldInterpreter_41);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesDialog[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_Dialog_draw,
	(void *) M_arc_scene_ui_Dialog_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_ui_Dialog_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_keepWithinStage,
	(void *) M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_centerWindow,
	(void *) M_arc_scene_ui_Dialog_isMovable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setMovable_boolean,
	(void *) M_arc_scene_ui_Dialog_isModal_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setModal_boolean,
	(void *) M_arc_scene_ui_Dialog_setKeepWithinStage_boolean,
	(void *) M_arc_scene_ui_Dialog_isCentered_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setCentered_boolean,
	(void *) M_arc_scene_ui_Dialog_isResizable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizable_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizeBorder_int,
	(void *) M_arc_scene_ui_Dialog_isDragging_R_boolean,
	(void *) M_arc_scene_ui_Dialog_updateScrollFocus,
	(void *) M_arc_scene_ui_Dialog_shown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_hidden_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton,
	(void *) M_arc_scene_ui_Dialog_closeOnBack,
	(void *) M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_isShown_R_boolean,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_toggle,
	(void *) M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_hide_arc_scene_Action,
	(void *) M_arc_scene_ui_Dialog_hide,
	(void *) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean,
	(void *) M_mindustry_ui_dialogs_BaseDialog_setTitleColor_arc_graphics_Color,
	(void *) M_mindustry_ui_dialogs_BaseDialog_makeButtonOverlay,
	(void *) M_mindustry_ui_dialogs_BaseDialog_onResize_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseListener,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton_float,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$onResize$0_java_lang_Runnable_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_editor_MapObjectivesDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_editor_MapObjectivesDialog_doInput,
	(void *) M_mindustry_editor_MapObjectivesDialog_show_arc_struct_Seq_arc_func_Cons,
	(void *) M_mindustry_editor_MapObjectivesDialog_rebuildObjectives_arc_struct_Seq,
	(void *) M_mindustry_editor_MapObjectivesDialog_lambda$rebuildObjectives$1_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_editor_MapObjectivesDialog_lambda$new$3,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "getStyle", "()Larc/scene/ui/Dialog$DialogStyle;" },
	{ "setStyle", "(Larc/scene/ui/Dialog$DialogStyle;)V" },
	{ "keepWithinStage", "()V" },
	{ "drawStageBackground", "(FFFF)V" },
	{ "centerWindow", "()V" },
	{ "isMovable", "()Z" },
	{ "setMovable", "(Z)V" },
	{ "isModal", "()Z" },
	{ "setModal", "(Z)V" },
	{ "setKeepWithinStage", "(Z)V" },
	{ "isCentered", "()Z" },
	{ "setCentered", "(Z)V" },
	{ "isResizable", "()Z" },
	{ "setResizable", "(Z)V" },
	{ "setResizeBorder", "(I)V" },
	{ "isDragging", "()Z" },
	{ "updateScrollFocus", "()V" },
	{ "shown", "(Ljava/lang/Runnable;)V" },
	{ "hidden", "(Ljava/lang/Runnable;)V" },
	{ "resizedShown", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(ZLjava/lang/Runnable;)V" },
	{ "addCloseButton", "()V" },
	{ "closeOnBack", "()V" },
	{ "closeOnBack", "(Ljava/lang/Runnable;)V" },
	{ "isShown", "()Z" },
	{ "show", "(Larc/scene/Scene;Larc/scene/Action;)Larc/scene/ui/Dialog;" },
	{ "toggle", "()V" },
	{ "show", "()Larc/scene/ui/Dialog;" },
	{ "show", "(Larc/scene/Scene;)Larc/scene/ui/Dialog;" },
	{ "hide", "(Larc/scene/Action;)V" },
	{ "hide", "()V" },
	{ "lambda$closeOnBack$1", "(Ljava/lang/Runnable;Larc/input/KeyCode;)V" },
	{ "lambda$updateScrollFocus$0", "([Z)V" },
	{ "setTitleColor", "(Larc/graphics/Color;)V" },
	{ "makeButtonOverlay", "()V" },
	{ "onResize", "(Ljava/lang/Runnable;)V" },
	{ "addCloseListener", "()V" },
	{ "addCloseButton", "(F)V" },
	{ "lambda$onResize$0", "(Ljava/lang/Runnable;Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()V" },
	{ "doInput", "()V" },
	{ "show", "(Larc/struct/Seq;Larc/func/Cons;)V" },
	{ "rebuildObjectives", "(Larc/struct/Seq;)V" },
	{ "lambda$rebuildObjectives$1", "(Lmindustry/game/MapObjectives$MapObjective;)V" },
	{ "lambda$new$3", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_MapObjectivesDialog$FieldInterpreter,
	&class_mindustry_editor_MapObjectivesDialog$FieldProvider,
	&class_mindustry_editor_MapObjectivesDialog$TypeInfo,
};

static FieldMetadata fields[] {
	{ "canvas", &class_mindustry_editor_MapObjectivesCanvas, offsetof(mindustry_editor_MapObjectivesDialog, F_canvas), "Lmindustry/editor/MapObjectivesCanvas;", 1 },
	{ "out", &class_arc_func_Cons, offsetof(mindustry_editor_MapObjectivesDialog, F_out), "Larc/func/Cons;", 4 },
	{ "providers", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_editor_MapObjectivesDialog_providers, "Larc/struct/ObjectMap;", 26 },
	{ "interpreters", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_editor_MapObjectivesDialog_interpreters, "Larc/struct/ObjectMap;", 26 },
};

static MethodMetadata methods[] {
	{ "defaultInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_defaultInterpreter_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter, 0, "()Lmindustry/editor/MapObjectivesDialog$FieldInterpreter;", 9 },
	{ "name", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_name_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Ljava/lang/Runnable;Larc/func/Boolc;)V", 9 },
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesDialog, 0, "()V", 1 },
	{ "doInput", (intptr_t) M_mindustry_editor_MapObjectivesDialog_doInput, VTABLE_mindustry_editor_MapObjectivesDialog_doInput, "()V", 2 },
	{ "show", (intptr_t) M_mindustry_editor_MapObjectivesDialog_show_arc_struct_Seq_arc_func_Cons, VTABLE_mindustry_editor_MapObjectivesDialog_show_arc_struct_Seq_arc_func_Cons, "(Larc/struct/Seq;Larc/func/Cons;)V", 1 },
	{ "rebuildObjectives", (intptr_t) M_mindustry_editor_MapObjectivesDialog_rebuildObjectives_arc_struct_Seq, VTABLE_mindustry_editor_MapObjectivesDialog_rebuildObjectives_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "showContentSelect", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_showContentSelect_mindustry_ctype_ContentType_arc_func_Cons_arc_func_Boolf, 0, "(Lmindustry/ctype/ContentType;Larc/func/Cons;Larc/func/Boolf;)V", 9 },
	{ "showTeamSelect", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_arc_func_Cons, 0, "(Larc/func/Cons;)V", 9 },
	{ "showTeamSelect", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_showTeamSelect_boolean_arc_func_Cons, 0, "(ZLarc/func/Cons;)V", 9 },
	{ "unbox", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class, 0, "(Ljava/lang/Class;)Ljava/lang/Class;", 9 },
	{ "setInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, 0, "(Ljava/lang/Class;Lmindustry/editor/MapObjectivesDialog$FieldInterpreter;)V", 9 },
	{ "setInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_setInterpreter_java_lang_Class_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldInterpreter, 0, "(Ljava/lang/Class;Ljava/lang/Class;Lmindustry/editor/MapObjectivesDialog$FieldInterpreter;)V", 9 },
	{ "hasInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "hasInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_hasInterpreter_java_lang_Class_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;Ljava/lang/Class;)Z", 9 },
	{ "getInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter, 0, "(Ljava/lang/Class;)Lmindustry/editor/MapObjectivesDialog$FieldInterpreter;", 9 },
	{ "getInterpreter", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_getInterpreter_java_lang_Class_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldInterpreter, 0, "(Ljava/lang/Class;Ljava/lang/Class;)Lmindustry/editor/MapObjectivesDialog$FieldInterpreter;", 9 },
	{ "setProvider", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_setProvider_java_lang_Class_mindustry_editor_MapObjectivesDialog$FieldProvider, 0, "(Ljava/lang/Class;Lmindustry/editor/MapObjectivesDialog$FieldProvider;)V", 9 },
	{ "hasProvider", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_hasProvider_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "getProvider", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_getProvider_java_lang_Class_R_mindustry_editor_MapObjectivesDialog$FieldProvider, 0, "(Ljava/lang/Class;)Lmindustry/editor/MapObjectivesDialog$FieldProvider;", 9 },
	{ "lambda$getProvider$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$getProvider$0_java_lang_Class_R_java_lang_RuntimeException, 0, "(Ljava/lang/Class;)Ljava/lang/RuntimeException;", 4106 },
	{ "lambda$showTeamSelect$2", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$showTeamSelect$2_arc_func_Cons_mindustry_game_Team_mindustry_ui_dialogs_BaseDialog, 0, "(Larc/func/Cons;Lmindustry/game/Team;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$showTeamSelect$1", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$showTeamSelect$1_arc_scene_ui_Image, 0, "(Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$showTeamSelect$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$showTeamSelect$0_arc_func_Cons_mindustry_ui_dialogs_BaseDialog, 0, "(Larc/func/Cons;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$showContentSelect$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$showContentSelect$0_mindustry_ctype_ContentType_arc_func_Boolf_arc_func_Cons_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, 0, "(Lmindustry/ctype/ContentType;Larc/func/Boolf;Larc/func/Cons;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$showContentSelect$2", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$showContentSelect$2_arc_func_Cons_mindustry_ctype_UnlockableContent_mindustry_ui_dialogs_BaseDialog, 0, "(Larc/func/Cons;Lmindustry/ctype/UnlockableContent;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$showContentSelect$1", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$showContentSelect$1_arc_scene_ui_Image, 0, "(Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$rebuildObjectives$1", (intptr_t) M_mindustry_editor_MapObjectivesDialog_lambda$rebuildObjectives$1_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_editor_MapObjectivesDialog_lambda$rebuildObjectives$1_mindustry_game_MapObjectives$MapObjective, "(Lmindustry/game/MapObjectives$MapObjective;)V", 4098 },
	{ "lambda$rebuildObjectives$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$rebuildObjectives$0_mindustry_game_MapObjectives$MapObjective_R_boolean, 0, "(Lmindustry/game/MapObjectives$MapObjective;)Z", 4106 },
	{ "lambda$new$3", (intptr_t) M_mindustry_editor_MapObjectivesDialog_lambda$new$3, VTABLE_mindustry_editor_MapObjectivesDialog_lambda$new$3, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_editor_MapObjectivesDialog_lambda$new$1, VTABLE_mindustry_editor_MapObjectivesDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$new$2_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 4106 },
	{ "lambda$name$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$name$0_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table, 0, "(Ljava/lang/Runnable;Larc/func/Boolc;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$name$2", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$name$2_arc_func_Boolc, 0, "(Larc/func/Boolc;)V", 4106 },
	{ "lambda$name$1", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$name$1_arc_func_Boolc, 0, "(Larc/func/Boolc;)V", 4106 },
	{ "lambda$defaultInterpreter$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$0_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$defaultInterpreter$1", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$1_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_scene_ui_layout_Table, 0, "(Ljava/lang/CharSequence;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$defaultInterpreter$5", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$5_arc_func_Prov_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$defaultInterpreter$9", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$9_java_lang_Object_java_lang_reflect_Field_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/Object;)V", 4106 },
	{ "lambda$defaultInterpreter$8", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$8_java_lang_Object, 0, "(Ljava/lang/Object;)V", 4106 },
	{ "lambda$defaultInterpreter$7", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$7_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/reflect/Field;)Ljava/lang/Object;", 4106 },
	{ "lambda$defaultInterpreter$6", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$6_java_lang_Class_java_lang_annotation_Annotation_R_boolean, 0, "(Ljava/lang/Class;Ljava/lang/annotation/Annotation;)Z", 4106 },
	{ "lambda$defaultInterpreter$2", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$2_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table, 0, "(Ljava/lang/CharSequence;Ljava/lang/Runnable;Larc/func/Boolc;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$defaultInterpreter$4", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$4_arc_func_Boolc, 0, "(Larc/func/Boolc;)V", 4106 },
	{ "lambda$defaultInterpreter$3", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$defaultInterpreter$3_arc_func_Boolc, 0, "(Larc/func/Boolc;)V", 4106 },
	{ "lambda$static$107", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$107_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$109", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$109_arc_func_Cons_arc_struct_Seq_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_struct_Seq, 0, "(Larc/func/Cons;Larc/struct/Seq;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/struct/Seq;)V", 4106 },
	{ "lambda$static$108", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$108_arc_struct_Seq_R_arc_struct_Seq, 0, "(Larc/struct/Seq;)Larc/struct/Seq;", 4106 },
	{ "lambda$static$106", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$106_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$93", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$93_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$94", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$94_arc_func_Prov_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_java_lang_reflect_Field_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Ljava/lang/CharSequence;Ljava/lang/Runnable;Larc/func/Boolc;Ljava/lang/reflect/Field;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$100", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$100_Array1_java_lang_Runnable_arc_struct_Seq_java_lang_reflect_Field_arc_func_Cons_arc_scene_ui_layout_Table, 0, "([Ljava/lang/Runnable;Larc/struct/Seq;Ljava/lang/reflect/Field;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$101", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$101_arc_scene_ui_layout_Table_arc_struct_Seq_java_lang_reflect_Field_Array1_java_lang_Runnable_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;Ljava/lang/reflect/Field;[Ljava/lang/Runnable;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$105", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$105_arc_struct_Seq_int_arc_func_Cons_java_lang_Object, 0, "(Larc/struct/Seq;ILarc/func/Cons;Ljava/lang/Object;)V", 4106 },
	{ "lambda$static$104", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$104_arc_struct_Seq_int_R_java_lang_Object, 0, "(Larc/struct/Seq;I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$103", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$103_int_arc_struct_Seq_Array1_java_lang_Runnable_int_boolean, 0, "(ILarc/struct/Seq;[Ljava/lang/Runnable;IZ)V", 4106 },
	{ "lambda$static$102", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$102_arc_struct_Seq_int_Array1_java_lang_Runnable, 0, "(Larc/struct/Seq;I[Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$static$95", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$95_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_java_lang_reflect_Field_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_struct_Seq_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, 0, "(Ljava/lang/CharSequence;Ljava/lang/Runnable;Larc/func/Boolc;Ljava/lang/reflect/Field;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/struct/Seq;[Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$98", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$98_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_struct_Seq_Array1_java_lang_Runnable, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/struct/Seq;[Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$static$99", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$99_arc_struct_Seq_Array1_java_lang_Runnable_java_lang_Object, 0, "(Larc/struct/Seq;[Ljava/lang/Runnable;Ljava/lang/Object;)V", 4106 },
	{ "lambda$static$97", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$97_arc_func_Boolc, 0, "(Larc/func/Boolc;)V", 4106 },
	{ "lambda$static$96", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$96_arc_func_Boolc, 0, "(Larc/func/Boolc;)V", 4106 },
	{ "lambda$static$92", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$92_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$89", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$89_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$91", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$91_arc_func_Cons_java_lang_Boolean, 0, "(Larc/func/Cons;Ljava/lang/Boolean;)V", 4106 },
	{ "lambda$static$90", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$90_arc_func_Prov_R_java_lang_Boolean, 0, "(Larc/func/Prov;)Ljava/lang/Boolean;", 4106 },
	{ "lambda$static$85", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$85_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$86", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$86_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$88", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$88_arc_func_Cons_byte_byte_boolean, 0, "(Larc/func/Cons;BBZ)V", 4106 },
	{ "lambda$static$87", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$87_arc_func_Cons_byte_byte_boolean, 0, "(Larc/func/Cons;BBZ)V", 4106 },
	{ "lambda$static$83", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$83_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$84", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$84_arc_func_Prov_java_lang_String, 0, "(Larc/func/Prov;Ljava/lang/String;)V", 4106 },
	{ "lambda$static$78", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$78_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$82", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$82, 0, "()V", 4106 },
	{ "lambda$static$79", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$79_arc_func_Prov_arc_func_Cons_mindustry_game_MapObjectives$Alignment_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/func/Cons;Lmindustry/game/MapObjectives$Alignment;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$81", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$81_arc_scene_ui_Button_arc_func_Prov_arc_func_Cons_mindustry_game_MapObjectives$Alignment, 0, "(Larc/scene/ui/Button;Larc/func/Prov;Larc/func/Cons;Lmindustry/game/MapObjectives$Alignment;)V", 4106 },
	{ "lambda$static$80", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$80_arc_func_Prov_R_java_lang_CharSequence, 0, "(Larc/func/Prov;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$static$70", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$70_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$71", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$71_arc_func_Prov_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Ljava/lang/Runnable;Larc/func/Boolc;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$72", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$72_Array1_float_arc_scene_ui_layout_Table, 0, "([FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$73", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$73_Array1_java_lang_String_int_Array1_float_arc_scene_ui_layout_Table, 0, "([Ljava/lang/String;I[FLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$77", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$77_Array1_float_int_float_java_lang_Float, 0, "([FIFLjava/lang/Float;)V", 4106 },
	{ "lambda$static$76", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$76_Array1_float_int_float_R_java_lang_Float, 0, "([FIF)Ljava/lang/Float;", 4106 },
	{ "lambda$static$75", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$75_Array1_float_int_arc_graphics_Color, 0, "([FILarc/graphics/Color;)V", 4106 },
	{ "lambda$static$74", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$74_Array1_float_int_R_arc_graphics_Color, 0, "([FI)Larc/graphics/Color;", 4106 },
	{ "lambda$static$69", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$69_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$68", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$68_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$65", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$65_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$67", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$67_arc_math_geom_Vec2_arc_func_Cons_arc_math_geom_Point2_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;Larc/func/Cons;Larc/math/geom/Point2;Larc/math/geom/Vec2;)V", 4106 },
	{ "lambda$static$66", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$66_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 4106 },
	{ "lambda$static$64", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$64_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$56", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$56_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$57", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$57_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_arc_math_geom_Vec2_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Larc/math/geom/Vec2;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$63", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$63_arc_math_geom_Vec2_boolean_arc_func_Cons_java_lang_Object, 0, "(Larc/math/geom/Vec2;ZLarc/func/Cons;Ljava/lang/Object;)V", 4106 },
	{ "lambda$static$62", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$62_arc_math_geom_Vec2_R_java_lang_Object, 0, "(Larc/math/geom/Vec2;)Ljava/lang/Object;", 4106 },
	{ "lambda$static$61", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$61_arc_math_geom_Vec2_R_java_lang_Object, 0, "(Larc/math/geom/Vec2;)Ljava/lang/Object;", 4106 },
	{ "lambda$static$60", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$60_arc_math_geom_Vec2_boolean_arc_func_Cons_java_lang_Object, 0, "(Larc/math/geom/Vec2;ZLarc/func/Cons;Ljava/lang/Object;)V", 4106 },
	{ "lambda$static$59", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$59_arc_math_geom_Vec2_R_java_lang_Object, 0, "(Larc/math/geom/Vec2;)Ljava/lang/Object;", 4106 },
	{ "lambda$static$58", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$58_arc_math_geom_Vec2_R_java_lang_Object, 0, "(Larc/math/geom/Vec2;)Ljava/lang/Object;", 4106 },
	{ "lambda$static$55", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$55_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$50", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$50_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$51", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$51_arc_graphics_Color_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/graphics/Color;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$53", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$53_arc_graphics_Color_arc_func_Cons, 0, "(Larc/graphics/Color;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$54", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$54_arc_func_Cons_arc_graphics_Color_arc_graphics_Color, 0, "(Larc/func/Cons;Larc/graphics/Color;Larc/graphics/Color;)V", 4106 },
	{ "lambda$static$52", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$52_arc_graphics_Color_arc_scene_ui_Button, 0, "(Larc/graphics/Color;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$49", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$49_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$44", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$44_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$45", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$45_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$48", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$48_arc_func_Cons, 0, "(Larc/func/Cons;)V", 4106 },
	{ "lambda$static$46", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$46_arc_func_Prov_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$47", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$47_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$static$43", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$43_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$37", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$37_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$38", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$38_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$41", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$41_arc_func_Cons, 0, "(Larc/func/Cons;)V", 4106 },
	{ "lambda$static$42", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$42_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/type/UnitType;)Z", 4106 },
	{ "lambda$static$39", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$39_arc_func_Prov_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$40", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$40_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$static$36", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$36_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$30", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$30_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$31", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$31_arc_func_Prov_arc_func_Cons_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/func/Cons;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$34", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$34_arc_func_Cons, 0, "(Larc/func/Cons;)V", 4106 },
	{ "lambda$static$35", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$35_mindustry_type_Item_R_boolean, 0, "(Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$static$32", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$32_arc_func_Prov_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$33", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$33_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$static$29", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$29_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$23", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$23_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$24", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$24_arc_func_Prov_arc_func_Cons_java_lang_reflect_Field_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/func/Cons;Ljava/lang/reflect/Field;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$27", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$27_arc_func_Cons_java_lang_reflect_Field, 0, "(Larc/func/Cons;Ljava/lang/reflect/Field;)V", 4106 },
	{ "lambda$static$28", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$28_java_lang_reflect_Field_mindustry_world_Block_R_boolean, 0, "(Ljava/lang/reflect/Field;Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$25", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$25_arc_func_Prov_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$26", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$26_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$static$22", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$22_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$16", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$16_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$17", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$17_arc_func_Prov_arc_func_Cons_java_lang_reflect_Field_arc_scene_ui_layout_Table, 0, "(Larc/func/Prov;Larc/func/Cons;Ljava/lang/reflect/Field;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$static$20", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$20_arc_func_Cons_java_lang_reflect_Field, 0, "(Larc/func/Cons;Ljava/lang/reflect/Field;)V", 4106 },
	{ "lambda$static$21", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$21_java_lang_reflect_Field_mindustry_ctype_UnlockableContent_R_boolean, 0, "(Ljava/lang/reflect/Field;Lmindustry/ctype/UnlockableContent;)Z", 4106 },
	{ "lambda$static$18", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$18_arc_func_Prov_arc_scene_ui_Button, 0, "(Larc/func/Prov;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$19", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$19_arc_func_Prov_arc_scene_ui_Image, 0, "(Larc/func/Prov;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$static$15", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$15_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$13", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$13_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$14", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$14_arc_func_Cons_float_java_lang_String, 0, "(Larc/func/Cons;FLjava/lang/String;)V", 4106 },
	{ "lambda$static$12", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$12_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$10", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$10_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$11", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$11_arc_func_Cons_java_lang_String, 0, "(Larc/func/Cons;Ljava/lang/String;)V", 4106 },
	{ "lambda$static$9", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$9_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$7_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$8", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$8_arc_func_Cons_java_lang_String, 0, "(Larc/func/Cons;Ljava/lang/String;)V", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$6_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$5_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$4_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$1_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, 0, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$3_arc_func_Prov_arc_func_Cons, 0, "(Larc/func/Prov;Larc/func/Cons;)V", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$2_arc_scene_ui_Button, 0, "(Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$static$0_mindustry_editor_MapObjectivesDialog$TypeInfo_arc_func_Cons, 0, "(Lmindustry/editor/MapObjectivesDialog$TypeInfo;Larc/func/Cons;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_editor_MapObjectivesDialog_lambda$new$0_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_MapObjectivesDialog, 0, "()V", 8 },
};

Class class_mindustry_editor_MapObjectivesDialog{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_editor_MapObjectivesDialog),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 156,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 302,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesDialog = registerClass(&class_mindustry_editor_MapObjectivesDialog);

}
