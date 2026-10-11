#include "mindustry/world/blocks/environment/SeaBush.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "arc/util/Time.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/environment/Prop.h"
#include "mindustry/world/blocks/environment/SeaBush.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"

extern "C" {

jobject SF_mindustry_world_blocks_environment_SeaBush_rand;

void mark_mindustry_world_blocks_environment_SeaBush(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_environment_SeaBush_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_environment_SeaBush_rand)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_environment_SeaBush_rand, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_environment_Prop(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_environment_SeaBush *) object;
	if (self->F_botRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_botRegion)->clazz)->markFunction)((jobject) self->F_botRegion, mark, depth + 1);
	if (self->F_centerRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_centerRegion)->clazz)->markFunction)((jobject) self->F_centerRegion, mark, depth + 1);
}

void init_mindustry_world_blocks_environment_SeaBush_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/SeaBush:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_mindustry_world_blocks_environment_Prop_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(13);
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_lobesMin = (7);
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_lobesMax = (7);
	LINE_NUMBER(14);
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_botAngle = (jfloat(60.0f));
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_origin = (jfloat(0.1f));
	LINE_NUMBER(15);
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_sclMin = (jfloat(30.0f));
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_sclMax = (jfloat(50.0f));
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_magMin = (jfloat(5.0f));
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_magMax = (jfloat(15.0f));
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_timeRange = (jfloat(40.0f));
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(0));
	LINE_NUMBER(21);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants = (jint(0));
	LINE_NUMBER(22);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_obstructsLight = (jint(0));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_SeaBush_drawBase_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/SeaBush:drawBase", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_blocks_environment_Prop *) NULL_CHECK((frame[0].o)))->F_layer));
	LINE_NUMBER(28);
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(temp0)));
	LINE_NUMBER(29);
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(180.0f)));
	frame[2].f = temp1;
	LINE_NUMBER(30);
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jint temp2 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_lobesMin), ((jint)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_lobesMax));
	frame[3].i = temp2;
	LINE_NUMBER(31);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(32);
	jfloat temp0 = (((jfloat((frame[4].i))) / (jfloat((frame[3].i)))) * (jfloat(360.0f))) + (frame[2].f);
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_spread));
	frame[5].f = (temp0 + temp1);
	jfloat temp2 = frame[5].f;
	clinit_arc_util_Time(ctx);
	jfloat temp3 = (jfloat)SF_arc_util_Time_time;
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_timeRange));
	jfloat temp5 = temp3 + temp4;
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jfloat temp6 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_sclMin), ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_sclMax));
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SeaBush_rand;
	jfloat temp7 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_magMin), ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_magMax));
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp5, temp6, temp7);
	frame[6].f = (temp2 + temp8);
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp9 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp10 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[7].f = (temp9 * temp10);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp11 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp12 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[8].f = (temp11 * temp12);
	LINE_NUMBER(34);
	jfloat temp13 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, (frame[5].f), (jfloat(225.0f)));
	if ((floatCompare(temp13, ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_botAngle), 1)) > 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_botRegion;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_region;
label_13:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = frame[9].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(37);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[6].f), ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_origin));
	jfloat temp2 = (temp0 - temp1) + ((frame[7].f) * (jfloat(0.5f)));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[6].f), ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_origin));
	jfloat temp5 = temp3 - temp4;
	jfloat temp6 = frame[7].f;
	jfloat temp7 = frame[8].f;
	jfloat temp8 = ((jfloat)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_origin) * (jfloat(4.0f));
	jfloat temp9 = (frame[8].f) / (jfloat(2));
	jfloat temp10 = frame[6].f;
	LINE_NUMBER(36);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, sp[0].o, temp2, temp5, temp6, temp7, temp8, temp9, temp10);
	LINE_NUMBER(31);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_centerRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK((frame[0].o)))->F_centerRegion;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_18:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_environment_SeaBush(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_environment_Prop(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/SeaBush:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	{
	LINE_NUMBER(17);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_world_blocks_environment_SeaBush(ctx);
	SF_mindustry_world_blocks_environment_SeaBush_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_environment_SeaBush[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_Block_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_Block_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_blocks_environment_SeaBush_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_environment_Prop_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
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
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
};

static FieldMetadata fields[] {
	{ "botRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_environment_SeaBush, F_botRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "centerRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_environment_SeaBush, F_centerRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "lobesMin", &class_int, offsetof(mindustry_world_blocks_environment_SeaBush, F_lobesMin), "I", 1 },
	{ "lobesMax", &class_int, offsetof(mindustry_world_blocks_environment_SeaBush, F_lobesMax), "I", 1 },
	{ "botAngle", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_botAngle), "F", 1 },
	{ "origin", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_origin), "F", 1 },
	{ "sclMin", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_sclMin), "F", 1 },
	{ "sclMax", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_sclMax), "F", 1 },
	{ "magMin", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_magMin), "F", 1 },
	{ "magMax", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_magMax), "F", 1 },
	{ "timeRange", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_timeRange), "F", 1 },
	{ "spread", &class_float, offsetof(mindustry_world_blocks_environment_SeaBush, F_spread), "F", 1 },
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_world_blocks_environment_SeaBush_rand, "Larc/math/Rand;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_environment_SeaBush_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "drawBase", (intptr_t) M_mindustry_world_blocks_environment_SeaBush_drawBase_mindustry_world_Tile, VTABLE_mindustry_world_blocks_environment_SeaBush_drawBase_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_environment_SeaBush, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_environment_SeaBush{
		.nativeName = (intptr_t) "mindustry/world/blocks/environment/SeaBush",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_environment_Prop,
		.size = sizeof(mindustry_world_blocks_environment_SeaBush),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_environment_SeaBush,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_environment_SeaBush,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_environment_SeaBush,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 189,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_environment_SeaBush = registerClass(&class_mindustry_world_blocks_environment_SeaBush);

}
