#include "mindustry/content/Items.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Items_21.h"
#include "mindustry/content/Items_20.h"
#include "mindustry/content/Items_22.h"
#include "mindustry/content/Items_14.h"
#include "mindustry/content/Items_13.h"
#include "mindustry/content/Items_16.h"
#include "java/lang/String.h"
#include "mindustry/content/Items_15.h"
#include "mindustry/content/Items_18.h"
#include "mindustry/content/Items_17.h"
#include "mindustry/content/Items_19.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/Items_10.h"
#include "mindustry/content/Items.h"
#include "mindustry/content/Items_12.h"
#include "mindustry/content/Items_11.h"
#include "mindustry/content/Items_5.h"
#include "mindustry/content/Items_4.h"
#include "java/lang/Object.h"
#include "mindustry/content/Items_3.h"
#include "mindustry/content/Items_2.h"
#include "mindustry/content/Items_1.h"
#include "mindustry/content/Items_9.h"
#include "mindustry/content/Items_8.h"
#include "mindustry/content/Items_7.h"
#include "mindustry/content/Items_6.h"

extern "C" {

jobject SF_mindustry_content_Items_scrap;
jobject SF_mindustry_content_Items_copper;
jobject SF_mindustry_content_Items_lead;
jobject SF_mindustry_content_Items_graphite;
jobject SF_mindustry_content_Items_coal;
jobject SF_mindustry_content_Items_titanium;
jobject SF_mindustry_content_Items_thorium;
jobject SF_mindustry_content_Items_silicon;
jobject SF_mindustry_content_Items_plastanium;
jobject SF_mindustry_content_Items_phaseFabric;
jobject SF_mindustry_content_Items_surgeAlloy;
jobject SF_mindustry_content_Items_sporePod;
jobject SF_mindustry_content_Items_sand;
jobject SF_mindustry_content_Items_blastCompound;
jobject SF_mindustry_content_Items_pyratite;
jobject SF_mindustry_content_Items_metaglass;
jobject SF_mindustry_content_Items_beryllium;
jobject SF_mindustry_content_Items_tungsten;
jobject SF_mindustry_content_Items_oxide;
jobject SF_mindustry_content_Items_carbide;
jobject SF_mindustry_content_Items_fissileMatter;
jobject SF_mindustry_content_Items_dormantCyst;
jobject SF_mindustry_content_Items_serpuloItems;
jobject SF_mindustry_content_Items_erekirItems;
jobject SF_mindustry_content_Items_erekirOnlyItems;

void mark_mindustry_content_Items(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Items_scrap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_scrap)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_scrap, mark, depth + 1);
		if (SF_mindustry_content_Items_copper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_copper)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_copper, mark, depth + 1);
		if (SF_mindustry_content_Items_lead)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_lead)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_lead, mark, depth + 1);
		if (SF_mindustry_content_Items_graphite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_graphite)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_graphite, mark, depth + 1);
		if (SF_mindustry_content_Items_coal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_coal)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_coal, mark, depth + 1);
		if (SF_mindustry_content_Items_titanium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_titanium)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_titanium, mark, depth + 1);
		if (SF_mindustry_content_Items_thorium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_thorium)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_thorium, mark, depth + 1);
		if (SF_mindustry_content_Items_silicon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_silicon)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_silicon, mark, depth + 1);
		if (SF_mindustry_content_Items_plastanium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_plastanium)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_plastanium, mark, depth + 1);
		if (SF_mindustry_content_Items_phaseFabric)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_phaseFabric)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_phaseFabric, mark, depth + 1);
		if (SF_mindustry_content_Items_surgeAlloy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_surgeAlloy)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_surgeAlloy, mark, depth + 1);
		if (SF_mindustry_content_Items_sporePod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_sporePod)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_sporePod, mark, depth + 1);
		if (SF_mindustry_content_Items_sand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_sand)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_sand, mark, depth + 1);
		if (SF_mindustry_content_Items_blastCompound)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_blastCompound)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_blastCompound, mark, depth + 1);
		if (SF_mindustry_content_Items_pyratite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_pyratite)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_pyratite, mark, depth + 1);
		if (SF_mindustry_content_Items_metaglass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_metaglass)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_metaglass, mark, depth + 1);
		if (SF_mindustry_content_Items_beryllium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_beryllium)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_beryllium, mark, depth + 1);
		if (SF_mindustry_content_Items_tungsten)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_tungsten)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_tungsten, mark, depth + 1);
		if (SF_mindustry_content_Items_oxide)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_oxide)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_oxide, mark, depth + 1);
		if (SF_mindustry_content_Items_carbide)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_carbide)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_carbide, mark, depth + 1);
		if (SF_mindustry_content_Items_fissileMatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_fissileMatter)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_fissileMatter, mark, depth + 1);
		if (SF_mindustry_content_Items_dormantCyst)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_dormantCyst)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_dormantCyst, mark, depth + 1);
		if (SF_mindustry_content_Items_serpuloItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_serpuloItems)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_serpuloItems, mark, depth + 1);
		if (SF_mindustry_content_Items_erekirItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_erekirItems)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_erekirItems, mark, depth + 1);
		if (SF_mindustry_content_Items_erekirOnlyItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Items_erekirOnlyItems)->clazz)->markFunction)((jobject) SF_mindustry_content_Items_erekirOnlyItems, mark, depth + 1);
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
	auto self = (mindustry_content_Items *) object;
}

void init_mindustry_content_Items(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Items:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Items(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Items_load(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Items:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Items(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_content_Items$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"copper"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d99d73"_j))));
	init_mindustry_content_Items$1_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_copper = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_content_Items$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lead"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8c7fa9"_j))));
	init_mindustry_content_Items$2_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_lead = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_content_Items$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaglass"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ebeef5"_j))));
	init_mindustry_content_Items$3_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_metaglass = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_content_Items$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"graphite"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"b2c6d2"_j))));
	init_mindustry_content_Items$4_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_graphite = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_content_Items$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sand"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f7cba4"_j))));
	init_mindustry_content_Items$5_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_sand = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_content_Items$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$6);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"coal"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"272727"_j))));
	init_mindustry_content_Items$6_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_coal = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_content_Items$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$7);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"titanium"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8da1e3"_j))));
	init_mindustry_content_Items$7_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_titanium = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_content_Items$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$8);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"thorium"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f9a3c7"_j))));
	init_mindustry_content_Items$8_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_thorium = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_content_Items$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$9);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"scrap"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"777777"_j))));
	init_mindustry_content_Items$9_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_scrap = sp[0].o;
	LINE_NUMBER(66);
	clinit_mindustry_content_Items$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$10);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"silicon"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"53565c"_j))));
	init_mindustry_content_Items$10_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_silicon = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_content_Items$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$11);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"plastanium"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"cbd97f"_j))));
	init_mindustry_content_Items$11_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_plastanium = sp[0].o;
	LINE_NUMBER(77);
	clinit_mindustry_content_Items$12(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$12);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"phase-fabric"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f4ba6e"_j))));
	init_mindustry_content_Items$12_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_phaseFabric = sp[0].o;
	LINE_NUMBER(83);
	clinit_mindustry_content_Items$13(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$13);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"surge-alloy"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f3e979"_j))));
	init_mindustry_content_Items$13_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_surgeAlloy = sp[0].o;
	LINE_NUMBER(89);
	clinit_mindustry_content_Items$14(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$14);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spore-pod"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	init_mindustry_content_Items$14_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_sporePod = sp[0].o;
	LINE_NUMBER(94);
	clinit_mindustry_content_Items$15(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$15);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"blast-compound"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff795e"_j))));
	init_mindustry_content_Items$15_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_blastCompound = sp[0].o;
	LINE_NUMBER(100);
	clinit_mindustry_content_Items$16(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$16);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pyratite"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffaa5f"_j))));
	init_mindustry_content_Items$16_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_pyratite = sp[0].o;
	LINE_NUMBER(106);
	clinit_mindustry_content_Items$17(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$17);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"beryllium"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"3a8f64"_j))));
	init_mindustry_content_Items$17_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_beryllium = sp[0].o;
	LINE_NUMBER(112);
	clinit_mindustry_content_Items$18(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$18);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tungsten"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"768a9a"_j))));
	init_mindustry_content_Items$18_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_tungsten = sp[0].o;
	LINE_NUMBER(118);
	clinit_mindustry_content_Items$19(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$19);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"oxide"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e4ffd6"_j))));
	init_mindustry_content_Items$19_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_oxide = sp[0].o;
	LINE_NUMBER(123);
	clinit_mindustry_content_Items$20(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$20);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"carbide"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"89769a"_j))));
	init_mindustry_content_Items$20_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_carbide = sp[0].o;
	LINE_NUMBER(128);
	clinit_mindustry_content_Items$21(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$21);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fissile-matter"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"5e988d"_j))));
	init_mindustry_content_Items$21_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_fissileMatter = sp[0].o;
	LINE_NUMBER(133);
	clinit_mindustry_content_Items$22(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Items$22);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dormant-cyst"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"df824d"_j))));
	init_mindustry_content_Items$22_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_dormantCyst = sp[0].o;
	LINE_NUMBER(138);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_serpuloItems;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_Item, (16));
	jint temp0 = jint(0);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_scrap;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_copper;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_lead;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_graphite;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_coal;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_titanium;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_thorium;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_silicon;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_plastanium;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 9;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_phaseFabric;
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 10;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_surgeAlloy;
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = 11;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_sporePod;
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = 12;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_sand;
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = 13;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_blastCompound;
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = 14;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_pyratite;
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = 15;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_metaglass;
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_erekirItems;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_Item, (12));
	jint temp16 = jint(0);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_graphite;
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	jint temp17 = jint(1);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_thorium;
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	jint temp18 = jint(2);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_silicon;
	ARRAY_ACCESS(jobject, sp[1].o, temp18) = sp[2].o;
	jint temp19 = jint(3);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_phaseFabric;
	ARRAY_ACCESS(jobject, sp[1].o, temp19) = sp[2].o;
	jint temp20 = jint(4);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_surgeAlloy;
	ARRAY_ACCESS(jobject, sp[1].o, temp20) = sp[2].o;
	jint temp21 = jint(5);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_sand;
	ARRAY_ACCESS(jobject, sp[1].o, temp21) = sp[2].o;
	jint temp22 = 6;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_beryllium;
	ARRAY_ACCESS(jobject, sp[1].o, temp22) = sp[2].o;
	jint temp23 = 7;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_tungsten;
	ARRAY_ACCESS(jobject, sp[1].o, temp23) = sp[2].o;
	jint temp24 = 8;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_oxide;
	ARRAY_ACCESS(jobject, sp[1].o, temp24) = sp[2].o;
	jint temp25 = 9;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_carbide;
	ARRAY_ACCESS(jobject, sp[1].o, temp25) = sp[2].o;
	jint temp26 = 10;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_fissileMatter;
	ARRAY_ACCESS(jobject, sp[1].o, temp26) = sp[2].o;
	jint temp27 = 11;
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_dormantCyst;
	ARRAY_ACCESS(jobject, sp[1].o, temp27) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_erekirOnlyItems;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_erekirItems;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_serpuloItems;
	jint temp28 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_content_Items(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Items:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Items(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_serpuloItems = sp[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_erekirItems = sp[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_content_Items(ctx);
	SF_mindustry_content_Items_erekirOnlyItems = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Items[] {
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
	{ "scrap", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_scrap, "Lmindustry/type/Item;", 9 },
	{ "copper", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_copper, "Lmindustry/type/Item;", 9 },
	{ "lead", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_lead, "Lmindustry/type/Item;", 9 },
	{ "graphite", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_graphite, "Lmindustry/type/Item;", 9 },
	{ "coal", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_coal, "Lmindustry/type/Item;", 9 },
	{ "titanium", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_titanium, "Lmindustry/type/Item;", 9 },
	{ "thorium", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_thorium, "Lmindustry/type/Item;", 9 },
	{ "silicon", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_silicon, "Lmindustry/type/Item;", 9 },
	{ "plastanium", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_plastanium, "Lmindustry/type/Item;", 9 },
	{ "phaseFabric", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_phaseFabric, "Lmindustry/type/Item;", 9 },
	{ "surgeAlloy", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_surgeAlloy, "Lmindustry/type/Item;", 9 },
	{ "sporePod", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_sporePod, "Lmindustry/type/Item;", 9 },
	{ "sand", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_sand, "Lmindustry/type/Item;", 9 },
	{ "blastCompound", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_blastCompound, "Lmindustry/type/Item;", 9 },
	{ "pyratite", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_pyratite, "Lmindustry/type/Item;", 9 },
	{ "metaglass", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_metaglass, "Lmindustry/type/Item;", 9 },
	{ "beryllium", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_beryllium, "Lmindustry/type/Item;", 9 },
	{ "tungsten", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_tungsten, "Lmindustry/type/Item;", 9 },
	{ "oxide", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_oxide, "Lmindustry/type/Item;", 9 },
	{ "carbide", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_carbide, "Lmindustry/type/Item;", 9 },
	{ "fissileMatter", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_fissileMatter, "Lmindustry/type/Item;", 9 },
	{ "dormantCyst", &class_mindustry_type_Item, (intptr_t) &SF_mindustry_content_Items_dormantCyst, "Lmindustry/type/Item;", 9 },
	{ "serpuloItems", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_content_Items_serpuloItems, "Larc/struct/Seq;", 25 },
	{ "erekirItems", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_content_Items_erekirItems, "Larc/struct/Seq;", 25 },
	{ "erekirOnlyItems", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_content_Items_erekirOnlyItems, "Larc/struct/Seq;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Items, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Items_load, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_content_Items, 0, "()V", 8 },
};

Class class_mindustry_content_Items{
		.nativeName = (intptr_t) "mindustry/content/Items",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Items),
		.classVtable = (intptr_t) vtable_mindustry_content_Items,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Items,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Items,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Items = registerClass(&class_mindustry_content_Items);

}
