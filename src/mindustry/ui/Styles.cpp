#include "mindustry/ui/Styles.h"
#include "mindustry/ui/Styles_50.h"
#include "mindustry/ui/Styles_12.h"
#include "arc/scene/ui/Slider_SliderStyle.h"
#include "mindustry/ui/Styles_13.h"
#include "mindustry/ui/Styles_14.h"
#include "mindustry/ui/Styles_15.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Styles_10.h"
#include "mindustry/ui/Styles_11.h"
#include "arc/scene/ui/TreeElement_TreeStyle.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "mindustry/ui/Styles_16.h"
#include "mindustry/ui/Styles_17.h"
#include "mindustry/ui/Styles_18.h"
#include "mindustry/ui/Styles_19.h"
#include "arc/Core.h"
#include "mindustry/ui/Styles_23.h"
#include "mindustry/ui/Styles_24.h"
#include "mindustry/ui/Styles_25.h"
#include "mindustry/ui/Styles_26.h"
#include "mindustry/ui/Styles_20.h"
#include "mindustry/ui/Styles_21.h"
#include "mindustry/ui/Styles_22.h"
#include "java/lang/Object.h"
#include "mindustry/ui/Styles_27.h"
#include "mindustry/ui/Styles_28.h"
#include "mindustry/ui/Styles_29.h"
#include "arc/graphics/g2d/NinePatch.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/Styles_34.h"
#include "mindustry/ui/Styles_35.h"
#include "mindustry/ui/Styles_36.h"
#include "mindustry/ui/Styles_37.h"
#include "mindustry/ui/Styles_30.h"
#include "mindustry/ui/Styles_31.h"
#include "mindustry/ui/Styles_32.h"
#include "mindustry/ui/Styles_33.h"
#include "arc/scene/ui/Dialog_DialogStyle.h"
#include "mindustry/ui/Styles_9.h"
#include "arc/scene/style/ScaledNinePatchDrawable.h"
#include "mindustry/ui/Styles_7.h"
#include "java/lang/String.h"
#include "mindustry/ui/Styles_8.h"
#include "mindustry/ui/Styles_5.h"
#include "mindustry/ui/Styles_38.h"
#include "mindustry/ui/Styles_6.h"
#include "mindustry/ui/Styles_39.h"
#include "mindustry/ui/Styles_3.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "mindustry/ui/Styles_4.h"
#include "mindustry/ui/Styles_1.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/Styles_2.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/Styles_40.h"
#include "mindustry/ui/Styles_45.h"
#include "mindustry/ui/Styles_46.h"
#include "arc/scene/ui/CheckBox_CheckBoxStyle.h"
#include "mindustry/ui/Styles_47.h"
#include "mindustry/ui/Styles_48.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/Styles_41.h"
#include "mindustry/ui/Styles_42.h"
#include "mindustry/ui/Styles_43.h"
#include "mindustry/ui/Styles_44.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/Styles_49.h"
#include "arc/scene/ui/Label_LabelStyle.h"

extern "C" {

jobject SF_mindustry_ui_Styles_black;
jobject SF_mindustry_ui_Styles_black9;
jobject SF_mindustry_ui_Styles_black8;
jobject SF_mindustry_ui_Styles_black6;
jobject SF_mindustry_ui_Styles_black3;
jobject SF_mindustry_ui_Styles_black5;
jobject SF_mindustry_ui_Styles_grayPanel;
jobject SF_mindustry_ui_Styles_grayPanelDark;
jobject SF_mindustry_ui_Styles_none;
jobject SF_mindustry_ui_Styles_flatDown;
jobject SF_mindustry_ui_Styles_flatOver;
jobject SF_mindustry_ui_Styles_accentDrawable;
jobject SF_mindustry_ui_Styles_defaultb;
jobject SF_mindustry_ui_Styles_underlineb;
jobject SF_mindustry_ui_Styles_defaultt;
jobject SF_mindustry_ui_Styles_flatt;
jobject SF_mindustry_ui_Styles_grayt;
jobject SF_mindustry_ui_Styles_flatTogglet;
jobject SF_mindustry_ui_Styles_flatBordert;
jobject SF_mindustry_ui_Styles_nonet;
jobject SF_mindustry_ui_Styles_logicTogglet;
jobject SF_mindustry_ui_Styles_flatToggleMenut;
jobject SF_mindustry_ui_Styles_togglet;
jobject SF_mindustry_ui_Styles_cleart;
jobject SF_mindustry_ui_Styles_clearTogglet;
jobject SF_mindustry_ui_Styles_fullTogglet;
jobject SF_mindustry_ui_Styles_squareTogglet;
jobject SF_mindustry_ui_Styles_logict;
jobject SF_mindustry_ui_Styles_defaulti;
jobject SF_mindustry_ui_Styles_nodei;
jobject SF_mindustry_ui_Styles_emptyi;
jobject SF_mindustry_ui_Styles_emptyTogglei;
jobject SF_mindustry_ui_Styles_selecti;
jobject SF_mindustry_ui_Styles_logici;
jobject SF_mindustry_ui_Styles_geni;
jobject SF_mindustry_ui_Styles_grayi;
jobject SF_mindustry_ui_Styles_graySquarei;
jobject SF_mindustry_ui_Styles_flati;
jobject SF_mindustry_ui_Styles_squarei;
jobject SF_mindustry_ui_Styles_squareTogglei;
jobject SF_mindustry_ui_Styles_grayTogglei;
jobject SF_mindustry_ui_Styles_clearNonei;
jobject SF_mindustry_ui_Styles_cleari;
jobject SF_mindustry_ui_Styles_clearTogglei;
jobject SF_mindustry_ui_Styles_clearNoneTogglei;
jobject SF_mindustry_ui_Styles_defaultPane;
jobject SF_mindustry_ui_Styles_horizontalPane;
jobject SF_mindustry_ui_Styles_smallPane;
jobject SF_mindustry_ui_Styles_noBarPane;
jobject SF_mindustry_ui_Styles_defaultSlider;
jobject SF_mindustry_ui_Styles_defaultLabel;
jobject SF_mindustry_ui_Styles_outlineLabel;
jobject SF_mindustry_ui_Styles_techLabel;
jobject SF_mindustry_ui_Styles_monoLabel;
jobject SF_mindustry_ui_Styles_defaultField;
jobject SF_mindustry_ui_Styles_nodeField;
jobject SF_mindustry_ui_Styles_areaField;
jobject SF_mindustry_ui_Styles_nodeArea;
jobject SF_mindustry_ui_Styles_defaultCheck;
jobject SF_mindustry_ui_Styles_defaultDialog;
jobject SF_mindustry_ui_Styles_fullDialog;
jobject SF_mindustry_ui_Styles_defaultTree;

void mark_mindustry_ui_Styles(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_Styles_black)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_black)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_black, mark, depth + 1);
		if (SF_mindustry_ui_Styles_black9)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_black9)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_black9, mark, depth + 1);
		if (SF_mindustry_ui_Styles_black8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_black8)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_black8, mark, depth + 1);
		if (SF_mindustry_ui_Styles_black6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_black6)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_black6, mark, depth + 1);
		if (SF_mindustry_ui_Styles_black3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_black3)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_black3, mark, depth + 1);
		if (SF_mindustry_ui_Styles_black5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_black5)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_black5, mark, depth + 1);
		if (SF_mindustry_ui_Styles_grayPanel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_grayPanel)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_grayPanel, mark, depth + 1);
		if (SF_mindustry_ui_Styles_grayPanelDark)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_grayPanelDark)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_grayPanelDark, mark, depth + 1);
		if (SF_mindustry_ui_Styles_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_none)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_none, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flatDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flatDown)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flatDown, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flatOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flatOver)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flatOver, mark, depth + 1);
		if (SF_mindustry_ui_Styles_accentDrawable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_accentDrawable)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_accentDrawable, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultb)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultb)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultb, mark, depth + 1);
		if (SF_mindustry_ui_Styles_underlineb)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_underlineb)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_underlineb, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultt)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultt, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flatt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flatt)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flatt, mark, depth + 1);
		if (SF_mindustry_ui_Styles_grayt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_grayt)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_grayt, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flatTogglet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flatTogglet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flatTogglet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flatBordert)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flatBordert)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flatBordert, mark, depth + 1);
		if (SF_mindustry_ui_Styles_nonet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_nonet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_nonet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_logicTogglet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_logicTogglet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_logicTogglet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flatToggleMenut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flatToggleMenut)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flatToggleMenut, mark, depth + 1);
		if (SF_mindustry_ui_Styles_togglet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_togglet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_togglet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_cleart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_cleart)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_cleart, mark, depth + 1);
		if (SF_mindustry_ui_Styles_clearTogglet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_clearTogglet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_clearTogglet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_fullTogglet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_fullTogglet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_fullTogglet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_squareTogglet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_squareTogglet)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_squareTogglet, mark, depth + 1);
		if (SF_mindustry_ui_Styles_logict)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_logict)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_logict, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaulti)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaulti)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaulti, mark, depth + 1);
		if (SF_mindustry_ui_Styles_nodei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_nodei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_nodei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_emptyi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_emptyi)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_emptyi, mark, depth + 1);
		if (SF_mindustry_ui_Styles_emptyTogglei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_emptyTogglei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_emptyTogglei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_selecti)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_selecti)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_selecti, mark, depth + 1);
		if (SF_mindustry_ui_Styles_logici)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_logici)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_logici, mark, depth + 1);
		if (SF_mindustry_ui_Styles_geni)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_geni)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_geni, mark, depth + 1);
		if (SF_mindustry_ui_Styles_grayi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_grayi)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_grayi, mark, depth + 1);
		if (SF_mindustry_ui_Styles_graySquarei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_graySquarei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_graySquarei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_flati)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_flati)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_flati, mark, depth + 1);
		if (SF_mindustry_ui_Styles_squarei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_squarei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_squarei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_squareTogglei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_squareTogglei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_squareTogglei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_grayTogglei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_grayTogglei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_grayTogglei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_clearNonei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_clearNonei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_clearNonei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_cleari)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_cleari)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_cleari, mark, depth + 1);
		if (SF_mindustry_ui_Styles_clearTogglei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_clearTogglei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_clearTogglei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_clearNoneTogglei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_clearNoneTogglei)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_clearNoneTogglei, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultPane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultPane)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultPane, mark, depth + 1);
		if (SF_mindustry_ui_Styles_horizontalPane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_horizontalPane)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_horizontalPane, mark, depth + 1);
		if (SF_mindustry_ui_Styles_smallPane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_smallPane)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_smallPane, mark, depth + 1);
		if (SF_mindustry_ui_Styles_noBarPane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_noBarPane)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_noBarPane, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultSlider)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultSlider)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultSlider, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultLabel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultLabel)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultLabel, mark, depth + 1);
		if (SF_mindustry_ui_Styles_outlineLabel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_outlineLabel)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_outlineLabel, mark, depth + 1);
		if (SF_mindustry_ui_Styles_techLabel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_techLabel)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_techLabel, mark, depth + 1);
		if (SF_mindustry_ui_Styles_monoLabel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_monoLabel)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_monoLabel, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultField)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultField, mark, depth + 1);
		if (SF_mindustry_ui_Styles_nodeField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_nodeField)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_nodeField, mark, depth + 1);
		if (SF_mindustry_ui_Styles_areaField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_areaField)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_areaField, mark, depth + 1);
		if (SF_mindustry_ui_Styles_nodeArea)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_nodeArea)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_nodeArea, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultCheck)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultCheck)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultCheck, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultDialog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultDialog)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultDialog, mark, depth + 1);
		if (SF_mindustry_ui_Styles_fullDialog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_fullDialog)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_fullDialog, mark, depth + 1);
		if (SF_mindustry_ui_Styles_defaultTree)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Styles_defaultTree)->clazz)->markFunction)((jobject) SF_mindustry_ui_Styles_defaultTree, mark, depth + 1);
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
	auto self = (mindustry_ui_Styles *) object;
}

void clinit_mindustry_ui_Styles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_Styles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Styles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Styles_load(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Styles(ctx);
	{
	LINE_NUMBER(104);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	frame[0].o = (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_black = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.9f)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_black9 = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.8f)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_black8 = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.6f)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_black6 = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.5f)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_black5 = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.3f)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_black3 = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_none = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkestGray;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_grayPanel = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkestestGray;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_grayPanelDark = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_mindustry_ui_Styles_createFlatDown_R_arc_scene_style_Drawable(ctx);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flatDown = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"454545"_j))));
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flatOver = sp[0].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_accentDrawable = sp[0].o;
	LINE_NUMBER(119);
	clinit_mindustry_ui_Styles$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$1);
	init_mindustry_ui_Styles$1(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultb = sp[0].o;
	LINE_NUMBER(126);
	clinit_mindustry_ui_Styles$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$2);
	init_mindustry_ui_Styles$2(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_underlineb = sp[0].o;
	LINE_NUMBER(133);
	clinit_mindustry_ui_Styles$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$3);
	init_mindustry_ui_Styles$3(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultt = sp[0].o;
	LINE_NUMBER(142);
	clinit_mindustry_ui_Styles$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$4);
	init_mindustry_ui_Styles$4(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_nonet = sp[0].o;
	LINE_NUMBER(149);
	clinit_mindustry_ui_Styles$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$5);
	init_mindustry_ui_Styles$5(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flatt = sp[0].o;
	LINE_NUMBER(157);
	clinit_mindustry_ui_Styles$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$6);
	init_mindustry_ui_Styles$6(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_grayt = sp[0].o;
	LINE_NUMBER(166);
	clinit_mindustry_ui_Styles$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$7);
	init_mindustry_ui_Styles$7(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_logict = sp[0].o;
	LINE_NUMBER(174);
	clinit_mindustry_ui_Styles$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$8);
	init_mindustry_ui_Styles$8(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flatBordert = sp[0].o;
	LINE_NUMBER(182);
	clinit_mindustry_ui_Styles$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$9);
	init_mindustry_ui_Styles$9(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_cleart = sp[0].o;
	LINE_NUMBER(190);
	clinit_mindustry_ui_Styles$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$10);
	init_mindustry_ui_Styles$10(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flatTogglet = sp[0].o;
	LINE_NUMBER(200);
	clinit_mindustry_ui_Styles$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$11);
	init_mindustry_ui_Styles$11(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_logicTogglet = sp[0].o;
	LINE_NUMBER(210);
	clinit_mindustry_ui_Styles$12(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$12);
	init_mindustry_ui_Styles$12(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flatToggleMenut = sp[0].o;
	LINE_NUMBER(220);
	clinit_mindustry_ui_Styles$13(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$13);
	init_mindustry_ui_Styles$13(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_togglet = sp[0].o;
	LINE_NUMBER(230);
	clinit_mindustry_ui_Styles$14(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$14);
	init_mindustry_ui_Styles$14(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_clearTogglet = sp[0].o;
	LINE_NUMBER(240);
	clinit_mindustry_ui_Styles$15(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$15);
	init_mindustry_ui_Styles$15(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_fullTogglet = sp[0].o;
	LINE_NUMBER(250);
	clinit_mindustry_ui_Styles$16(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$16);
	init_mindustry_ui_Styles$16(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_squareTogglet = sp[0].o;
	LINE_NUMBER(260);
	clinit_mindustry_ui_Styles$17(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$17);
	init_mindustry_ui_Styles$17(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaulti = sp[0].o;
	LINE_NUMBER(268);
	clinit_mindustry_ui_Styles$18(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$18);
	init_mindustry_ui_Styles$18(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_nodei = sp[0].o;
	LINE_NUMBER(272);
	clinit_mindustry_ui_Styles$19(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$19);
	init_mindustry_ui_Styles$19(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_emptyi = sp[0].o;
	LINE_NUMBER(277);
	clinit_mindustry_ui_Styles$20(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$20);
	init_mindustry_ui_Styles$20(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_emptyTogglei = sp[0].o;
	LINE_NUMBER(283);
	clinit_mindustry_ui_Styles$21(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$21);
	init_mindustry_ui_Styles$21(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_selecti = sp[0].o;
	LINE_NUMBER(287);
	clinit_mindustry_ui_Styles$22(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$22);
	init_mindustry_ui_Styles$22(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_logici = sp[0].o;
	LINE_NUMBER(290);
	clinit_mindustry_ui_Styles$23(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$23);
	init_mindustry_ui_Styles$23(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_geni = sp[0].o;
	LINE_NUMBER(294);
	clinit_mindustry_ui_Styles$24(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$24);
	init_mindustry_ui_Styles$24(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_grayi = sp[0].o;
	LINE_NUMBER(298);
	clinit_mindustry_ui_Styles$25(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$25);
	init_mindustry_ui_Styles$25(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_graySquarei = sp[0].o;
	LINE_NUMBER(306);
	clinit_mindustry_ui_Styles$26(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$26);
	init_mindustry_ui_Styles$26(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_flati = sp[0].o;
	LINE_NUMBER(311);
	clinit_mindustry_ui_Styles$27(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$27);
	init_mindustry_ui_Styles$27_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (frame[0].o));
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_squarei = sp[0].o;
	LINE_NUMBER(316);
	clinit_mindustry_ui_Styles$28(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$28);
	init_mindustry_ui_Styles$28(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_clearNonei = sp[0].o;
	LINE_NUMBER(324);
	clinit_mindustry_ui_Styles$29(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$29);
	init_mindustry_ui_Styles$29(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_squareTogglei = sp[0].o;
	LINE_NUMBER(330);
	clinit_mindustry_ui_Styles$30(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$30);
	init_mindustry_ui_Styles$30(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_grayTogglei = sp[0].o;
	LINE_NUMBER(337);
	clinit_mindustry_ui_Styles$31(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$31);
	init_mindustry_ui_Styles$31(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_cleari = sp[0].o;
	LINE_NUMBER(345);
	clinit_mindustry_ui_Styles$32(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$32);
	init_mindustry_ui_Styles$32(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_clearTogglei = sp[0].o;
	LINE_NUMBER(351);
	clinit_mindustry_ui_Styles$33(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$33);
	init_mindustry_ui_Styles$33(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_clearNoneTogglei = sp[0].o;
	LINE_NUMBER(358);
	clinit_mindustry_ui_Styles$34(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$34);
	init_mindustry_ui_Styles$34(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultPane = sp[0].o;
	LINE_NUMBER(362);
	clinit_mindustry_ui_Styles$35(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$35);
	init_mindustry_ui_Styles$35(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_horizontalPane = sp[0].o;
	LINE_NUMBER(368);
	clinit_mindustry_ui_Styles$36(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$36);
	init_mindustry_ui_Styles$36(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_smallPane = sp[0].o;
	LINE_NUMBER(372);
	clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane$ScrollPaneStyle);
	init_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_noBarPane = sp[0].o;
	LINE_NUMBER(374);
	clinit_mindustry_ui_Styles$37(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$37);
	init_mindustry_ui_Styles$37(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultSlider = sp[0].o;
	LINE_NUMBER(381);
	clinit_mindustry_ui_Styles$38(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$38);
	init_mindustry_ui_Styles$38(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultLabel = sp[0].o;
	LINE_NUMBER(385);
	clinit_mindustry_ui_Styles$39(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$39);
	init_mindustry_ui_Styles$39(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_outlineLabel = sp[0].o;
	LINE_NUMBER(389);
	clinit_mindustry_ui_Styles$40(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$40);
	init_mindustry_ui_Styles$40(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_techLabel = sp[0].o;
	LINE_NUMBER(393);
	clinit_mindustry_ui_Styles$41(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$41);
	init_mindustry_ui_Styles$41(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_monoLabel = sp[0].o;
	LINE_NUMBER(398);
	clinit_mindustry_ui_Styles$42(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$42);
	init_mindustry_ui_Styles$42(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultField = sp[0].o;
	LINE_NUMBER(411);
	clinit_mindustry_ui_Styles$43(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$43);
	init_mindustry_ui_Styles$43(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_nodeField = sp[0].o;
	LINE_NUMBER(424);
	clinit_mindustry_ui_Styles$44(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$44);
	init_mindustry_ui_Styles$44(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_areaField = sp[0].o;
	LINE_NUMBER(435);
	clinit_mindustry_ui_Styles$45(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$45);
	init_mindustry_ui_Styles$45(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_nodeArea = sp[0].o;
	LINE_NUMBER(446);
	clinit_mindustry_ui_Styles$46(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$46);
	init_mindustry_ui_Styles$46(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultCheck = sp[0].o;
	LINE_NUMBER(458);
	clinit_mindustry_ui_Styles$47(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$47);
	init_mindustry_ui_Styles$47(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultDialog = sp[0].o;
	LINE_NUMBER(464);
	clinit_mindustry_ui_Styles$48(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$48);
	init_mindustry_ui_Styles$48(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_fullDialog = sp[0].o;
	LINE_NUMBER(471);
	clinit_mindustry_ui_Styles$49(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$49);
	init_mindustry_ui_Styles$49(ctx, sp[0].o);
	clinit_mindustry_ui_Styles(ctx);
	SF_mindustry_ui_Styles_defaultTree = sp[0].o;
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Styles_createFlatDown_R_arc_scene_style_Drawable(jcontext ctx) {
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles:createFlatDown", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Styles(ctx);
	{
	LINE_NUMBER(480);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flat-down-base"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_splits;
	frame[1].o = sp[0].o;
	LINE_NUMBER(483);
	clinit_mindustry_ui_Styles$50(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Styles$50);
	clinit_arc_graphics_g2d_NinePatch(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_NinePatch);
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1)))), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2)))), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(3)))));
	init_mindustry_ui_Styles$50_arc_graphics_g2d_NinePatch(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(489);
	((func_arc_scene_style_ScaledNinePatchDrawable_setMinWidth_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setMinWidth_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(490);
	((func_arc_scene_style_ScaledNinePatchDrawable_setMinHeight_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setMinHeight_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(491);
	((func_arc_scene_style_ScaledNinePatchDrawable_setTopHeight_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setTopHeight_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(492);
	((func_arc_scene_style_ScaledNinePatchDrawable_setRightWidth_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setRightWidth_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(493);
	((func_arc_scene_style_ScaledNinePatchDrawable_setBottomHeight_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setBottomHeight_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(494);
	((func_arc_scene_style_ScaledNinePatchDrawable_setLeftWidth_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setLeftWidth_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Styles[] {
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
	{ "black", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_black, "Larc/scene/style/Drawable;", 9 },
	{ "black9", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_black9, "Larc/scene/style/Drawable;", 9 },
	{ "black8", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_black8, "Larc/scene/style/Drawable;", 9 },
	{ "black6", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_black6, "Larc/scene/style/Drawable;", 9 },
	{ "black3", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_black3, "Larc/scene/style/Drawable;", 9 },
	{ "black5", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_black5, "Larc/scene/style/Drawable;", 9 },
	{ "grayPanel", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_grayPanel, "Larc/scene/style/Drawable;", 9 },
	{ "grayPanelDark", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_grayPanelDark, "Larc/scene/style/Drawable;", 9 },
	{ "none", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_none, "Larc/scene/style/Drawable;", 9 },
	{ "flatDown", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_flatDown, "Larc/scene/style/Drawable;", 9 },
	{ "flatOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_flatOver, "Larc/scene/style/Drawable;", 9 },
	{ "accentDrawable", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_ui_Styles_accentDrawable, "Larc/scene/style/Drawable;", 9 },
	{ "defaultb", &class_arc_scene_ui_Button$ButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultb, "Larc/scene/ui/Button$ButtonStyle;", 9 },
	{ "underlineb", &class_arc_scene_ui_Button$ButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_underlineb, "Larc/scene/ui/Button$ButtonStyle;", 9 },
	{ "defaultt", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultt, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "flatt", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_flatt, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "grayt", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_grayt, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "flatTogglet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_flatTogglet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "flatBordert", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_flatBordert, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "nonet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_nonet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "logicTogglet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_logicTogglet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "flatToggleMenut", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_flatToggleMenut, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "togglet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_togglet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "cleart", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_cleart, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "clearTogglet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_clearTogglet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "fullTogglet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_fullTogglet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "squareTogglet", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_squareTogglet, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "logict", &class_arc_scene_ui_TextButton$TextButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_logict, "Larc/scene/ui/TextButton$TextButtonStyle;", 9 },
	{ "defaulti", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_defaulti, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "nodei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_nodei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "emptyi", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_emptyi, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "emptyTogglei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_emptyTogglei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "selecti", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_selecti, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "logici", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_logici, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "geni", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_geni, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "grayi", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_grayi, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "graySquarei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_graySquarei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "flati", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_flati, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "squarei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_squarei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "squareTogglei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_squareTogglei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "grayTogglei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_grayTogglei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "clearNonei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_clearNonei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "cleari", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_cleari, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "clearTogglei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_clearTogglei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "clearNoneTogglei", &class_arc_scene_ui_ImageButton$ImageButtonStyle, (intptr_t) &SF_mindustry_ui_Styles_clearNoneTogglei, "Larc/scene/ui/ImageButton$ImageButtonStyle;", 9 },
	{ "defaultPane", &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultPane, "Larc/scene/ui/ScrollPane$ScrollPaneStyle;", 9 },
	{ "horizontalPane", &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, (intptr_t) &SF_mindustry_ui_Styles_horizontalPane, "Larc/scene/ui/ScrollPane$ScrollPaneStyle;", 9 },
	{ "smallPane", &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, (intptr_t) &SF_mindustry_ui_Styles_smallPane, "Larc/scene/ui/ScrollPane$ScrollPaneStyle;", 9 },
	{ "noBarPane", &class_arc_scene_ui_ScrollPane$ScrollPaneStyle, (intptr_t) &SF_mindustry_ui_Styles_noBarPane, "Larc/scene/ui/ScrollPane$ScrollPaneStyle;", 9 },
	{ "defaultSlider", &class_arc_scene_ui_Slider$SliderStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultSlider, "Larc/scene/ui/Slider$SliderStyle;", 9 },
	{ "defaultLabel", &class_arc_scene_ui_Label$LabelStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultLabel, "Larc/scene/ui/Label$LabelStyle;", 9 },
	{ "outlineLabel", &class_arc_scene_ui_Label$LabelStyle, (intptr_t) &SF_mindustry_ui_Styles_outlineLabel, "Larc/scene/ui/Label$LabelStyle;", 9 },
	{ "techLabel", &class_arc_scene_ui_Label$LabelStyle, (intptr_t) &SF_mindustry_ui_Styles_techLabel, "Larc/scene/ui/Label$LabelStyle;", 9 },
	{ "monoLabel", &class_arc_scene_ui_Label$LabelStyle, (intptr_t) &SF_mindustry_ui_Styles_monoLabel, "Larc/scene/ui/Label$LabelStyle;", 9 },
	{ "defaultField", &class_arc_scene_ui_TextField$TextFieldStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultField, "Larc/scene/ui/TextField$TextFieldStyle;", 9 },
	{ "nodeField", &class_arc_scene_ui_TextField$TextFieldStyle, (intptr_t) &SF_mindustry_ui_Styles_nodeField, "Larc/scene/ui/TextField$TextFieldStyle;", 9 },
	{ "areaField", &class_arc_scene_ui_TextField$TextFieldStyle, (intptr_t) &SF_mindustry_ui_Styles_areaField, "Larc/scene/ui/TextField$TextFieldStyle;", 9 },
	{ "nodeArea", &class_arc_scene_ui_TextField$TextFieldStyle, (intptr_t) &SF_mindustry_ui_Styles_nodeArea, "Larc/scene/ui/TextField$TextFieldStyle;", 9 },
	{ "defaultCheck", &class_arc_scene_ui_CheckBox$CheckBoxStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultCheck, "Larc/scene/ui/CheckBox$CheckBoxStyle;", 9 },
	{ "defaultDialog", &class_arc_scene_ui_Dialog$DialogStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultDialog, "Larc/scene/ui/Dialog$DialogStyle;", 9 },
	{ "fullDialog", &class_arc_scene_ui_Dialog$DialogStyle, (intptr_t) &SF_mindustry_ui_Styles_fullDialog, "Larc/scene/ui/Dialog$DialogStyle;", 9 },
	{ "defaultTree", &class_arc_scene_ui_TreeElement$TreeStyle, (intptr_t) &SF_mindustry_ui_Styles_defaultTree, "Larc/scene/ui/TreeElement$TreeStyle;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Styles, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_ui_Styles_load, 0, "()V", 9 },
	{ "createFlatDown", (intptr_t) SM_mindustry_ui_Styles_createFlatDown_R_arc_scene_style_Drawable, 0, "()Larc/scene/style/Drawable;", 10 },
};

Class class_mindustry_ui_Styles{
		.nativeName = (intptr_t) "mindustry/ui/Styles",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_Styles),
		.classVtable = (intptr_t) vtable_mindustry_ui_Styles,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Styles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Styles,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 62,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Styles = registerClass(&class_mindustry_ui_Styles);

}
