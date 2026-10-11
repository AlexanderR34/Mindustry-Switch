#include "mindustry/ui/builder/UiTreeBuilder.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/ui/Slider_SliderStyle.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_9.h"
#include "arc/graphics/Color.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/ProgressBar.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/ui/builder/UiKey.h"
#include "arc/scene/ui/CheckBox.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_17.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_java_lang_Runnable_2.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_13.h"
#include "mindustry/ui/builder/UiTreeBuilder_BuildContext.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_14.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_16.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_10.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_11.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Cons_12.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Boolean.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "java/lang/Float.h"
#include "arc/scene/ui/layout/WrapTable.h"
#include "mindustry/ui/builder/MenuResult.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiTreeBuilder_BuildResult.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/Slider.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/scene/ui/layout/Stack.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Scaling.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/ui/CheckBox_CheckBoxStyle.h"
#include "mindustry/ui/builder/UiTreeBuilder.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "mindustry/ui/builder/UiTreeBuilder_1.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/builder/UiStyleLookup.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Prov_4.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Prov_5.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Prov_6.h"
#include "mindustry/ui/builder/UiTreeBuilder_invoke_arc_func_Prov_7.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {


void mark_mindustry_ui_builder_UiTreeBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiTreeBuilder *) object;
}

void clinit_mindustry_ui_builder_UiTreeBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiTreeBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_UiTreeBuilder$BuildResult(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:build", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_arc_func_Cons_R_mindustry_ui_builder_UiTreeBuilder$BuildResult(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_arc_func_Cons_R_mindustry_ui_builder_UiTreeBuilder$BuildResult(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(35);
	clinit_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder$BuildContext);
	init_mindustry_ui_builder_UiTreeBuilder$BuildContext_arc_func_Cons(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	SM_mindustry_ui_builder_UiTreeBuilder_buildInto_arc_scene_ui_layout_Table_arc_struct_Seq_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(37);
	clinit_mindustry_ui_builder_UiTreeBuilder$BuildResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder$BuildResult);
	sp[1].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[3].o)))->F_idElements;
	sp[2].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[3].o)))->F_images;
	init_mindustry_ui_builder_UiTreeBuilder$BuildResult_arc_struct_ObjectMap_arc_struct_ObjectMap(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_buildInto_arc_scene_ui_layout_Table_arc_struct_Seq_mindustry_ui_builder_UiTreeBuilder$BuildContext(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:buildInto", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(42);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_row;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_ui_builder_UiBuilder$NodeBuilder)) == 0) goto label_8;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$NodeBuilder, (frame[7].o)));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_defaults;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[6].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[8].o));
	goto label_12;
	}
label_13:;
	LINE_NUMBER(51);
	goto label_2;
label_10:;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[6].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_condition;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(55);
	if ((frame[7].o) == nullptr) goto label_17;
	}
	{
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_evalCondition_java_lang_String_R_boolean(ctx, (frame[7].o));
	if (temp0 != 0) goto label_17;
	}
	goto label_2;
label_17:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_space;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_addNode_mindustry_ui_builder_UiKey_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext_R_arc_scene_Element(ctx, sp[1].o, (frame[6].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(58);
	if ((frame[8].o) != nullptr) goto label_21;
	}
	goto label_2;
label_21:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[9].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[10].o)))->F_key;
	sp[2].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	SM_mindustry_ui_builder_UiTreeBuilder_applyCellProp_arc_scene_ui_layout_Cell_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[6].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ui_builder_UiBuilder$NodeBuilder)) != 0) goto label_29;
	}
	{
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[10].o)))->F_key;
	sp[2].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	SM_mindustry_ui_builder_UiTreeBuilder_applyCellProp_arc_scene_ui_layout_Cell_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_29:;
	LINE_NUMBER(63);
	goto label_26;
label_27:;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[6].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_id;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(66);
	if ((frame[9].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[2].o)))->F_idElements;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_31:;
	LINE_NUMBER(71);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	sp[2].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	SM_mindustry_ui_builder_UiTreeBuilder_applyTableProp_arc_scene_ui_layout_Table_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	LINE_NUMBER(74);
	goto label_2;
label_3:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiTreeBuilder_addNode_mindustry_ui_builder_UiKey_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext_R_arc_scene_Element(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:addNode", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(79);
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		case 11: goto label_15;
		default: goto label_16;
	}
	}
label_5:;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_background;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_wrap;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	{
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WrapTable);
	init_arc_scene_ui_layout_WrapTable(ctx, sp[0].o);
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(83);
	if ((frame[4].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_R_arc_scene_style_Drawable(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_margin;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(85);
	if ((frame[6].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = frame[5].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, temp0);
	}
label_23:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	SM_mindustry_ui_builder_UiTreeBuilder_buildInto_arc_scene_ui_layout_Table_arc_struct_Seq_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(88);
	frame[3].o = (frame[5].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_6:;
	{
	LINE_NUMBER(91);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	init_arc_scene_ui_layout_Stack(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_28:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_ui_builder_UiBuilder$NodeBuilder)) == 0) goto label_31;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$NodeBuilder, (frame[8].o)));
	LINE_NUMBER(97);
	sp[0].o = frame[7].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_condition;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(98);
	if ((frame[8].o) == nullptr) goto label_34;
	}
	{
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_evalCondition_java_lang_String_R_boolean(ctx, (frame[8].o));
	if (temp0 != 0) goto label_34;
	}
	goto label_28;
label_34:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_addNode_mindustry_ui_builder_UiKey_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext_R_arc_scene_Element(ctx, sp[0].o, (frame[7].o), (frame[2].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[9].o) != nullptr) goto label_36;
	}
	goto label_28;
label_36:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[7].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_id;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(104);
	if ((frame[10].o) == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(105);
	((arc_scene_Element *) NULL_CHECK((frame[9].o)))->F_name = (jref) (frame[10].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[2].o)))->F_idElements;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[10].o), (frame[9].o));
	}
label_38:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[7].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_color;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(109);
	if ((frame[11].o) == nullptr) goto label_42;
	}
	{
	sp[0].o = frame[9].o;
	sp[1].o = frame[11].o;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)SM_arc_util_Strings_parseColor_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_Element_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_42:;
	{
	LINE_NUMBER(111);
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, (frame[4].o), (frame[9].o));
	}
label_31:;
	LINE_NUMBER(113);
	goto label_28;
label_29:;
	{
	LINE_NUMBER(114);
	frame[3].o = (frame[4].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_7:;
	{
	LINE_NUMBER(117);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	SM_mindustry_ui_builder_UiTreeBuilder_buildInto_arc_scene_ui_layout_Table_arc_struct_Seq_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(119);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	init_arc_scene_ui_ScrollPane_arc_scene_Element(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_ScrollPane$ScrollPaneStyle);
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(121);
	frame[3].o = (frame[5].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_8:;
	{
	LINE_NUMBER(124);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_text;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_wrap;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean])(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_labelAlign;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(127);
	if ((frame[5].o) == nullptr) goto label_50;
	}
	{
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_parseAlign_java_lang_String_R_int(ctx, (frame[5].o));
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, sp[0].o, temp0);
	}
label_50:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_Label$LabelStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(129);
	frame[3].o = (frame[4].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_9:;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_region;
	sp[2].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_builder_UiKey_icon;
	sp[2].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String])(ctx, sp[2].o, sp[3].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(133);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[1].o = frame[4].o;
	sp[2].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_builder_UiKey_placeholder;
	sp[2].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"net-"_j))));
	if (temp0 == 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[2].o)))->F_images;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_4);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[5].o));
	}
label_54:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_scaling;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(137);
	if ((frame[6].o) == nullptr) goto label_56;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_arc_util_Scaling_valueOf_java_lang_String_R_arc_util_Scaling(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, (frame[5].o), (frame[7].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(141);
	goto label_56;
label_2:;
	INST_ASTORE(7);
label_56:;
	{
	LINE_NUMBER(143);
	frame[3].o = (frame[5].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_10:;
	{
	LINE_NUMBER(146);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_text;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	init_arc_scene_ui_TextButton_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(147);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_TextButton$TextButtonStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(149);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_icon;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(150);
	if ((frame[5].o) == nullptr) goto label_61;
	}
	{
	LINE_NUMBER(151);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[1].o = frame[5].o;
	sp[2].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_builder_UiKey_placeholder;
	sp[2].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable(ctx, sp[1].o, sp[2].o);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"net-"_j))));
	if (temp0 == 0) goto label_64;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[2].o)))->F_images;
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_5);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[6].o));
	}
label_64:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[6].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getCells_R_arc_struct_Seq])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_61:;
	{
	LINE_NUMBER(157);
	SM_mindustry_ui_builder_UiTreeBuilder_wireButton_arc_scene_ui_Button_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(158);
	frame[3].o = (frame[4].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_11:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_icon;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(162);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[4].o) == nullptr) goto label_68;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_placeholder;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_69;
	}
label_68:;
	INST_ACONST_NULL();
label_69:;
	{
	sp -= 3;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(164);
	if ((frame[4].o) == nullptr) goto label_71;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"net-"_j))));
	if (temp0 == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[2].o)))->F_images;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	sp[1].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_71:;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(166);
	SM_mindustry_ui_builder_UiTreeBuilder_wireButton_arc_scene_ui_Button_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, (frame[5].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(167);
	frame[3].o = (frame[5].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_12:;
	{
	LINE_NUMBER(170);
	clinit_arc_scene_ui_TextField(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_text;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	init_arc_scene_ui_TextField_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_hint;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[5].o) == nullptr) goto label_76;
	}
	{
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (frame[4].o), (frame[5].o));
	}
label_76:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxLength;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[6].o) != nullptr) goto label_78;
	}
	INST_SIPUSH(1000);
	goto label_79;
label_78:;
	{
	jint temp0 = (jint)((func_java_lang_Float_intValue_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Float_intValue_R_int])(ctx, (frame[6].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (1000));
	sp[0].i = temp1;
	sp += 1;
	}
label_79:;
	{
	sp -= 2;
	((func_arc_scene_ui_TextField_setMaxLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMaxLength_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(175);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_enter;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(176);
	if ((frame[7].o) == nullptr) goto label_82;
	}
	{
	sp[0].o = frame[4].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_82:;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_TextField$TextFieldStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(178);
	frame[3].o = (frame[4].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_13:;
	{
	LINE_NUMBER(181);
	clinit_arc_scene_ui_CheckBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_CheckBox);
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_text;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	init_arc_scene_ui_CheckBox_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(182);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_checked;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean])(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_CheckBox_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_setChecked_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_group;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(184);
	if ((frame[5].o) == nullptr) goto label_87;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup])(ctx, (frame[2].o), (frame[5].o));
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, sp[0].o, (frame[4].o));
	}
label_87:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_CheckBox$CheckBoxStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(186);
	frame[3].o = (frame[4].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_14:;
	{
	LINE_NUMBER(189);
	clinit_arc_scene_ui_Slider(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Slider);
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_min;
	jfloat temp0 = (jfloat)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(0)));
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_max;
	jfloat temp1 = (jfloat)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(1)));
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_step;
	jfloat temp2 = (jfloat)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(0.1f)));
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, sp[0].o, temp0, temp1, temp2, (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_defaultValue;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(191);
	if ((frame[5].o) == nullptr) goto label_91;
	}
	{
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[5].o));
	jint temp1 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, temp0);
	}
label_91:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_Slider$SliderStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_text;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(195);
	if ((frame[6].o) == nullptr) goto label_94;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	if (temp0 <= 0) goto label_94;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[6].o), (jint(0)));
	if (temp0 != (64)) goto label_94;
	}
	INST_ICONST(1);
	goto label_95;
label_94:;
	INST_ICONST(0);
label_95:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(196);
	if ((frame[7].i) == 0) goto label_97;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[6].o), (jint(1)));
	sp += 1;
	goto label_98;
	}
label_97:;
	INST_ACONST_NULL();
label_98:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(198);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Label);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Prov_7);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	init_arc_scene_ui_Label_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(208);
	((func_arc_scene_ui_Label_setAlignment_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int])(ctx, (frame[9].o), (jint(1)));
	LINE_NUMBER(209);
	sp[0].o = frame[9].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(210);
	sp[0].o = frame[9].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[9].o);
	init_arc_scene_ui_layout_Stack_Array1_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_15:;
	{
	LINE_NUMBER(214);
	clinit_arc_scene_ui_Button(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Button);
	init_arc_scene_ui_Button(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_TextButton$TextButtonStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_105;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_105:;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_margin;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(218);
	if ((frame[5].o) == nullptr) goto label_107;
	}
	{
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, temp0);
	}
label_107:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	SM_mindustry_ui_builder_UiTreeBuilder_buildInto_arc_scene_ui_layout_Table_arc_struct_Seq_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(220);
	SM_mindustry_ui_builder_UiTreeBuilder_wireButton_arc_scene_ui_Button_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(221);
	frame[3].o = (frame[4].o);
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_25;
	}
label_16:;
	{
	LINE_NUMBER(223);
	frame[3].o = (jobject(nullptr));
	sp[0].o = frame[3].o;
	sp += 1;
	}
label_25:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:applyStyle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_style;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(230);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiStyleLookup_get_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(233);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_wireButton_arc_scene_ui_Button_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:wireButton", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_group;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup])(ctx, (frame[2].o), (frame[3].o));
	((func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button])(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_checked;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean])(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(248);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_clicked;
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(249);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_6;
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[2].o)))->F_resultListener;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_fireResult_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:fireResult", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(256);
	clinit_mindustry_ui_builder_MenuResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_MenuResult);
	init_mindustry_ui_builder_MenuResult_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[0].o)))->F_idElements;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	frame[5].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(259);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_ui_Slider)) == 0) goto label_6;
	}
	{
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_Slider, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[2].o)))->F_values;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[6].o));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(260);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_ui_layout_Stack)) == 0) goto label_9;
	}
	{
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_layout_Stack, (frame[5].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[7].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[12].o = sp[0].o;
	if ((isInstance(ctx, (frame[12].o), &class_arc_scene_ui_Slider)) == 0) goto label_9;
	}
	{
	frame[8].o = (checkCast(ctx, &class_arc_scene_ui_Slider, (frame[12].o)));
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[2].o)))->F_values;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[8].o));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(261);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_ui_TextField)) == 0) goto label_12;
	}
	{
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_TextField, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[2].o)))->F_values;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(262);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_ui_CheckBox)) == 0) goto label_14;
	}
	{
	frame[10].o = (checkCast(ctx, &class_arc_scene_ui_CheckBox, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[2].o)))->F_values;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_CheckBox_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_ui_CheckBox_isChecked_R_boolean])(ctx, (frame[10].o));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_8;
	}
label_14:;
	{
	LINE_NUMBER(264);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_ui_Button)) == 0) goto label_8;
	}
	{
	frame[11].o = (checkCast(ctx, &class_arc_scene_ui_Button, (frame[5].o)));
	sp[0].o = (jobject)((func_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_Button_getStyle_R_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[11].o));
	sp[0].o = (jobject)((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_checked;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[2].o)))->F_values;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[11].o));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	LINE_NUMBER(265);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[0].o)))->F_resultListener;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_applyTableProp_arc_scene_ui_layout_Table_mindustry_ui_builder_UiKey_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:applyTableProp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(271);
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 12: goto label_1;
		case 13: goto label_2;
		case 14: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_R_arc_scene_style_Drawable(ctx, (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	((func_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_parseAlign_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_4:;
	LINE_NUMBER(277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_applyCellProp_arc_scene_ui_layout_Cell_mindustry_ui_builder_UiKey_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:applyCellProp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[2].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(281);
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 15: goto label_3;
		case 16: goto label_4;
		case 17: goto label_5;
		case 18: goto label_6;
		case 19: goto label_7;
		case 20: goto label_8;
		case 21: goto label_9;
		case 22: goto label_10;
		case 23: goto label_11;
		case 24: goto label_12;
		case 25: goto label_13;
		case 26: goto label_14;
		case 27: goto label_15;
		default: goto label_16;
	}
	}
label_3:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_4:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_5:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_6:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_7:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_8:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_9:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_expand_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_10:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandY_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniform_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformX_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_uniformY_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_arc_scene_utils_Disableable)) == 0) goto label_18;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_scene_utils_Disableable, (frame[4].o)));
	((func_arc_scene_utils_Disableable_setDisabled_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_utils_Disableable, INDEX_arc_scene_utils_Disableable_setDisabled_boolean, (frame[3].o)))(ctx, (frame[3].o), (jint(1)));
	}
label_18:;
	goto label_17;
label_16:;
	LINE_NUMBER(296);
	goto label_17;
label_1:;
	{
	LINE_NUMBER(299);
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 14: goto label_20;
		case 15: goto label_17;
		case 16: goto label_17;
		case 17: goto label_17;
		case 18: goto label_17;
		case 19: goto label_17;
		case 20: goto label_17;
		case 21: goto label_17;
		case 22: goto label_17;
		case 23: goto label_17;
		case 24: goto label_17;
		case 25: goto label_17;
		case 26: goto label_17;
		case 27: goto label_17;
		case 28: goto label_21;
		case 29: goto label_22;
		case 30: goto label_23;
		case 31: goto label_24;
		case 32: goto label_25;
		case 33: goto label_26;
		case 34: goto label_27;
		case 35: goto label_28;
		case 36: goto label_29;
		case 37: goto label_30;
		case 38: goto label_31;
		case 39: goto label_32;
		case 40: goto label_33;
		case 41: goto label_34;
		default: goto label_17;
	}
	}
label_21:;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_22:;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_23:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_24:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_25:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_26:;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_27:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_28:;
	{
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_29:;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_30:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_31:;
	{
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_32:;
	{
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_ui_builder_UiTreeBuilder_parseAlign_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_align_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_33:;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Float_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))))->vtable)[VTABLE_java_lang_Float_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Float, (frame[2].o))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_34:;
	{
	LINE_NUMBER(315);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) == 0) goto label_35;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)SM_arc_util_Strings_parseColor_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_35:;
	LINE_NUMBER(316);
	goto label_17;
label_17:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_R_arc_scene_style_Drawable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:findDrawable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"error"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:findDrawable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(328);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(329);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(332);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	LINE_NUMBER(333);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(335);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable(ctx, (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(336);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nomap"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_builder_UiTreeBuilder_evalCondition_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:evalCondition", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(342);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"portrait"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"landscape"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(346);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (jint(3))) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(348);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	frame[4].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[3].o));
	switch(temp0) {
		case -1221029593: goto label_8;
		case 113126854: goto label_9;
		default: goto label_10;
	}
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	frame[4].i = (jint(0));
	goto label_10;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"height"_j))));
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(1);
	INST_ISTORE(4);
label_10:;
	INST_ILOAD(4);
	switch((--sp)->i) {
		case 0: goto label_11;
		case 1: goto label_12;
		default: goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(349);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp2 = temp0 / temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(350);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp2 = temp0 / temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_14;
	}
label_13:;
	LINE_NUMBER(351);
	INST_FCONST(0);
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(348);
	frame[2].f = sp[0].f;
	LINE_NUMBER(353);
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (jfloat(std::numeric_limits<float>::quiet_NaN())));
	frame[3].f = temp0;
	LINE_NUMBER(355);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[3].f));
	if (temp1 == 0) goto label_17;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(357);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1))));
	frame[5].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[4].o));
	switch(temp0) {
		case 60: goto label_18;
		case 62: goto label_19;
		case 1921: goto label_20;
		case 1983: goto label_21;
		default: goto label_22;
	}
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8">="_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	frame[5].i = (jint(0));
	goto label_22;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8">"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	frame[5].i = (jint(1));
	goto label_22;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"<="_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	frame[5].i = (jint(2));
	goto label_22;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"<"_j))));
	if (temp0 == 0) goto label_22;
	}
	INST_ICONST(3);
	INST_ISTORE(5);
label_22:;
	INST_ILOAD(5);
	switch((--sp)->i) {
		case 0: goto label_23;
		case 1: goto label_24;
		case 2: goto label_25;
		case 3: goto label_26;
		default: goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(358);
	if ((floatCompare((frame[2].f), (frame[3].f), -1)) < 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
	goto label_29;
label_24:;
	{
	LINE_NUMBER(359);
	if ((floatCompare((frame[2].f), (frame[3].f), -1)) <= 0) goto label_30;
	}
	INST_ICONST(1);
	goto label_29;
label_30:;
	INST_ICONST(0);
	goto label_29;
label_25:;
	{
	LINE_NUMBER(360);
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) > 0) goto label_31;
	}
	INST_ICONST(1);
	goto label_29;
label_31:;
	INST_ICONST(0);
	goto label_29;
label_26:;
	{
	LINE_NUMBER(361);
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) >= 0) goto label_32;
	}
	INST_ICONST(1);
	goto label_29;
label_32:;
	INST_ICONST(0);
	goto label_29;
label_27:;
	LINE_NUMBER(362);
	INST_ICONST(1);
label_29:;
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ui_builder_UiTreeBuilder_parseAlign_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:parseAlign", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(367);
	frame[1].o = (frame[0].o);
	frame[2].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case -1682792238: goto label_1;
		case -1383228885: goto label_2;
		case -1364013995: goto label_3;
		case -1140120836: goto label_4;
		case -978346553: goto label_5;
		case -621290831: goto label_6;
		case 115029: goto label_7;
		case 3317767: goto label_8;
		case 68376174: goto label_9;
		case 108511772: goto label_10;
		case 2125322389: goto label_11;
		default: goto label_12;
	}
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"center"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (jint(0));
	goto label_12;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"top"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (jint(1));
	goto label_12;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"bottom"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (jint(2));
	goto label_12;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"left"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (jint(3));
	goto label_12;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"right"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (jint(4));
	goto label_12;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"topLeft"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (jint(5));
	goto label_12;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"topRight"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (6);
	goto label_12;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"bottomLeft"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (7);
	goto label_12;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"botLeft"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (8);
	goto label_12;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"bottomRight"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[2].i = (9);
	goto label_12;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"botRight"_j))));
	if (temp0 == 0) goto label_12;
	}
	INST_BIPUSH(10);
	INST_ISTORE(2);
label_12:;
	INST_ILOAD(2);
	switch((--sp)->i) {
		case 0: goto label_13;
		case 1: goto label_14;
		case 2: goto label_15;
		case 3: goto label_16;
		case 4: goto label_17;
		case 5: goto label_18;
		case 6: goto label_19;
		case 7: goto label_20;
		case 8: goto label_20;
		case 9: goto label_21;
		case 10: goto label_21;
		default: goto label_22;
	}
label_13:;
	{
	LINE_NUMBER(368);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_14:;
	{
	LINE_NUMBER(369);
	jint temp0 = jint(2);
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_15:;
	{
	LINE_NUMBER(370);
	jint temp0 = jint(4);
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_16:;
	{
	LINE_NUMBER(371);
	jint temp0 = 8;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_17:;
	{
	LINE_NUMBER(372);
	jint temp0 = 16;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(373);
	jint temp0 = 10;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_19:;
	{
	LINE_NUMBER(374);
	jint temp0 = 18;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(375);
	jint temp0 = 12;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(376);
	jint temp0 = 20;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	LINE_NUMBER(377);
	INST_ICONST(1);
label_23:;
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_lambda$wireButton$0_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:lambda$wireButton$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(250);
	SM_mindustry_ui_builder_UiTreeBuilder_fireResult_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiTreeBuilder_lambda$addNode$1_arc_scene_ui_Slider_java_lang_String_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:lambda$addNode$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(199);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp0, (jint(2)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(200);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(201);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[3].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(202);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001"_j.string, 2, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiTreeBuilder_lambda$addNode$0_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder:lambda$addNode$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(176);
	SM_mindustry_ui_builder_UiTreeBuilder_fireResult_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiTreeBuilder[] {
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

static jclass innerClasses[] {
	&class_mindustry_ui_builder_UiTreeBuilder$BuildResult,
	&class_mindustry_ui_builder_UiTreeBuilder$BuildContext,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiTreeBuilder, 0, "()V", 1 },
	{ "build", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_UiTreeBuilder$BuildResult, 0, "(Larc/scene/ui/layout/Table;Lmindustry/ui/builder/UiBuilder$NodeBuilder;)Lmindustry/ui/builder/UiTreeBuilder$BuildResult;", 9 },
	{ "build", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_build_arc_scene_ui_layout_Table_mindustry_ui_builder_UiBuilder$NodeBuilder_arc_func_Cons_R_mindustry_ui_builder_UiTreeBuilder$BuildResult, 0, "(Larc/scene/ui/layout/Table;Lmindustry/ui/builder/UiBuilder$NodeBuilder;Larc/func/Cons;)Lmindustry/ui/builder/UiTreeBuilder$BuildResult;", 9 },
	{ "buildInto", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_buildInto_arc_scene_ui_layout_Table_arc_struct_Seq_mindustry_ui_builder_UiTreeBuilder$BuildContext, 0, "(Larc/scene/ui/layout/Table;Larc/struct/Seq;Lmindustry/ui/builder/UiTreeBuilder$BuildContext;)V", 10 },
	{ "addNode", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_addNode_mindustry_ui_builder_UiKey_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext_R_arc_scene_Element, 0, "(Lmindustry/ui/builder/UiKey;Lmindustry/ui/builder/UiBuilder$NodeBuilder;Lmindustry/ui/builder/UiTreeBuilder$BuildContext;)Larc/scene/Element;", 10 },
	{ "applyStyle", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_applyStyle_mindustry_ui_builder_UiBuilder$NodeBuilder_java_lang_Class_arc_func_Cons_R_boolean, 0, "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;Ljava/lang/Class;Larc/func/Cons;)Z", 10 },
	{ "wireButton", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_wireButton_arc_scene_ui_Button_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiTreeBuilder$BuildContext, 0, "(Larc/scene/ui/Button;Lmindustry/ui/builder/UiBuilder$NodeBuilder;Lmindustry/ui/builder/UiTreeBuilder$BuildContext;)V", 10 },
	{ "fireResult", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_fireResult_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String, 0, "(Lmindustry/ui/builder/UiTreeBuilder$BuildContext;Ljava/lang/String;)V", 10 },
	{ "applyTableProp", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_applyTableProp_arc_scene_ui_layout_Table_mindustry_ui_builder_UiKey_java_lang_Object, 0, "(Larc/scene/ui/layout/Table;Lmindustry/ui/builder/UiKey;Ljava/lang/Object;)V", 10 },
	{ "applyCellProp", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_applyCellProp_arc_scene_ui_layout_Cell_mindustry_ui_builder_UiKey_java_lang_Object, 0, "(Larc/scene/ui/layout/Cell;Lmindustry/ui/builder/UiKey;Ljava/lang/Object;)V", 10 },
	{ "findDrawable", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_R_arc_scene_style_Drawable, 0, "(Ljava/lang/String;)Larc/scene/style/Drawable;", 10 },
	{ "findDrawable", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_findDrawable_java_lang_String_java_lang_String_R_arc_scene_style_Drawable, 0, "(Ljava/lang/String;Ljava/lang/String;)Larc/scene/style/Drawable;", 10 },
	{ "evalCondition", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_evalCondition_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 10 },
	{ "parseAlign", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_parseAlign_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "lambda$wireButton$0", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_lambda$wireButton$0_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String, 0, "(Lmindustry/ui/builder/UiTreeBuilder$BuildContext;Ljava/lang/String;)V", 4106 },
	{ "lambda$addNode$1", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_lambda$addNode$1_arc_scene_ui_Slider_java_lang_String_java_lang_String_R_java_lang_CharSequence, 0, "(Larc/scene/ui/Slider;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$addNode$0", (intptr_t) SM_mindustry_ui_builder_UiTreeBuilder_lambda$addNode$0_mindustry_ui_builder_UiTreeBuilder$BuildContext_java_lang_String, 0, "(Lmindustry/ui/builder/UiTreeBuilder$BuildContext;Ljava/lang/String;)V", 4106 },
};

Class class_mindustry_ui_builder_UiTreeBuilder{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiTreeBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiTreeBuilder),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiTreeBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiTreeBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiTreeBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiTreeBuilder = registerClass(&class_mindustry_ui_builder_UiTreeBuilder);

}
