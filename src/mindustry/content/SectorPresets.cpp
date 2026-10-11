#include "mindustry/content/SectorPresets.h"
#include "mindustry/content/SectorPresets_19.h"
#include "mindustry/content/SectorPresets_14.h"
#include "mindustry/content/SectorPresets_13.h"
#include "mindustry/content/SectorPresets_12.h"
#include "mindustry/content/SectorPresets_11.h"
#include "mindustry/content/SectorPresets_18.h"
#include "mindustry/content/SectorPresets_17.h"
#include "mindustry/content/SectorPresets_16.h"
#include "mindustry/content/SectorPresets_15.h"
#include "mindustry/content/SectorPresets.h"
#include "mindustry/content/SectorPresets_10.h"
#include "mindustry/maps/SectorSubmissions.h"
#include "mindustry/content/SectorPresets_25.h"
#include "mindustry/content/SectorPresets_24.h"
#include "mindustry/content/SectorPresets_23.h"
#include "mindustry/content/SectorPresets_22.h"
#include "mindustry/content/SectorPresets_29.h"
#include "mindustry/content/SectorPresets_28.h"
#include "mindustry/content/SectorPresets_27.h"
#include "mindustry/content/SectorPresets_26.h"
#include "java/lang/Object.h"
#include "mindustry/content/SectorPresets_21.h"
#include "mindustry/content/Planets.h"
#include "mindustry/content/SectorPresets_20.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/content/SectorPresets_36.h"
#include "mindustry/content/SectorPresets_35.h"
#include "mindustry/content/SectorPresets_34.h"
#include "mindustry/content/SectorPresets_33.h"
#include "mindustry/content/SectorPresets_39.h"
#include "mindustry/content/SectorPresets_38.h"
#include "mindustry/content/SectorPresets_37.h"
#include "java/lang/String.h"
#include "mindustry/content/SectorPresets_32.h"
#include "mindustry/content/SectorPresets_31.h"
#include "mindustry/content/SectorPresets_30.h"
#include "mindustry/content/SectorPresets_46.h"
#include "mindustry/content/SectorPresets_45.h"
#include "mindustry/content/SectorPresets_44.h"
#include "mindustry/content/SectorPresets_6.h"
#include "mindustry/content/SectorPresets_7.h"
#include "mindustry/content/SectorPresets_4.h"
#include "mindustry/content/SectorPresets_5.h"
#include "mindustry/content/SectorPresets_2.h"
#include "mindustry/content/SectorPresets_43.h"
#include "mindustry/content/SectorPresets_3.h"
#include "mindustry/content/SectorPresets_42.h"
#include "mindustry/type/Planet.h"
#include "mindustry/content/SectorPresets_41.h"
#include "mindustry/content/SectorPresets_1.h"
#include "mindustry/content/SectorPresets_40.h"
#include "mindustry/content/SectorPresets_8.h"
#include "mindustry/content/SectorPresets_9.h"

extern "C" {

jobject SF_mindustry_content_SectorPresets_groundZero;
jobject SF_mindustry_content_SectorPresets_crateredBattleground;
jobject SF_mindustry_content_SectorPresets_biomassFacility;
jobject SF_mindustry_content_SectorPresets_taintedWoods;
jobject SF_mindustry_content_SectorPresets_frozenForest;
jobject SF_mindustry_content_SectorPresets_ruinousShores;
jobject SF_mindustry_content_SectorPresets_facility32m;
jobject SF_mindustry_content_SectorPresets_windsweptIslands;
jobject SF_mindustry_content_SectorPresets_stainedMountains;
jobject SF_mindustry_content_SectorPresets_tarFields;
jobject SF_mindustry_content_SectorPresets_frontier;
jobject SF_mindustry_content_SectorPresets_fungalPass;
jobject SF_mindustry_content_SectorPresets_infestedCanyons;
jobject SF_mindustry_content_SectorPresets_atolls;
jobject SF_mindustry_content_SectorPresets_sunkenPier;
jobject SF_mindustry_content_SectorPresets_mycelialBastion;
jobject SF_mindustry_content_SectorPresets_extractionOutpost;
jobject SF_mindustry_content_SectorPresets_saltFlats;
jobject SF_mindustry_content_SectorPresets_testingGrounds;
jobject SF_mindustry_content_SectorPresets_overgrowth;
jobject SF_mindustry_content_SectorPresets_impact0078;
jobject SF_mindustry_content_SectorPresets_desolateRift;
jobject SF_mindustry_content_SectorPresets_nuclearComplex;
jobject SF_mindustry_content_SectorPresets_planetaryTerminal;
jobject SF_mindustry_content_SectorPresets_coastline;
jobject SF_mindustry_content_SectorPresets_navalFortress;
jobject SF_mindustry_content_SectorPresets_weatheredChannels;
jobject SF_mindustry_content_SectorPresets_perilousHarbor;
jobject SF_mindustry_content_SectorPresets_littoralShipyard;
jobject SF_mindustry_content_SectorPresets_onset;
jobject SF_mindustry_content_SectorPresets_aegis;
jobject SF_mindustry_content_SectorPresets_lake;
jobject SF_mindustry_content_SectorPresets_intersect;
jobject SF_mindustry_content_SectorPresets_basin;
jobject SF_mindustry_content_SectorPresets_atlas;
jobject SF_mindustry_content_SectorPresets_split;
jobject SF_mindustry_content_SectorPresets_marsh;
jobject SF_mindustry_content_SectorPresets_peaks;
jobject SF_mindustry_content_SectorPresets_ravine;
jobject SF_mindustry_content_SectorPresets_caldera;
jobject SF_mindustry_content_SectorPresets_stronghold;
jobject SF_mindustry_content_SectorPresets_crevice;
jobject SF_mindustry_content_SectorPresets_siege;
jobject SF_mindustry_content_SectorPresets_crossroads;
jobject SF_mindustry_content_SectorPresets_karst;
jobject SF_mindustry_content_SectorPresets_origin;

void mark_mindustry_content_SectorPresets(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_SectorPresets_groundZero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_groundZero)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_groundZero, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_crateredBattleground)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_crateredBattleground)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_crateredBattleground, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_biomassFacility)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_biomassFacility)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_biomassFacility, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_taintedWoods)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_taintedWoods)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_taintedWoods, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_frozenForest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_frozenForest)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_frozenForest, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_ruinousShores)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_ruinousShores)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_ruinousShores, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_facility32m)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_facility32m)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_facility32m, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_windsweptIslands)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_windsweptIslands)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_windsweptIslands, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_stainedMountains)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_stainedMountains)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_stainedMountains, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_tarFields)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_tarFields)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_tarFields, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_frontier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_frontier)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_frontier, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_fungalPass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_fungalPass)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_fungalPass, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_infestedCanyons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_infestedCanyons)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_infestedCanyons, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_atolls)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_atolls)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_atolls, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_sunkenPier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_sunkenPier)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_sunkenPier, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_mycelialBastion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_mycelialBastion)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_mycelialBastion, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_extractionOutpost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_extractionOutpost)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_extractionOutpost, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_saltFlats)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_saltFlats)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_saltFlats, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_testingGrounds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_testingGrounds)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_testingGrounds, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_overgrowth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_overgrowth)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_overgrowth, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_impact0078)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_impact0078)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_impact0078, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_desolateRift)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_desolateRift)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_desolateRift, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_nuclearComplex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_nuclearComplex)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_nuclearComplex, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_planetaryTerminal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_planetaryTerminal)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_planetaryTerminal, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_coastline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_coastline)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_coastline, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_navalFortress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_navalFortress)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_navalFortress, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_weatheredChannels)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_weatheredChannels)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_weatheredChannels, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_perilousHarbor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_perilousHarbor)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_perilousHarbor, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_littoralShipyard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_littoralShipyard)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_littoralShipyard, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_onset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_onset)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_onset, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_aegis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_aegis)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_aegis, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_lake)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_lake)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_lake, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_intersect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_intersect)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_intersect, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_basin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_basin)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_basin, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_atlas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_atlas)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_atlas, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_split)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_split)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_split, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_marsh)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_marsh)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_marsh, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_peaks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_peaks)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_peaks, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_ravine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_ravine)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_ravine, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_caldera)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_caldera)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_caldera, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_stronghold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_stronghold)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_stronghold, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_crevice)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_crevice)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_crevice, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_siege)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_siege)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_siege, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_crossroads)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_crossroads)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_crossroads, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_karst)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_karst)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_karst, mark, depth + 1);
		if (SF_mindustry_content_SectorPresets_origin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_SectorPresets_origin)->clazz)->markFunction)((jobject) SF_mindustry_content_SectorPresets_origin, mark, depth + 1);
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
	auto self = (mindustry_content_SectorPresets *) object;
}

void clinit_mindustry_content_SectorPresets(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_SectorPresets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/SectorPresets:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_SectorPresets(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_SectorPresets_load(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/SectorPresets:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_SectorPresets(ctx);
	{
	LINE_NUMBER(22);
	clinit_mindustry_content_SectorPresets$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"groundZero"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$1_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (15));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_groundZero = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_content_SectorPresets$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"saltFlats"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$2_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (101));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_saltFlats = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_content_SectorPresets$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"testingGrounds"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$3_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(3)));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_testingGrounds = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_content_SectorPresets$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"frozenForest"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$4_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (86));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_frozenForest = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_content_SectorPresets$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"biomassFacility"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$5_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (81));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_biomassFacility = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_content_SectorPresets$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$6);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"taintedWoods"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$6_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (221));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_taintedWoods = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_content_SectorPresets$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$7);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"crateredBattleground"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$7_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (18));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_crateredBattleground = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_content_SectorPresets$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$8);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ruinousShores"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$8_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (213));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_ruinousShores = sp[0].o;
	LINE_NUMBER(66);
	clinit_mindustry_content_SectorPresets$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$9);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"perilousHarbor"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$9_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (47));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_perilousHarbor = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_content_SectorPresets$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$10);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"facility32m"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$10_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (64));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_facility32m = sp[0].o;
	LINE_NUMBER(75);
	clinit_mindustry_content_SectorPresets$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$11);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"windsweptIslands"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$11_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (246));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_windsweptIslands = sp[0].o;
	LINE_NUMBER(80);
	clinit_mindustry_content_SectorPresets$12(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$12);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stainedMountains"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$12_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (20));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_stainedMountains = sp[0].o;
	LINE_NUMBER(85);
	clinit_mindustry_content_SectorPresets$13(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$13);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"extractionOutpost"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$13_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (165));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_extractionOutpost = sp[0].o;
	LINE_NUMBER(89);
	clinit_mindustry_content_SectorPresets$14(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$14);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"coastline"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$14_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (108));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_coastline = sp[0].o;
	LINE_NUMBER(94);
	clinit_mindustry_content_SectorPresets$15(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$15);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"weatheredChannels"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$15_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (39));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_weatheredChannels = sp[0].o;
	LINE_NUMBER(99);
	clinit_mindustry_content_SectorPresets$16(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$16);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"navalFortress"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$16_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (216));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_navalFortress = sp[0].o;
	LINE_NUMBER(103);
	clinit_mindustry_content_SectorPresets$17(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$17);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"frontier"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$17_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (50));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_frontier = sp[0].o;
	LINE_NUMBER(107);
	clinit_mindustry_content_SectorPresets$18(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$18);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fungalPass"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$18_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (21));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_fungalPass = sp[0].o;
	LINE_NUMBER(111);
	clinit_mindustry_content_SectorPresets$19(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$19);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"infestedCanyons"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$19_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (210));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_infestedCanyons = sp[0].o;
	LINE_NUMBER(115);
	clinit_mindustry_content_SectorPresets$20(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$20);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"atolls"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$20_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_atolls = sp[0].o;
	LINE_NUMBER(119);
	clinit_mindustry_content_SectorPresets$21(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$21);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sunkenPier"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$21_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_sunkenPier = sp[0].o;
	LINE_NUMBER(124);
	clinit_mindustry_content_SectorPresets$22(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$22);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mycelialBastion"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$22_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (260));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_mycelialBastion = sp[0].o;
	LINE_NUMBER(128);
	clinit_mindustry_content_SectorPresets$23(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$23);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"overgrowth"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$23_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (134));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_overgrowth = sp[0].o;
	LINE_NUMBER(132);
	clinit_mindustry_content_SectorPresets$24(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$24);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tarFields"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$24_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (23));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_tarFields = sp[0].o;
	LINE_NUMBER(137);
	clinit_mindustry_content_SectorPresets$25(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$25);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"impact0078"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$25_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (227));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_impact0078 = sp[0].o;
	LINE_NUMBER(142);
	clinit_mindustry_content_SectorPresets$26(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$26);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"desolateRift"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$26_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (123));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_desolateRift = sp[0].o;
	LINE_NUMBER(147);
	clinit_mindustry_content_SectorPresets$27(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$27);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"nuclearComplex"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$27_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (130));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_nuclearComplex = sp[0].o;
	LINE_NUMBER(152);
	clinit_mindustry_content_SectorPresets$28(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$28);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"littoralShipyard"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$28_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (204));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_littoralShipyard = sp[0].o;
	LINE_NUMBER(156);
	clinit_mindustry_content_SectorPresets$29(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$29);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"planetaryTerminal"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_content_SectorPresets$29_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (93));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_planetaryTerminal = sp[0].o;
	LINE_NUMBER(161);
	SM_mindustry_maps_SectorSubmissions_registerSectors(ctx);
	LINE_NUMBER(166);
	clinit_mindustry_content_SectorPresets$30(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$30);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"onset"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$30_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (10));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_onset = sp[0].o;
	LINE_NUMBER(171);
	clinit_mindustry_content_SectorPresets$31(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$31);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"aegis"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$31_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (88));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_aegis = sp[0].o;
	LINE_NUMBER(175);
	clinit_mindustry_content_SectorPresets$32(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$32);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lake"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$32_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (41));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_lake = sp[0].o;
	LINE_NUMBER(179);
	clinit_mindustry_content_SectorPresets$33(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$33);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"intersect"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$33_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (36));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_intersect = sp[0].o;
	LINE_NUMBER(185);
	clinit_mindustry_content_SectorPresets$34(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$34);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"atlas"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$34_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (14));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_atlas = sp[0].o;
	LINE_NUMBER(189);
	clinit_mindustry_content_SectorPresets$35(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$35);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"split"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$35_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (19));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_split = sp[0].o;
	LINE_NUMBER(193);
	clinit_mindustry_content_SectorPresets$36(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$36);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"basin"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$36_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (29));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_basin = sp[0].o;
	LINE_NUMBER(197);
	clinit_mindustry_content_SectorPresets$37(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$37);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"marsh"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$37_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (25));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_marsh = sp[0].o;
	LINE_NUMBER(201);
	clinit_mindustry_content_SectorPresets$38(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$38);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"peaks"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$38_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (30));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_peaks = sp[0].o;
	LINE_NUMBER(205);
	clinit_mindustry_content_SectorPresets$39(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$39);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ravine"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$39_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (39));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_ravine = sp[0].o;
	LINE_NUMBER(210);
	clinit_mindustry_content_SectorPresets$40(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$40);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"caldera-erekir"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$40_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (43));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_caldera = sp[0].o;
	LINE_NUMBER(214);
	clinit_mindustry_content_SectorPresets$41(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$41);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stronghold"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$41_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (18));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_stronghold = sp[0].o;
	LINE_NUMBER(218);
	clinit_mindustry_content_SectorPresets$42(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$42);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"crevice"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$42_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(3)));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_crevice = sp[0].o;
	LINE_NUMBER(223);
	clinit_mindustry_content_SectorPresets$43(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$43);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"siege"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$43_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (58));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_siege = sp[0].o;
	LINE_NUMBER(227);
	clinit_mindustry_content_SectorPresets$44(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$44);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"crossroads"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$44_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (37));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_crossroads = sp[0].o;
	LINE_NUMBER(231);
	clinit_mindustry_content_SectorPresets$45(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$45);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"karst"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$45_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(5)));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_karst = sp[0].o;
	LINE_NUMBER(236);
	clinit_mindustry_content_SectorPresets$46(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_SectorPresets$46);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"origin"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_content_SectorPresets$46_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (12));
	clinit_mindustry_content_SectorPresets(ctx);
	SF_mindustry_content_SectorPresets_origin = sp[0].o;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_SectorPresets[] {
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
	{ "groundZero", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_groundZero, "Lmindustry/type/SectorPreset;", 9 },
	{ "crateredBattleground", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_crateredBattleground, "Lmindustry/type/SectorPreset;", 9 },
	{ "biomassFacility", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_biomassFacility, "Lmindustry/type/SectorPreset;", 9 },
	{ "taintedWoods", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_taintedWoods, "Lmindustry/type/SectorPreset;", 9 },
	{ "frozenForest", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_frozenForest, "Lmindustry/type/SectorPreset;", 9 },
	{ "ruinousShores", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_ruinousShores, "Lmindustry/type/SectorPreset;", 9 },
	{ "facility32m", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_facility32m, "Lmindustry/type/SectorPreset;", 9 },
	{ "windsweptIslands", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_windsweptIslands, "Lmindustry/type/SectorPreset;", 9 },
	{ "stainedMountains", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_stainedMountains, "Lmindustry/type/SectorPreset;", 9 },
	{ "tarFields", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_tarFields, "Lmindustry/type/SectorPreset;", 9 },
	{ "frontier", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_frontier, "Lmindustry/type/SectorPreset;", 9 },
	{ "fungalPass", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_fungalPass, "Lmindustry/type/SectorPreset;", 9 },
	{ "infestedCanyons", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_infestedCanyons, "Lmindustry/type/SectorPreset;", 9 },
	{ "atolls", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_atolls, "Lmindustry/type/SectorPreset;", 9 },
	{ "sunkenPier", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_sunkenPier, "Lmindustry/type/SectorPreset;", 9 },
	{ "mycelialBastion", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_mycelialBastion, "Lmindustry/type/SectorPreset;", 9 },
	{ "extractionOutpost", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_extractionOutpost, "Lmindustry/type/SectorPreset;", 9 },
	{ "saltFlats", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_saltFlats, "Lmindustry/type/SectorPreset;", 9 },
	{ "testingGrounds", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_testingGrounds, "Lmindustry/type/SectorPreset;", 9 },
	{ "overgrowth", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_overgrowth, "Lmindustry/type/SectorPreset;", 9 },
	{ "impact0078", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_impact0078, "Lmindustry/type/SectorPreset;", 9 },
	{ "desolateRift", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_desolateRift, "Lmindustry/type/SectorPreset;", 9 },
	{ "nuclearComplex", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_nuclearComplex, "Lmindustry/type/SectorPreset;", 9 },
	{ "planetaryTerminal", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_planetaryTerminal, "Lmindustry/type/SectorPreset;", 9 },
	{ "coastline", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_coastline, "Lmindustry/type/SectorPreset;", 9 },
	{ "navalFortress", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_navalFortress, "Lmindustry/type/SectorPreset;", 9 },
	{ "weatheredChannels", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_weatheredChannels, "Lmindustry/type/SectorPreset;", 9 },
	{ "perilousHarbor", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_perilousHarbor, "Lmindustry/type/SectorPreset;", 9 },
	{ "littoralShipyard", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_littoralShipyard, "Lmindustry/type/SectorPreset;", 9 },
	{ "onset", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_onset, "Lmindustry/type/SectorPreset;", 9 },
	{ "aegis", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_aegis, "Lmindustry/type/SectorPreset;", 9 },
	{ "lake", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_lake, "Lmindustry/type/SectorPreset;", 9 },
	{ "intersect", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_intersect, "Lmindustry/type/SectorPreset;", 9 },
	{ "basin", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_basin, "Lmindustry/type/SectorPreset;", 9 },
	{ "atlas", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_atlas, "Lmindustry/type/SectorPreset;", 9 },
	{ "split", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_split, "Lmindustry/type/SectorPreset;", 9 },
	{ "marsh", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_marsh, "Lmindustry/type/SectorPreset;", 9 },
	{ "peaks", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_peaks, "Lmindustry/type/SectorPreset;", 9 },
	{ "ravine", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_ravine, "Lmindustry/type/SectorPreset;", 9 },
	{ "caldera", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_caldera, "Lmindustry/type/SectorPreset;", 9 },
	{ "stronghold", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_stronghold, "Lmindustry/type/SectorPreset;", 9 },
	{ "crevice", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_crevice, "Lmindustry/type/SectorPreset;", 9 },
	{ "siege", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_siege, "Lmindustry/type/SectorPreset;", 9 },
	{ "crossroads", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_crossroads, "Lmindustry/type/SectorPreset;", 9 },
	{ "karst", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_karst, "Lmindustry/type/SectorPreset;", 9 },
	{ "origin", &class_mindustry_type_SectorPreset, (intptr_t) &SF_mindustry_content_SectorPresets_origin, "Lmindustry/type/SectorPreset;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_SectorPresets, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_SectorPresets_load, 0, "()V", 9 },
};

Class class_mindustry_content_SectorPresets{
		.nativeName = (intptr_t) "mindustry/content/SectorPresets",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_SectorPresets),
		.classVtable = (intptr_t) vtable_mindustry_content_SectorPresets,
		.staticInitializer = (intptr_t) clinit_mindustry_content_SectorPresets,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_SectorPresets,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 46,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_SectorPresets = registerClass(&class_mindustry_content_SectorPresets);

}
