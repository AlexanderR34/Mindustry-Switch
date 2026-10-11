#include "mindustry/type/Item.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/Block.h"
#include "arc/Events.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/Item_invoke_arc_func_Func_1.h"
#include "mindustry/type/Item_invoke_arc_func_Boolf_1.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "arc/func/Boolf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "arc/func/Func.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "mindustry/type/Item_invoke_java_lang_Runnable_1.h"

extern "C" {


void mark_mindustry_type_Item(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_UnlockableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_Item *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_type_Item(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
}

void init_mindustry_type_Item_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Item(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_explosiveness = (jfloat(0));
	LINE_NUMBER(24);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_flammability = (jfloat(0));
	LINE_NUMBER(28);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_charge = (jfloat(0));
	LINE_NUMBER(30);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_hardness = (jint(0));
	LINE_NUMBER(35);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_cost = (jfloat(1));
	LINE_NUMBER(37);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_healthScaling = (jfloat(0));
	LINE_NUMBER(42);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames = (jint(0));
	LINE_NUMBER(44);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames = (jint(0));
	LINE_NUMBER(46);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frameTime = (jfloat(5.0f));
	LINE_NUMBER(48);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_buildable = (jint(1));
	LINE_NUMBER(49);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_hidden = (jint(0));
	LINE_NUMBER(53);
	((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[2].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Item_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Item(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_black;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[2].o, sp[3].o);
	init_mindustry_type_Item_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:isOnPlanet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_hidden) != 0) goto label_1;
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

jbool M_mindustry_type_Item_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_hidden);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Item_loadIcon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:loadIcon", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	M_mindustry_ctype_UnlockableContent_loadIcon(ctx, (frame[0].o));
	LINE_NUMBER(76);
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames) * (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) + (jint(1)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(79);
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) > 0) goto label_5;
	}
	{
	LINE_NUMBER(80);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	if ((frame[2].i) > ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames)) goto label_8;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) - (jint(1));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[2].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(80);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	goto label_11;
label_5:;
	{
	LINE_NUMBER(84);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames)) goto label_11;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) * (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) + (jint(1)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((frame[2].i) + (jint(1)))));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(86);
	frame[3].i = (jint(1));
	}
label_15:;
	{
	if ((frame[3].i) > ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames)) goto label_16;
	}
	{
	LINE_NUMBER(87);
	frame[4].i = (((frame[2].i) * (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) + (jint(1)))) + (frame[3].i));
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-t\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[4].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(86);
	INST_IINC(3, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(84);
	INST_IINC(2, 1);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon = (jref) sp[1].o;
	LINE_NUMBER(96);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Item_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_type_Item_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_type_Item_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Item_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:setStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_explosiveness;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_explosiveness));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_flammability;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_flammability));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_radioactivity;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_radioactivity));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_charge;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_charge));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Item_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Item_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_item;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Item_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:createIcons", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(127);
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames) <= 0) goto label_2;
	}
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_PixmapRegion, ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames));
	frame[2].o = sp[0].o;
	LINE_NUMBER(130);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames)) goto label_6;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((frame[3].i) + (jint(1)))));
	sp[1].o = (jobject)((func_mindustry_graphics_MultiPacker_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(130);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(134);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames)) goto label_2;
	}
	{
	LINE_NUMBER(135);
	frame[4].i = (jint(1));
	}
label_11:;
	{
	if ((frame[4].i) > ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames)) goto label_12;
	}
	{
	LINE_NUMBER(136);
	frame[5].f = ((jfloat((frame[4].i))) / (jfloat((((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) + (jint(1))))));
	LINE_NUMBER(137);
	frame[6].i = (((frame[3].i) * (((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_transitionFrames) + (jint(1)))) + (frame[4].i));
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_blend_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_float_R_arc_graphics_Pixmap(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (((frame[3].i) + (jint(1))) % ((jint)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frames)))), (frame[5].f));
	frame[7].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-t\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[6].i)));
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[7].o));
	LINE_NUMBER(141);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	LINE_NUMBER(135);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(134);
	INST_IINC(3, 1);
	goto label_9;
	}
label_2:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_type_Item_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_color;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_color;
	jdouble temp0 = (jdouble)((func_arc_graphics_Color_toDoubleBits_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toDoubleBits_R_double])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_id;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_getLogicId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Item_getLogicId_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_2:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Item_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_name;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(157);
	clinit_mindustry_type_Item(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_Item_getAllOres_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:getAllOres", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Item(ctx);
	{
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Item_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_Item_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_Item_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Item_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_type_Item_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_type_Item_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_Item_lambda$getAllOres$1_mindustry_world_Block_R_mindustry_type_Item(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:lambda$getAllOres$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Item(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemDrop;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_Item_lambda$getAllOres$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:lambda$getAllOres$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Item(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OreBlock));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Item_lambda$loadIcon$0_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Item:lambda$loadIcon$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	frame[2].i = ((jint(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) / ((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_frameTime)))) % (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Item[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_Item_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_Item_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_type_Item_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_Item_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_Item_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_Item_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_Item_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_type_Item_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_type_Item_lambda$loadIcon$0_Array1_arc_graphics_g2d_TextureRegion,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "lambda$loadIcon$0", "([Larc/graphics/g2d/TextureRegion;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_Senseable, };

static FieldMetadata fields[] {
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_Item, F_color), "Larc/graphics/Color;", 1 },
	{ "explosiveness", &class_float, offsetof(mindustry_type_Item, F_explosiveness), "F", 1 },
	{ "flammability", &class_float, offsetof(mindustry_type_Item, F_flammability), "F", 1 },
	{ "radioactivity", &class_float, offsetof(mindustry_type_Item, F_radioactivity), "F", 1 },
	{ "charge", &class_float, offsetof(mindustry_type_Item, F_charge), "F", 1 },
	{ "hardness", &class_int, offsetof(mindustry_type_Item, F_hardness), "I", 1 },
	{ "cost", &class_float, offsetof(mindustry_type_Item, F_cost), "F", 1 },
	{ "healthScaling", &class_float, offsetof(mindustry_type_Item, F_healthScaling), "F", 1 },
	{ "lowPriority", &class_boolean, offsetof(mindustry_type_Item, F_lowPriority), "Z", 1 },
	{ "frames", &class_int, offsetof(mindustry_type_Item, F_frames), "I", 1 },
	{ "transitionFrames", &class_int, offsetof(mindustry_type_Item, F_transitionFrames), "I", 1 },
	{ "frameTime", &class_float, offsetof(mindustry_type_Item, F_frameTime), "F", 1 },
	{ "buildable", &class_boolean, offsetof(mindustry_type_Item, F_buildable), "Z", 1 },
	{ "hidden", &class_boolean, offsetof(mindustry_type_Item, F_hidden), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Item_java_lang_String_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Item_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "isOnPlanet", (intptr_t) M_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean, VTABLE_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean, "(Lmindustry/type/Planet;)Z", 1 },
	{ "isHidden", (intptr_t) M_mindustry_type_Item_isHidden_R_boolean, VTABLE_mindustry_type_Item_isHidden_R_boolean, "()Z", 1 },
	{ "loadIcon", (intptr_t) M_mindustry_type_Item_loadIcon, VTABLE_mindustry_type_Item_loadIcon, "()V", 1 },
	{ "setStats", (intptr_t) M_mindustry_type_Item_setStats, VTABLE_mindustry_type_Item_setStats, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_type_Item_toString_R_java_lang_String, VTABLE_mindustry_type_Item_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_Item_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_Item_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "createIcons", (intptr_t) M_mindustry_type_Item_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_type_Item_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "sense", (intptr_t) M_mindustry_type_Item_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_type_Item_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_type_Item_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_type_Item_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "getAllOres", (intptr_t) SM_mindustry_type_Item_getAllOres_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 9 },
	{ "lambda$getAllOres$1", (intptr_t) SM_mindustry_type_Item_lambda$getAllOres$1_mindustry_world_Block_R_mindustry_type_Item, 0, "(Lmindustry/world/Block;)Lmindustry/type/Item;", 4106 },
	{ "lambda$getAllOres$0", (intptr_t) SM_mindustry_type_Item_lambda$getAllOres$0_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$loadIcon$0", (intptr_t) M_mindustry_type_Item_lambda$loadIcon$0_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_type_Item_lambda$loadIcon$0_Array1_arc_graphics_g2d_TextureRegion, "([Larc/graphics/g2d/TextureRegion;)V", 4098 },
};

Class class_mindustry_type_Item{
		.nativeName = (intptr_t) "mindustry/type/Item",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_Item),
		.classVtable = (intptr_t) vtable_mindustry_type_Item,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Item,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Item,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 58,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Item = registerClass(&class_mindustry_type_Item);

}
