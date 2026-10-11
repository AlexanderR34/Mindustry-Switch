#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "mindustry/gen/Tex.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/ui/Slider_SliderStyle.h"
#include "arc/scene/ui/CheckBox_CheckBoxStyle.h"
#include "mindustry/ui/Styles.h"
#include "arc/scene/ui/Dialog_DialogStyle.h"
#include "arc/scene/Scene.h"
#include "arc/scene/ui/TreeElement_TreeStyle.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "java/lang/String.h"
#include "arc/scene/ui/TextField_TextFieldStyle.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Class.h"
#include "arc/scene/ui/Button_ButtonStyle.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"

extern "C" {

jobject SF_mindustry_gen_Tex_alphaBgLine;
jobject SF_mindustry_gen_Tex_alphaBg;
jobject SF_mindustry_gen_Tex_alphaaaa;
jobject SF_mindustry_gen_Tex_barTop;
jobject SF_mindustry_gen_Tex_bar;
jobject SF_mindustry_gen_Tex_buttonDisabled;
jobject SF_mindustry_gen_Tex_buttonDown;
jobject SF_mindustry_gen_Tex_buttonEdge1;
jobject SF_mindustry_gen_Tex_buttonEdge2;
jobject SF_mindustry_gen_Tex_buttonEdge3;
jobject SF_mindustry_gen_Tex_buttonEdge4;
jobject SF_mindustry_gen_Tex_buttonEdgeDown1;
jobject SF_mindustry_gen_Tex_buttonEdgeDown3;
jobject SF_mindustry_gen_Tex_buttonEdgeOver1;
jobject SF_mindustry_gen_Tex_buttonEdgeOver3;
jobject SF_mindustry_gen_Tex_buttonEdgeOver4;
jobject SF_mindustry_gen_Tex_buttonOver;
jobject SF_mindustry_gen_Tex_buttonRed;
jobject SF_mindustry_gen_Tex_buttonRightDisabled;
jobject SF_mindustry_gen_Tex_buttonRightDown;
jobject SF_mindustry_gen_Tex_buttonRightOver;
jobject SF_mindustry_gen_Tex_buttonRight;
jobject SF_mindustry_gen_Tex_buttonSelectTrans;
jobject SF_mindustry_gen_Tex_buttonSelect;
jobject SF_mindustry_gen_Tex_buttonSideLeftDown;
jobject SF_mindustry_gen_Tex_buttonSideLeftOver;
jobject SF_mindustry_gen_Tex_buttonSideLeft;
jobject SF_mindustry_gen_Tex_buttonSideRightDown;
jobject SF_mindustry_gen_Tex_buttonSideRightOver;
jobject SF_mindustry_gen_Tex_buttonSideRight;
jobject SF_mindustry_gen_Tex_buttonTrans;
jobject SF_mindustry_gen_Tex_button;
jobject SF_mindustry_gen_Tex_cat;
jobject SF_mindustry_gen_Tex_checkDisabled;
jobject SF_mindustry_gen_Tex_checkOff;
jobject SF_mindustry_gen_Tex_checkOnDisabled;
jobject SF_mindustry_gen_Tex_checkOnOver;
jobject SF_mindustry_gen_Tex_checkOn;
jobject SF_mindustry_gen_Tex_checkOver;
jobject SF_mindustry_gen_Tex_clear;
jobject SF_mindustry_gen_Tex_crater;
jobject SF_mindustry_gen_Tex_cursor;
jobject SF_mindustry_gen_Tex_discordBanner;
jobject SF_mindustry_gen_Tex_flatAngled;
jobject SF_mindustry_gen_Tex_flatDownBase;
jobject SF_mindustry_gen_Tex_infoBanner;
jobject SF_mindustry_gen_Tex_inventory;
jobject SF_mindustry_gen_Tex_logicNode;
jobject SF_mindustry_gen_Tex_logo;
jobject SF_mindustry_gen_Tex_nomap;
jobject SF_mindustry_gen_Tex_pane2;
jobject SF_mindustry_gen_Tex_paneLeft;
jobject SF_mindustry_gen_Tex_paneRight;
jobject SF_mindustry_gen_Tex_paneSolid;
jobject SF_mindustry_gen_Tex_paneTop;
jobject SF_mindustry_gen_Tex_pane;
jobject SF_mindustry_gen_Tex_ranai;
jobject SF_mindustry_gen_Tex_scrollHorizontal;
jobject SF_mindustry_gen_Tex_scrollKnobHorizontalBlack;
jobject SF_mindustry_gen_Tex_scrollKnobVerticalBlack;
jobject SF_mindustry_gen_Tex_scrollKnobVerticalThin;
jobject SF_mindustry_gen_Tex_scroll;
jobject SF_mindustry_gen_Tex_sectorAegis;
jobject SF_mindustry_gen_Tex_sectorAtlas;
jobject SF_mindustry_gen_Tex_sectorAtolls;
jobject SF_mindustry_gen_Tex_sectorBasin;
jobject SF_mindustry_gen_Tex_sectorBiomassFacility;
jobject SF_mindustry_gen_Tex_sectorCalderaErekir;
jobject SF_mindustry_gen_Tex_sectorCoastline;
jobject SF_mindustry_gen_Tex_sectorCrateredBattleground;
jobject SF_mindustry_gen_Tex_sectorCrevice;
jobject SF_mindustry_gen_Tex_sectorCrossroads;
jobject SF_mindustry_gen_Tex_sectorCruxscape;
jobject SF_mindustry_gen_Tex_sectorDesolateRift;
jobject SF_mindustry_gen_Tex_sectorExtractionOutpost;
jobject SF_mindustry_gen_Tex_sectorFacility32m;
jobject SF_mindustry_gen_Tex_sectorFallenVessel;
jobject SF_mindustry_gen_Tex_sectorFrontier;
jobject SF_mindustry_gen_Tex_sectorFrozenForest;
jobject SF_mindustry_gen_Tex_sectorFungalPass;
jobject SF_mindustry_gen_Tex_sectorGeothermalStronghold;
jobject SF_mindustry_gen_Tex_sectorGroundZero;
jobject SF_mindustry_gen_Tex_sectorImpact0078;
jobject SF_mindustry_gen_Tex_sectorInfestedCanyons;
jobject SF_mindustry_gen_Tex_sectorIntersect;
jobject SF_mindustry_gen_Tex_sectorKarst;
jobject SF_mindustry_gen_Tex_sectorLake;
jobject SF_mindustry_gen_Tex_sectorLittoralShipyard;
jobject SF_mindustry_gen_Tex_sectorMarsh;
jobject SF_mindustry_gen_Tex_sectorMycelialBastion;
jobject SF_mindustry_gen_Tex_sectorNavalFortress;
jobject SF_mindustry_gen_Tex_sectorNuclearComplex;
jobject SF_mindustry_gen_Tex_sectorOnset;
jobject SF_mindustry_gen_Tex_sectorOrigin;
jobject SF_mindustry_gen_Tex_sectorOvergrowth;
jobject SF_mindustry_gen_Tex_sectorPeaks;
jobject SF_mindustry_gen_Tex_sectorPerilousHarbor;
jobject SF_mindustry_gen_Tex_sectorPlanetaryTerminal;
jobject SF_mindustry_gen_Tex_sectorRavine;
jobject SF_mindustry_gen_Tex_sectorRuinousShores;
jobject SF_mindustry_gen_Tex_sectorSaltFlats;
jobject SF_mindustry_gen_Tex_sectorSiege;
jobject SF_mindustry_gen_Tex_sectorSplit;
jobject SF_mindustry_gen_Tex_sectorStainedMountains;
jobject SF_mindustry_gen_Tex_sectorStronghold;
jobject SF_mindustry_gen_Tex_sectorSunkenPier;
jobject SF_mindustry_gen_Tex_sectorTaintedWoods;
jobject SF_mindustry_gen_Tex_sectorTarFields;
jobject SF_mindustry_gen_Tex_sectorTestingGrounds;
jobject SF_mindustry_gen_Tex_sectorWeatheredChannels;
jobject SF_mindustry_gen_Tex_sectorWindsweptIslands;
jobject SF_mindustry_gen_Tex_selection;
jobject SF_mindustry_gen_Tex_sidelineOver;
jobject SF_mindustry_gen_Tex_sideline;
jobject SF_mindustry_gen_Tex_sliderBack;
jobject SF_mindustry_gen_Tex_sliderKnobDown;
jobject SF_mindustry_gen_Tex_sliderKnobOver;
jobject SF_mindustry_gen_Tex_sliderKnob;
jobject SF_mindustry_gen_Tex_slider;
jobject SF_mindustry_gen_Tex_underline2;
jobject SF_mindustry_gen_Tex_underlineDisabled;
jobject SF_mindustry_gen_Tex_underlineOver;
jobject SF_mindustry_gen_Tex_underlineRed;
jobject SF_mindustry_gen_Tex_underlineWhite;
jobject SF_mindustry_gen_Tex_underline;
jobject SF_mindustry_gen_Tex_wavepane;
jobject SF_mindustry_gen_Tex_whitePane;
jobject SF_mindustry_gen_Tex_whiteui;
jobject SF_mindustry_gen_Tex_windowEmpty;

void mark_mindustry_gen_Tex(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Tex_alphaBgLine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_alphaBgLine)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_alphaBgLine, mark, depth + 1);
		if (SF_mindustry_gen_Tex_alphaBg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_alphaBg)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_alphaBg, mark, depth + 1);
		if (SF_mindustry_gen_Tex_alphaaaa)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_alphaaaa)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_alphaaaa, mark, depth + 1);
		if (SF_mindustry_gen_Tex_barTop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_barTop)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_barTop, mark, depth + 1);
		if (SF_mindustry_gen_Tex_bar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_bar)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_bar, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonDisabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonDisabled)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonDisabled, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonDown)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonDown, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdge1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdge1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdge1, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdge2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdge2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdge2, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdge3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdge3)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdge3, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdge4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdge4)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdge4, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdgeDown1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdgeDown1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdgeDown1, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdgeDown3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdgeDown3)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdgeDown3, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdgeOver1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdgeOver1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdgeOver1, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdgeOver3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdgeOver3)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdgeOver3, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonEdgeOver4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonEdgeOver4)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonEdgeOver4, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonRed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonRed)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonRed, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonRightDisabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonRightDisabled)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonRightDisabled, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonRightDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonRightDown)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonRightDown, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonRightOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonRightOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonRightOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonRight)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonRight, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSelectTrans)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSelectTrans)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSelectTrans, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSelect)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSelect, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSideLeftDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSideLeftDown)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSideLeftDown, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSideLeftOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSideLeftOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSideLeftOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSideLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSideLeft)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSideLeft, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSideRightDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSideRightDown)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSideRightDown, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSideRightOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSideRightOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSideRightOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonSideRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonSideRight)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonSideRight, mark, depth + 1);
		if (SF_mindustry_gen_Tex_buttonTrans)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_buttonTrans)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_buttonTrans, mark, depth + 1);
		if (SF_mindustry_gen_Tex_button)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_button)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_button, mark, depth + 1);
		if (SF_mindustry_gen_Tex_cat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_cat)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_cat, mark, depth + 1);
		if (SF_mindustry_gen_Tex_checkDisabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_checkDisabled)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_checkDisabled, mark, depth + 1);
		if (SF_mindustry_gen_Tex_checkOff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_checkOff)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_checkOff, mark, depth + 1);
		if (SF_mindustry_gen_Tex_checkOnDisabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_checkOnDisabled)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_checkOnDisabled, mark, depth + 1);
		if (SF_mindustry_gen_Tex_checkOnOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_checkOnOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_checkOnOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_checkOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_checkOn)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_checkOn, mark, depth + 1);
		if (SF_mindustry_gen_Tex_checkOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_checkOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_checkOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_clear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_clear)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_clear, mark, depth + 1);
		if (SF_mindustry_gen_Tex_crater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_crater)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_crater, mark, depth + 1);
		if (SF_mindustry_gen_Tex_cursor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_cursor)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_cursor, mark, depth + 1);
		if (SF_mindustry_gen_Tex_discordBanner)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_discordBanner)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_discordBanner, mark, depth + 1);
		if (SF_mindustry_gen_Tex_flatAngled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_flatAngled)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_flatAngled, mark, depth + 1);
		if (SF_mindustry_gen_Tex_flatDownBase)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_flatDownBase)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_flatDownBase, mark, depth + 1);
		if (SF_mindustry_gen_Tex_infoBanner)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_infoBanner)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_infoBanner, mark, depth + 1);
		if (SF_mindustry_gen_Tex_inventory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_inventory)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_inventory, mark, depth + 1);
		if (SF_mindustry_gen_Tex_logicNode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_logicNode)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_logicNode, mark, depth + 1);
		if (SF_mindustry_gen_Tex_logo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_logo)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_logo, mark, depth + 1);
		if (SF_mindustry_gen_Tex_nomap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_nomap)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_nomap, mark, depth + 1);
		if (SF_mindustry_gen_Tex_pane2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_pane2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_pane2, mark, depth + 1);
		if (SF_mindustry_gen_Tex_paneLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_paneLeft)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_paneLeft, mark, depth + 1);
		if (SF_mindustry_gen_Tex_paneRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_paneRight)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_paneRight, mark, depth + 1);
		if (SF_mindustry_gen_Tex_paneSolid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_paneSolid)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_paneSolid, mark, depth + 1);
		if (SF_mindustry_gen_Tex_paneTop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_paneTop)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_paneTop, mark, depth + 1);
		if (SF_mindustry_gen_Tex_pane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_pane)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_pane, mark, depth + 1);
		if (SF_mindustry_gen_Tex_ranai)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_ranai)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_ranai, mark, depth + 1);
		if (SF_mindustry_gen_Tex_scrollHorizontal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_scrollHorizontal)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_scrollHorizontal, mark, depth + 1);
		if (SF_mindustry_gen_Tex_scrollKnobHorizontalBlack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_scrollKnobHorizontalBlack)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_scrollKnobHorizontalBlack, mark, depth + 1);
		if (SF_mindustry_gen_Tex_scrollKnobVerticalBlack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_scrollKnobVerticalBlack)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_scrollKnobVerticalBlack, mark, depth + 1);
		if (SF_mindustry_gen_Tex_scrollKnobVerticalThin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_scrollKnobVerticalThin)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_scrollKnobVerticalThin, mark, depth + 1);
		if (SF_mindustry_gen_Tex_scroll)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_scroll)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_scroll, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorAegis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorAegis)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorAegis, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorAtlas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorAtlas)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorAtlas, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorAtolls)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorAtolls)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorAtolls, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorBasin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorBasin)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorBasin, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorBiomassFacility)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorBiomassFacility)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorBiomassFacility, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorCalderaErekir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorCalderaErekir)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorCalderaErekir, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorCoastline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorCoastline)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorCoastline, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorCrateredBattleground)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorCrateredBattleground)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorCrateredBattleground, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorCrevice)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorCrevice)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorCrevice, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorCrossroads)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorCrossroads)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorCrossroads, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorCruxscape)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorCruxscape)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorCruxscape, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorDesolateRift)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorDesolateRift)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorDesolateRift, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorExtractionOutpost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorExtractionOutpost)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorExtractionOutpost, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorFacility32m)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorFacility32m)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorFacility32m, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorFallenVessel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorFallenVessel)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorFallenVessel, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorFrontier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorFrontier)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorFrontier, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorFrozenForest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorFrozenForest)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorFrozenForest, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorFungalPass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorFungalPass)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorFungalPass, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorGeothermalStronghold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorGeothermalStronghold)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorGeothermalStronghold, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorGroundZero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorGroundZero)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorGroundZero, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorImpact0078)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorImpact0078)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorImpact0078, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorInfestedCanyons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorInfestedCanyons)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorInfestedCanyons, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorIntersect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorIntersect)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorIntersect, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorKarst)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorKarst)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorKarst, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorLake)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorLake)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorLake, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorLittoralShipyard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorLittoralShipyard)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorLittoralShipyard, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorMarsh)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorMarsh)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorMarsh, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorMycelialBastion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorMycelialBastion)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorMycelialBastion, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorNavalFortress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorNavalFortress)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorNavalFortress, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorNuclearComplex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorNuclearComplex)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorNuclearComplex, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorOnset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorOnset)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorOnset, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorOrigin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorOrigin)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorOrigin, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorOvergrowth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorOvergrowth)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorOvergrowth, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorPeaks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorPeaks)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorPeaks, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorPerilousHarbor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorPerilousHarbor)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorPerilousHarbor, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorPlanetaryTerminal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorPlanetaryTerminal)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorPlanetaryTerminal, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorRavine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorRavine)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorRavine, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorRuinousShores)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorRuinousShores)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorRuinousShores, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorSaltFlats)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorSaltFlats)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorSaltFlats, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorSiege)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorSiege)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorSiege, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorSplit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorSplit)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorSplit, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorStainedMountains)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorStainedMountains)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorStainedMountains, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorStronghold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorStronghold)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorStronghold, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorSunkenPier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorSunkenPier)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorSunkenPier, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorTaintedWoods)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorTaintedWoods)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorTaintedWoods, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorTarFields)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorTarFields)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorTarFields, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorTestingGrounds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorTestingGrounds)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorTestingGrounds, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorWeatheredChannels)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorWeatheredChannels)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorWeatheredChannels, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sectorWindsweptIslands)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sectorWindsweptIslands)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sectorWindsweptIslands, mark, depth + 1);
		if (SF_mindustry_gen_Tex_selection)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_selection)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_selection, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sidelineOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sidelineOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sidelineOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sideline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sideline)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sideline, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sliderBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sliderBack)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sliderBack, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sliderKnobDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sliderKnobDown)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sliderKnobDown, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sliderKnobOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sliderKnobOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sliderKnobOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_sliderKnob)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_sliderKnob)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_sliderKnob, mark, depth + 1);
		if (SF_mindustry_gen_Tex_slider)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_slider)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_slider, mark, depth + 1);
		if (SF_mindustry_gen_Tex_underline2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_underline2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_underline2, mark, depth + 1);
		if (SF_mindustry_gen_Tex_underlineDisabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_underlineDisabled)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_underlineDisabled, mark, depth + 1);
		if (SF_mindustry_gen_Tex_underlineOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_underlineOver)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_underlineOver, mark, depth + 1);
		if (SF_mindustry_gen_Tex_underlineRed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_underlineRed)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_underlineRed, mark, depth + 1);
		if (SF_mindustry_gen_Tex_underlineWhite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_underlineWhite)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_underlineWhite, mark, depth + 1);
		if (SF_mindustry_gen_Tex_underline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_underline)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_underline, mark, depth + 1);
		if (SF_mindustry_gen_Tex_wavepane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_wavepane)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_wavepane, mark, depth + 1);
		if (SF_mindustry_gen_Tex_whitePane)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_whitePane)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_whitePane, mark, depth + 1);
		if (SF_mindustry_gen_Tex_whiteui)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_whiteui)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_whiteui, mark, depth + 1);
		if (SF_mindustry_gen_Tex_windowEmpty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Tex_windowEmpty)->clazz)->markFunction)((jobject) SF_mindustry_gen_Tex_windowEmpty, mark, depth + 1);
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
	auto self = (mindustry_gen_Tex *) object;
}

void clinit_mindustry_gen_Tex(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_Tex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Tex:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Tex(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Tex_load(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Tex:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Tex(ctx);
	{
	LINE_NUMBER(265);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alpha-bg-line"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_alphaBgLine = sp[0].o;
	LINE_NUMBER(266);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alpha-bg"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_alphaBg = sp[0].o;
	LINE_NUMBER(267);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alphaaaa"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_alphaaaa = sp[0].o;
	LINE_NUMBER(268);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bar-top"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_barTop = sp[0].o;
	LINE_NUMBER(269);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bar"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_bar = sp[0].o;
	LINE_NUMBER(270);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-disabled"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonDisabled = sp[0].o;
	LINE_NUMBER(271);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-down"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonDown = sp[0].o;
	LINE_NUMBER(272);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-1"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdge1 = sp[0].o;
	LINE_NUMBER(273);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-2"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdge2 = sp[0].o;
	LINE_NUMBER(274);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-3"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdge3 = sp[0].o;
	LINE_NUMBER(275);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-4"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdge4 = sp[0].o;
	LINE_NUMBER(276);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-down-1"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdgeDown1 = sp[0].o;
	LINE_NUMBER(277);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-down-3"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdgeDown3 = sp[0].o;
	LINE_NUMBER(278);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-over-1"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdgeOver1 = sp[0].o;
	LINE_NUMBER(279);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-over-3"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdgeOver3 = sp[0].o;
	LINE_NUMBER(280);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-edge-over-4"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonEdgeOver4 = sp[0].o;
	LINE_NUMBER(281);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonOver = sp[0].o;
	LINE_NUMBER(282);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-red"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonRed = sp[0].o;
	LINE_NUMBER(283);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-right-disabled"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonRightDisabled = sp[0].o;
	LINE_NUMBER(284);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-right-down"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonRightDown = sp[0].o;
	LINE_NUMBER(285);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-right-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonRightOver = sp[0].o;
	LINE_NUMBER(286);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-right"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonRight = sp[0].o;
	LINE_NUMBER(287);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-select-trans"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSelectTrans = sp[0].o;
	LINE_NUMBER(288);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-select"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSelect = sp[0].o;
	LINE_NUMBER(289);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-side-left-down"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSideLeftDown = sp[0].o;
	LINE_NUMBER(290);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-side-left-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSideLeftOver = sp[0].o;
	LINE_NUMBER(291);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-side-left"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSideLeft = sp[0].o;
	LINE_NUMBER(292);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-side-right-down"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSideRightDown = sp[0].o;
	LINE_NUMBER(293);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-side-right-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSideRightOver = sp[0].o;
	LINE_NUMBER(294);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-side-right"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonSideRight = sp[0].o;
	LINE_NUMBER(295);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button-trans"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_buttonTrans = sp[0].o;
	LINE_NUMBER(296);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"button"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_button = sp[0].o;
	LINE_NUMBER(297);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cat"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_cat = sp[0].o;
	LINE_NUMBER(298);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check-disabled"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_checkDisabled = sp[0].o;
	LINE_NUMBER(299);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check-off"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_checkOff = sp[0].o;
	LINE_NUMBER(300);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check-on-disabled"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_checkOnDisabled = sp[0].o;
	LINE_NUMBER(301);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check-on-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_checkOnOver = sp[0].o;
	LINE_NUMBER(302);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check-on"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_checkOn = sp[0].o;
	LINE_NUMBER(303);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"check-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_checkOver = sp[0].o;
	LINE_NUMBER(304);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"clear"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_clear = sp[0].o;
	LINE_NUMBER(305);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crater"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_crater = sp[0].o;
	LINE_NUMBER(306);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cursor"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_cursor = sp[0].o;
	LINE_NUMBER(307);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"discord-banner"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_discordBanner = sp[0].o;
	LINE_NUMBER(308);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flat-angled"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_flatAngled = sp[0].o;
	LINE_NUMBER(309);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flat-down-base"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_flatDownBase = sp[0].o;
	LINE_NUMBER(310);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"info-banner"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_infoBanner = sp[0].o;
	LINE_NUMBER(311);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"inventory"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_inventory = sp[0].o;
	LINE_NUMBER(312);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logic-node"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_logicNode = sp[0].o;
	LINE_NUMBER(313);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logo"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_logo = sp[0].o;
	LINE_NUMBER(314);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nomap"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_nomap = sp[0].o;
	LINE_NUMBER(315);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane-2"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_pane2 = sp[0].o;
	LINE_NUMBER(316);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane-left"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_paneLeft = sp[0].o;
	LINE_NUMBER(317);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane-right"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_paneRight = sp[0].o;
	LINE_NUMBER(318);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane-solid"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_paneSolid = sp[0].o;
	LINE_NUMBER(319);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane-top"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_paneTop = sp[0].o;
	LINE_NUMBER(320);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pane"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_pane = sp[0].o;
	LINE_NUMBER(321);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ranai"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_ranai = sp[0].o;
	LINE_NUMBER(322);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scroll-horizontal"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_scrollHorizontal = sp[0].o;
	LINE_NUMBER(323);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scroll-knob-horizontal-black"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_scrollKnobHorizontalBlack = sp[0].o;
	LINE_NUMBER(324);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scroll-knob-vertical-black"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_scrollKnobVerticalBlack = sp[0].o;
	LINE_NUMBER(325);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scroll-knob-vertical-thin"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_scrollKnobVerticalThin = sp[0].o;
	LINE_NUMBER(326);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scroll"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_scroll = sp[0].o;
	LINE_NUMBER(327);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-aegis"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorAegis = sp[0].o;
	LINE_NUMBER(328);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-atlas"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorAtlas = sp[0].o;
	LINE_NUMBER(329);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-atolls"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorAtolls = sp[0].o;
	LINE_NUMBER(330);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-basin"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorBasin = sp[0].o;
	LINE_NUMBER(331);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-biomassFacility"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorBiomassFacility = sp[0].o;
	LINE_NUMBER(332);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-caldera-erekir"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorCalderaErekir = sp[0].o;
	LINE_NUMBER(333);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-coastline"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorCoastline = sp[0].o;
	LINE_NUMBER(334);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-crateredBattleground"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorCrateredBattleground = sp[0].o;
	LINE_NUMBER(335);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-crevice"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorCrevice = sp[0].o;
	LINE_NUMBER(336);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-crossroads"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorCrossroads = sp[0].o;
	LINE_NUMBER(337);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-cruxscape"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorCruxscape = sp[0].o;
	LINE_NUMBER(338);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-desolateRift"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorDesolateRift = sp[0].o;
	LINE_NUMBER(339);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-extractionOutpost"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorExtractionOutpost = sp[0].o;
	LINE_NUMBER(340);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-facility32m"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorFacility32m = sp[0].o;
	LINE_NUMBER(341);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-fallenVessel"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorFallenVessel = sp[0].o;
	LINE_NUMBER(342);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-frontier"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorFrontier = sp[0].o;
	LINE_NUMBER(343);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-frozenForest"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorFrozenForest = sp[0].o;
	LINE_NUMBER(344);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-fungalPass"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorFungalPass = sp[0].o;
	LINE_NUMBER(345);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-geothermalStronghold"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorGeothermalStronghold = sp[0].o;
	LINE_NUMBER(346);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-groundZero"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorGroundZero = sp[0].o;
	LINE_NUMBER(347);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-impact0078"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorImpact0078 = sp[0].o;
	LINE_NUMBER(348);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-infestedCanyons"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorInfestedCanyons = sp[0].o;
	LINE_NUMBER(349);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-intersect"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorIntersect = sp[0].o;
	LINE_NUMBER(350);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-karst"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorKarst = sp[0].o;
	LINE_NUMBER(351);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-lake"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorLake = sp[0].o;
	LINE_NUMBER(352);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-littoralShipyard"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorLittoralShipyard = sp[0].o;
	LINE_NUMBER(353);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-marsh"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorMarsh = sp[0].o;
	LINE_NUMBER(354);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-mycelialBastion"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorMycelialBastion = sp[0].o;
	LINE_NUMBER(355);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-navalFortress"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorNavalFortress = sp[0].o;
	LINE_NUMBER(356);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-nuclearComplex"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorNuclearComplex = sp[0].o;
	LINE_NUMBER(357);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-onset"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorOnset = sp[0].o;
	LINE_NUMBER(358);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-origin"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorOrigin = sp[0].o;
	LINE_NUMBER(359);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-overgrowth"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorOvergrowth = sp[0].o;
	LINE_NUMBER(360);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-peaks"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorPeaks = sp[0].o;
	LINE_NUMBER(361);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-perilousHarbor"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorPerilousHarbor = sp[0].o;
	LINE_NUMBER(362);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-planetaryTerminal"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorPlanetaryTerminal = sp[0].o;
	LINE_NUMBER(363);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-ravine"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorRavine = sp[0].o;
	LINE_NUMBER(364);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-ruinousShores"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorRuinousShores = sp[0].o;
	LINE_NUMBER(365);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-saltFlats"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorSaltFlats = sp[0].o;
	LINE_NUMBER(366);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-siege"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorSiege = sp[0].o;
	LINE_NUMBER(367);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-split"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorSplit = sp[0].o;
	LINE_NUMBER(368);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-stainedMountains"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorStainedMountains = sp[0].o;
	LINE_NUMBER(369);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-stronghold"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorStronghold = sp[0].o;
	LINE_NUMBER(370);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-sunkenPier"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorSunkenPier = sp[0].o;
	LINE_NUMBER(371);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-taintedWoods"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorTaintedWoods = sp[0].o;
	LINE_NUMBER(372);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-tarFields"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorTarFields = sp[0].o;
	LINE_NUMBER(373);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-testingGrounds"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorTestingGrounds = sp[0].o;
	LINE_NUMBER(374);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-weatheredChannels"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorWeatheredChannels = sp[0].o;
	LINE_NUMBER(375);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sector-windsweptIslands"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sectorWindsweptIslands = sp[0].o;
	LINE_NUMBER(376);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"selection"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_selection = sp[0].o;
	LINE_NUMBER(377);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sideline-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sidelineOver = sp[0].o;
	LINE_NUMBER(378);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sideline"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sideline = sp[0].o;
	LINE_NUMBER(379);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slider-back"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sliderBack = sp[0].o;
	LINE_NUMBER(380);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slider-knob-down"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sliderKnobDown = sp[0].o;
	LINE_NUMBER(381);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slider-knob-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sliderKnobOver = sp[0].o;
	LINE_NUMBER(382);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slider-knob"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_sliderKnob = sp[0].o;
	LINE_NUMBER(383);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slider"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_slider = sp[0].o;
	LINE_NUMBER(384);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underline-2"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_underline2 = sp[0].o;
	LINE_NUMBER(385);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underline-disabled"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_underlineDisabled = sp[0].o;
	LINE_NUMBER(386);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underline-over"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_underlineOver = sp[0].o;
	LINE_NUMBER(387);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underline-red"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_underlineRed = sp[0].o;
	LINE_NUMBER(388);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underline-white"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_underlineWhite = sp[0].o;
	LINE_NUMBER(389);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underline"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_underline = sp[0].o;
	LINE_NUMBER(390);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wavepane"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_wavepane = sp[0].o;
	LINE_NUMBER(391);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"white-pane"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_whitePane = sp[0].o;
	LINE_NUMBER(392);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"whiteui"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_whiteui = sp[0].o;
	LINE_NUMBER(393);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"window-empty"_j))));
	clinit_mindustry_gen_Tex(ctx);
	SF_mindustry_gen_Tex_windowEmpty = sp[0].o;
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Tex_loadStyles(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Tex:loadStyles", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Tex(ctx);
	{
	LINE_NUMBER(397);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_Button$ButtonStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultb;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(398);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_TextButton$TextButtonStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultt;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(399);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaulti;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(400);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_ScrollPane$ScrollPaneStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultPane;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(401);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_Slider$SliderStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultSlider;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(402);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_Label$LabelStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultLabel;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(403);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_TextField$TextFieldStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultField;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(404);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_CheckBox$CheckBoxStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultCheck;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(405);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_Dialog$DialogStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultDialog;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(406);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[1].o = ((jobject) &class_arc_scene_ui_TreeElement$TreeStyle);
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_defaultTree;
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Tex[] {
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
	{ "alphaBgLine", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_alphaBgLine, "Larc/scene/style/Drawable;", 9 },
	{ "alphaBg", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_alphaBg, "Larc/scene/style/Drawable;", 9 },
	{ "alphaaaa", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_alphaaaa, "Larc/scene/style/Drawable;", 9 },
	{ "barTop", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_barTop, "Larc/scene/style/Drawable;", 9 },
	{ "bar", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_bar, "Larc/scene/style/Drawable;", 9 },
	{ "buttonDisabled", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonDisabled, "Larc/scene/style/Drawable;", 9 },
	{ "buttonDown", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonDown, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdge1", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdge1, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdge2", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdge2, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdge3", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdge3, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdge4", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdge4, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdgeDown1", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdgeDown1, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdgeDown3", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdgeDown3, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdgeOver1", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdgeOver1, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdgeOver3", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdgeOver3, "Larc/scene/style/Drawable;", 9 },
	{ "buttonEdgeOver4", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonEdgeOver4, "Larc/scene/style/Drawable;", 9 },
	{ "buttonOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonOver, "Larc/scene/style/Drawable;", 9 },
	{ "buttonRed", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonRed, "Larc/scene/style/Drawable;", 9 },
	{ "buttonRightDisabled", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonRightDisabled, "Larc/scene/style/Drawable;", 9 },
	{ "buttonRightDown", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonRightDown, "Larc/scene/style/Drawable;", 9 },
	{ "buttonRightOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonRightOver, "Larc/scene/style/Drawable;", 9 },
	{ "buttonRight", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonRight, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSelectTrans", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSelectTrans, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSelect", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSelect, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSideLeftDown", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSideLeftDown, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSideLeftOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSideLeftOver, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSideLeft", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSideLeft, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSideRightDown", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSideRightDown, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSideRightOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSideRightOver, "Larc/scene/style/Drawable;", 9 },
	{ "buttonSideRight", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonSideRight, "Larc/scene/style/Drawable;", 9 },
	{ "buttonTrans", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_buttonTrans, "Larc/scene/style/Drawable;", 9 },
	{ "button", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_button, "Larc/scene/style/Drawable;", 9 },
	{ "cat", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_cat, "Larc/scene/style/Drawable;", 9 },
	{ "checkDisabled", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_checkDisabled, "Larc/scene/style/Drawable;", 9 },
	{ "checkOff", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_checkOff, "Larc/scene/style/Drawable;", 9 },
	{ "checkOnDisabled", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_checkOnDisabled, "Larc/scene/style/Drawable;", 9 },
	{ "checkOnOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_checkOnOver, "Larc/scene/style/Drawable;", 9 },
	{ "checkOn", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_checkOn, "Larc/scene/style/Drawable;", 9 },
	{ "checkOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_checkOver, "Larc/scene/style/Drawable;", 9 },
	{ "clear", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_clear, "Larc/scene/style/Drawable;", 9 },
	{ "crater", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_crater, "Larc/scene/style/Drawable;", 9 },
	{ "cursor", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_cursor, "Larc/scene/style/Drawable;", 9 },
	{ "discordBanner", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_discordBanner, "Larc/scene/style/Drawable;", 9 },
	{ "flatAngled", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_flatAngled, "Larc/scene/style/Drawable;", 9 },
	{ "flatDownBase", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_flatDownBase, "Larc/scene/style/Drawable;", 9 },
	{ "infoBanner", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_infoBanner, "Larc/scene/style/Drawable;", 9 },
	{ "inventory", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_inventory, "Larc/scene/style/Drawable;", 9 },
	{ "logicNode", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_logicNode, "Larc/scene/style/Drawable;", 9 },
	{ "logo", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_logo, "Larc/scene/style/Drawable;", 9 },
	{ "nomap", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_nomap, "Larc/scene/style/Drawable;", 9 },
	{ "pane2", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_pane2, "Larc/scene/style/Drawable;", 9 },
	{ "paneLeft", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_paneLeft, "Larc/scene/style/Drawable;", 9 },
	{ "paneRight", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_paneRight, "Larc/scene/style/Drawable;", 9 },
	{ "paneSolid", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_paneSolid, "Larc/scene/style/Drawable;", 9 },
	{ "paneTop", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_paneTop, "Larc/scene/style/Drawable;", 9 },
	{ "pane", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_pane, "Larc/scene/style/Drawable;", 9 },
	{ "ranai", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_ranai, "Larc/scene/style/Drawable;", 9 },
	{ "scrollHorizontal", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_scrollHorizontal, "Larc/scene/style/Drawable;", 9 },
	{ "scrollKnobHorizontalBlack", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_scrollKnobHorizontalBlack, "Larc/scene/style/Drawable;", 9 },
	{ "scrollKnobVerticalBlack", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_scrollKnobVerticalBlack, "Larc/scene/style/Drawable;", 9 },
	{ "scrollKnobVerticalThin", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_scrollKnobVerticalThin, "Larc/scene/style/Drawable;", 9 },
	{ "scroll", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_scroll, "Larc/scene/style/Drawable;", 9 },
	{ "sectorAegis", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorAegis, "Larc/scene/style/Drawable;", 9 },
	{ "sectorAtlas", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorAtlas, "Larc/scene/style/Drawable;", 9 },
	{ "sectorAtolls", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorAtolls, "Larc/scene/style/Drawable;", 9 },
	{ "sectorBasin", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorBasin, "Larc/scene/style/Drawable;", 9 },
	{ "sectorBiomassFacility", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorBiomassFacility, "Larc/scene/style/Drawable;", 9 },
	{ "sectorCalderaErekir", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorCalderaErekir, "Larc/scene/style/Drawable;", 9 },
	{ "sectorCoastline", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorCoastline, "Larc/scene/style/Drawable;", 9 },
	{ "sectorCrateredBattleground", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorCrateredBattleground, "Larc/scene/style/Drawable;", 9 },
	{ "sectorCrevice", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorCrevice, "Larc/scene/style/Drawable;", 9 },
	{ "sectorCrossroads", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorCrossroads, "Larc/scene/style/Drawable;", 9 },
	{ "sectorCruxscape", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorCruxscape, "Larc/scene/style/Drawable;", 9 },
	{ "sectorDesolateRift", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorDesolateRift, "Larc/scene/style/Drawable;", 9 },
	{ "sectorExtractionOutpost", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorExtractionOutpost, "Larc/scene/style/Drawable;", 9 },
	{ "sectorFacility32m", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorFacility32m, "Larc/scene/style/Drawable;", 9 },
	{ "sectorFallenVessel", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorFallenVessel, "Larc/scene/style/Drawable;", 9 },
	{ "sectorFrontier", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorFrontier, "Larc/scene/style/Drawable;", 9 },
	{ "sectorFrozenForest", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorFrozenForest, "Larc/scene/style/Drawable;", 9 },
	{ "sectorFungalPass", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorFungalPass, "Larc/scene/style/Drawable;", 9 },
	{ "sectorGeothermalStronghold", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorGeothermalStronghold, "Larc/scene/style/Drawable;", 9 },
	{ "sectorGroundZero", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorGroundZero, "Larc/scene/style/Drawable;", 9 },
	{ "sectorImpact0078", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorImpact0078, "Larc/scene/style/Drawable;", 9 },
	{ "sectorInfestedCanyons", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorInfestedCanyons, "Larc/scene/style/Drawable;", 9 },
	{ "sectorIntersect", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorIntersect, "Larc/scene/style/Drawable;", 9 },
	{ "sectorKarst", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorKarst, "Larc/scene/style/Drawable;", 9 },
	{ "sectorLake", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorLake, "Larc/scene/style/Drawable;", 9 },
	{ "sectorLittoralShipyard", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorLittoralShipyard, "Larc/scene/style/Drawable;", 9 },
	{ "sectorMarsh", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorMarsh, "Larc/scene/style/Drawable;", 9 },
	{ "sectorMycelialBastion", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorMycelialBastion, "Larc/scene/style/Drawable;", 9 },
	{ "sectorNavalFortress", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorNavalFortress, "Larc/scene/style/Drawable;", 9 },
	{ "sectorNuclearComplex", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorNuclearComplex, "Larc/scene/style/Drawable;", 9 },
	{ "sectorOnset", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorOnset, "Larc/scene/style/Drawable;", 9 },
	{ "sectorOrigin", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorOrigin, "Larc/scene/style/Drawable;", 9 },
	{ "sectorOvergrowth", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorOvergrowth, "Larc/scene/style/Drawable;", 9 },
	{ "sectorPeaks", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorPeaks, "Larc/scene/style/Drawable;", 9 },
	{ "sectorPerilousHarbor", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorPerilousHarbor, "Larc/scene/style/Drawable;", 9 },
	{ "sectorPlanetaryTerminal", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorPlanetaryTerminal, "Larc/scene/style/Drawable;", 9 },
	{ "sectorRavine", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorRavine, "Larc/scene/style/Drawable;", 9 },
	{ "sectorRuinousShores", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorRuinousShores, "Larc/scene/style/Drawable;", 9 },
	{ "sectorSaltFlats", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorSaltFlats, "Larc/scene/style/Drawable;", 9 },
	{ "sectorSiege", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorSiege, "Larc/scene/style/Drawable;", 9 },
	{ "sectorSplit", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorSplit, "Larc/scene/style/Drawable;", 9 },
	{ "sectorStainedMountains", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorStainedMountains, "Larc/scene/style/Drawable;", 9 },
	{ "sectorStronghold", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorStronghold, "Larc/scene/style/Drawable;", 9 },
	{ "sectorSunkenPier", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorSunkenPier, "Larc/scene/style/Drawable;", 9 },
	{ "sectorTaintedWoods", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorTaintedWoods, "Larc/scene/style/Drawable;", 9 },
	{ "sectorTarFields", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorTarFields, "Larc/scene/style/Drawable;", 9 },
	{ "sectorTestingGrounds", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorTestingGrounds, "Larc/scene/style/Drawable;", 9 },
	{ "sectorWeatheredChannels", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorWeatheredChannels, "Larc/scene/style/Drawable;", 9 },
	{ "sectorWindsweptIslands", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sectorWindsweptIslands, "Larc/scene/style/Drawable;", 9 },
	{ "selection", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_selection, "Larc/scene/style/Drawable;", 9 },
	{ "sidelineOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sidelineOver, "Larc/scene/style/Drawable;", 9 },
	{ "sideline", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sideline, "Larc/scene/style/Drawable;", 9 },
	{ "sliderBack", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sliderBack, "Larc/scene/style/Drawable;", 9 },
	{ "sliderKnobDown", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sliderKnobDown, "Larc/scene/style/Drawable;", 9 },
	{ "sliderKnobOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sliderKnobOver, "Larc/scene/style/Drawable;", 9 },
	{ "sliderKnob", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_sliderKnob, "Larc/scene/style/Drawable;", 9 },
	{ "slider", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_slider, "Larc/scene/style/Drawable;", 9 },
	{ "underline2", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_underline2, "Larc/scene/style/Drawable;", 9 },
	{ "underlineDisabled", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_underlineDisabled, "Larc/scene/style/Drawable;", 9 },
	{ "underlineOver", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_underlineOver, "Larc/scene/style/Drawable;", 9 },
	{ "underlineRed", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_underlineRed, "Larc/scene/style/Drawable;", 9 },
	{ "underlineWhite", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_underlineWhite, "Larc/scene/style/Drawable;", 9 },
	{ "underline", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_underline, "Larc/scene/style/Drawable;", 9 },
	{ "wavepane", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_wavepane, "Larc/scene/style/Drawable;", 9 },
	{ "whitePane", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_whitePane, "Larc/scene/style/Drawable;", 9 },
	{ "whiteui", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_whiteui, "Larc/scene/style/Drawable;", 9 },
	{ "windowEmpty", &class_arc_scene_style_Drawable, (intptr_t) &SF_mindustry_gen_Tex_windowEmpty, "Larc/scene/style/Drawable;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Tex, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_gen_Tex_load, 0, "()V", 9 },
	{ "loadStyles", (intptr_t) SM_mindustry_gen_Tex_loadStyles, 0, "()V", 9 },
};

Class class_mindustry_gen_Tex{
		.nativeName = (intptr_t) "mindustry/gen/Tex",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Tex),
		.classVtable = (intptr_t) vtable_mindustry_gen_Tex,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Tex,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Tex,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 129,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Tex = registerClass(&class_mindustry_gen_Tex);

}
