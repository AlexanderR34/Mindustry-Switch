#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/environment/Floor_invoke_arc_func_Floatf_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/blocks/environment/Floor_UpdateRenderState.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/struct/Bits.h"
#include "arc/util/Log.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/graphics/CacheLayer.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/TileBitmask.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "java/lang/CharSequence.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "mindustry/content/Blocks.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_world_blocks_environment_Floor(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_environment_Floor *) object;
	if (self->F_edge)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edge)->clazz)->markFunction)((jobject) self->F_edge, mark, depth + 1);
	if (self->F_walkEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_walkEffect)->clazz)->markFunction)((jobject) self->F_walkEffect, mark, depth + 1);
	if (self->F_walkSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_walkSound)->clazz)->markFunction)((jobject) self->F_walkSound, mark, depth + 1);
	if (self->F_drownUpdateEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drownUpdateEffect)->clazz)->markFunction)((jobject) self->F_drownUpdateEffect, mark, depth + 1);
	if (self->F_status)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_status)->clazz)->markFunction)((jobject) self->F_status, mark, depth + 1);
	if (self->F_liquidDrop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquidDrop)->clazz)->markFunction)((jobject) self->F_liquidDrop, mark, depth + 1);
	if (self->F_blendGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blendGroup)->clazz)->markFunction)((jobject) self->F_blendGroup, mark, depth + 1);
	if (self->F_wall)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wall)->clazz)->markFunction)((jobject) self->F_wall, mark, depth + 1);
	if (self->F_decoration)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_decoration)->clazz)->markFunction)((jobject) self->F_decoration, mark, depth + 1);
	if (self->F_tilingRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tilingRegions)->clazz)->markFunction)((jobject) self->F_tilingRegions, mark, depth + 1);
	if (self->F_autotileRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_autotileRegions)->clazz)->markFunction)((jobject) self->F_autotileRegions, mark, depth + 1);
	if (self->F_autotileMidRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_autotileMidRegions)->clazz)->markFunction)((jobject) self->F_autotileMidRegions, mark, depth + 1);
	if (self->F_autotileVariantRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_autotileVariantRegions)->clazz)->markFunction)((jobject) self->F_autotileVariantRegions, mark, depth + 1);
	if (self->F_edges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edges)->clazz)->markFunction)((jobject) self->F_edges, mark, depth + 1);
	if (self->F_blenders)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blenders)->clazz)->markFunction)((jobject) self->F_blenders, mark, depth + 1);
	if (self->F_blended)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blended)->clazz)->markFunction)((jobject) self->F_blended, mark, depth + 1);
	if (self->F_dirs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dirs)->clazz)->markFunction)((jobject) self->F_dirs, mark, depth + 1);
	if (self->F_edgeRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edgeRegion)->clazz)->markFunction)((jobject) self->F_edgeRegion, mark, depth + 1);
}

void clinit_mindustry_world_blocks_environment_Floor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_environment_Floor_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_environment_Floor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (jint(3)));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_environment_Floor_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_environment_Floor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(111);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(26);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_edge = (jref) (((jobject) createStringLiteral(ctx, u8"stone"_j)));
	LINE_NUMBER(28);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (jfloat(1));
	LINE_NUMBER(30);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (jfloat(1));
	LINE_NUMBER(32);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_damageTaken = (jfloat(0));
	LINE_NUMBER(34);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_drownTime = (jfloat(0));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_walkEffect = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_walkSound = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_walkSoundVolume = (jfloat(0.1f));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_walkSoundPitchMin = (jfloat(0.8f));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_walkSoundPitchMax = (jfloat(1.2f));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_bubble;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_drownUpdateEffect = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(46);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(60.0f));
	LINE_NUMBER(48);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_liquidDrop = (jref) (jobject(nullptr));
	LINE_NUMBER(50);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_liquidMultiplier = (jfloat(1));
	LINE_NUMBER(54);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_overlayAlpha = (jfloat(0.65f));
	LINE_NUMBER(56);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_supportsOverlay = (jint(0));
	LINE_NUMBER(58);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_supportsBeingOverlaid = (jint(1));
	LINE_NUMBER(60);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_shallow = (jint(0));
	LINE_NUMBER(62);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendGroup = (jref) (frame[0].o);
	LINE_NUMBER(64);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_oreDefault = (jint(0));
	LINE_NUMBER(66);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_oreScale = (jfloat(24.0f));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_oreThreshold = (jfloat(0.828f));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wall = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_decoration = (jref) sp[1].o;
	LINE_NUMBER(72);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_canShadow = (jint(1));
	LINE_NUMBER(74);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_forceDrawLight = (jint(0));
	LINE_NUMBER(76);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_needsSurface = (jint(1));
	LINE_NUMBER(78);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_allowCorePlacement = (jint(0));
	LINE_NUMBER(80);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_wallOre = (jint(0));
	LINE_NUMBER(82);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendId = (jint(-1));
	LINE_NUMBER(84);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants = (jint(0));
	LINE_NUMBER(86);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotile = (jint(0));
	LINE_NUMBER(88);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidVariants = (jint(1));
	LINE_NUMBER(90);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileVariants = (jint(1));
	LINE_NUMBER(92);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_drawEdgeIn = (jint(1));
	LINE_NUMBER(94);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_drawEdgeOut = (jint(1));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_blenders = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (256));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_blended = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_dirs = (jref) sp[1].o;
	LINE_NUMBER(112);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants = (frame[2].i);
	LINE_NUMBER(113);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeableLiquid = (jint(1));
	LINE_NUMBER(114);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowRectanglePlacement = (jint(1));
	LINE_NUMBER(115);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_instantBuild = (jint(1));
	LINE_NUMBER(116);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreBuildDarkness = (jint(1));
	LINE_NUMBER(117);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_obstructsLight = (jint(0));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_rotateBlock;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeEffect = (jref) sp[1].o;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:load", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	M_mindustry_world_Block_load(ctx, (frame[0].o));
	LINE_NUMBER(125);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotile) == 0) goto label_2;
	}
	{
	LINE_NUMBER(126);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(129);
	frame[1].i = (jint(((jfloat(8.0f)) / (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl))));
	LINE_NUMBER(131);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants) <= 0) goto label_5;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_5;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_tilingRegions = (jref) sp[1].o;
	LINE_NUMBER(133);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants)) goto label_9;
	}
	{
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-tile\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, ((frame[2].i) + (jint(1)))));
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingRegions;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o), (frame[1].i), (frame[1].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingRegions;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_tilingSize = (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->length);
	LINE_NUMBER(133);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(139);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants)) goto label_5;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingRegions;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->length) != ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize)) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingRegions;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (jint(0))))))->length) == ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize)) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(141);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Block: @: In order to prevent crashes, tiling regions must all be valid regions with the same size. Tiling has been disabled. Sprite '@' has a width or height inconsistent with other tiles."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-tile\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((frame[2].i) + (jint(1)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(139);
	INST_IINC(2, 1);
	goto label_14;
	}
label_5:;
	{
	LINE_NUMBER(147);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions = (jref) sp[1].o;
	LINE_NUMBER(149);
	frame[2].i = (jint(0));
	}
label_22:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants)) goto label_23;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((frame[2].i) + (jint(1)))));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(149);
	INST_IINC(2, 1);
	goto label_22;
	}
label_23:;
	goto label_26;
label_19:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions = (jref) sp[1].o;
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(157);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotile) == 0) goto label_28;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_mindustry_world_blocks_TileBitmask_load_java_lang_String_R_Array1_arc_graphics_g2d_TextureRegion(ctx, sp[1].o);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_autotileRegions = (jref) sp[1].o;
	LINE_NUMBER(159);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileVariants) <= (jint(1))) goto label_31;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_mindustry_world_blocks_TileBitmask_loadVariants_java_lang_String_int_R_Array2_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileVariants));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_autotileVariantRegions = (jref) sp[1].o;
	}
label_31:;
	{
	LINE_NUMBER(162);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidVariants) <= (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidVariants));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_autotileMidRegions = (jref) sp[1].o;
	LINE_NUMBER(164);
	frame[2].i = (jint(0));
	}
label_35:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidVariants)) goto label_28;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidRegions;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp[2].o = temp1;
	sp += 3;
	if ((frame[2].i) != 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-13"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_38;
	}
label_37:;
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-mid-\u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((frame[2].i) + (jint(1)))));
	sp += 1;
	}
label_38:;
	{
	sp -= 4;
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(164);
	INST_IINC(2, 1);
	goto label_35;
	}
label_28:;
	{
	LINE_NUMBER(170);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, (frame[1].i), (frame[1].i));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_edges = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_edges;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(3))) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_edges;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length) == (jint(3))) goto label_40;
	}
label_43:;
	{
	LINE_NUMBER(174);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_edges = (jref) sp[1].o;
	}
label_40:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"edge"_j))));
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_edgeRegion = (jref) sp[1].o;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendGroup;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_blendId = ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id);
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_wall;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-wall"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wall = (jref) sp[1].o;
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_wall;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"darksand"_j))), (((jobject) createStringLiteral(ctx, u8"dune"_j))));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-wall"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wall = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_wall;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wall = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_decoration;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-boulder"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_java_lang_String_R_mindustry_world_Block])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_decoration = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(205);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_isLiquid) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_walkEffect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_ripple;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_walkEffect = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(209);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_isLiquid) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_walkSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_stepWater;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_walkSound = (jref) sp[1].o;
	}
label_11:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_environment_Floor_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:getDisplayIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_liquidDrop;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_liquidDrop;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_environment_Floor_getDisplayName_mindustry_world_Tile_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:getDisplayName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_liquidDrop;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_liquidDrop;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:createIcons", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendGroup;
	if (sp[0].o == (frame[0].o)) goto label_2;
	}
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(232);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_environment_Floor_icons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_icons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge-stencil"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"edge-stencil"_j))));
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(236);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_height));
	frame[4].o = sp[0].o;
	LINE_NUMBER(238);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_width)) goto label_9;
	}
	{
	LINE_NUMBER(239);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	if ((frame[6].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_height)) goto label_12;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	jint temp1 = frame[6].i;
	jint temp2 = (jint)((func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int])(ctx, (frame[3].o), (frame[5].i), (frame[6].i));
	jint temp3 = (jint)((func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int])(ctx, (frame[2].o), ((frame[5].i) % ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width)), ((frame[6].i) % ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height)));
	jint temp4 = (jint)SM_arc_graphics_Color_muli_int_int_R_int(ctx, temp2, temp3);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp4);
	LINE_NUMBER(239);
	INST_IINC(6, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(238);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_environment;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge"_j.string, 1, sp[2].o);
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].o));
	LINE_NUMBER(245);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[4].o));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:drawBase", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	((func_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(252);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_drawEdgeIn) == 0) goto label_2;
	}
	{
	LINE_NUMBER(253);
	((func_mindustry_world_blocks_environment_Floor_drawEdges_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawEdges_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(255);
	((func_mindustry_world_blocks_environment_Floor_drawOverlay_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawOverlay_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_isLiquid) == 0) goto label_5;
	}
	{
	LINE_NUMBER(258);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_overlayAlpha)));
	LINE_NUMBER(259);
	((func_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(260);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_5:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:drawMain", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) / ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) / ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize)));
	jint temp1 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, (jlong(temp0)), (jint(0)), (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingVariants) - (jint(1))));
	frame[2].i = temp1;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingRegions;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(268);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) % ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize)))), ((((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize) - (jint(1))) - (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) % ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_tilingSize))));
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(269);
	goto label_6;
	}
label_1:;
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotile) == 0) goto label_7;
	}
	{
	LINE_NUMBER(270);
	frame[2].i = (jint(0));
	LINE_NUMBER(272);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileVariants) <= (jint(1))) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileVariantRegions;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[2].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileVariantRegions;
	jint temp2 = (jint)((func_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int])(ctx, sp[1].o, temp0, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp2);
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[-1].o))->F_autotileRegions;
label_11:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(274);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	if ((frame[4].i) >= (8)) goto label_14;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(276);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_checkAutotileSame_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_checkAutotileSame_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(277);
	frame[2].i = ((frame[2].i) | ((jint(1)) << (frame[4].i)));
	}
label_17:;
	{
	LINE_NUMBER(274);
	INST_IINC(4, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(281);
	clinit_mindustry_world_blocks_TileBitmask(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_TileBitmask_values;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	LINE_NUMBER(282);
	if ((frame[4].i) != (13)) goto label_20;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidVariants) <= (jint(1))) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidRegions;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[2].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_autotileMidRegions;
	jint temp2 = (jint)((func_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int])(ctx, sp[1].o, temp0, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp2);
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	sp += 1;
	}
label_21:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(284);
	sp[0].o = frame[5].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(285);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_variant_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_variant_int_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp1, temp2);
	}
label_6:;
	{
	LINE_NUMBER(289);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_environment_Floor_checkAutotileSame_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:checkAutotileSame", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(293);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_blendGroup;
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendGroup;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_environment_Floor_variant_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:variant", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp2 = (jint)((func_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int])(ctx, sp[0].o, temp0, temp1, (((jarray) nullCheck(ctx, sp[1].o))->length));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:variant", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	jlong temp1 = jlong(temp0);
	jint temp2 = jint(0);
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[3].i) - (jint(1))));
	jint temp4 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_drawOverlay_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:drawOverlay", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(306);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	if ((frame[2].o) == (frame[0].o)) goto label_2;
	}
	{
	LINE_NUMBER(307);
	((func_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile])(ctx, (frame[2].o), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_environment_Floor_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:icons", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[2].o, sp[3].o);
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp[3].o = temp2;
	sp += 4;
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u00011"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 5;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:floorChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_environment_Floor_shouldIndex_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:shouldIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:updateRender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_renderUpdate_mindustry_world_blocks_environment_Floor$UpdateRenderState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:renderUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:hasSurface", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_isLiquid) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid) != 0) goto label_1;
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

jbool M_mindustry_world_blocks_environment_Floor_isDeep_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:isDeep", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_drownTime), (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_mindustry_world_blocks_environment_Floor_drawNonLayer_mindustry_world_Tile_mindustry_graphics_CacheLayer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:drawNonLayer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_dirs;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blenders;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blended;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(348);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (8)) goto label_5;
	}
	{
	LINE_NUMBER(349);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(352);
	if ((frame[5].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_drawEdgeOut) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	if (sp[0].o != (frame[2].o)) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blended;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_arc_struct_Bits_getAndSet_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_getAndSet_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blenders;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_dirs;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[5].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
label_9:;
	{
	LINE_NUMBER(348);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(360);
	((func_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_drawEdges_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:drawEdges", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blenders;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blended;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_dirs;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (8)) goto label_6;
	}
	{
	LINE_NUMBER(370);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(373);
	if ((frame[5].o) != nullptr) goto label_10;
	}
	goto label_11;
label_10:;
	{
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_13;
	}
label_12:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_14:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(377);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[6].o)))->F_drawEdgeOut) == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_doEdge_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_doEdge_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[5].o), (frame[6].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer;
	if (sp[0].o != (frame[2].o)) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, (frame[6].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blended;
	jint temp0 = (jint)((func_arc_struct_Bits_getAndSet_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_getAndSet_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[6].o)))->F_id));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blenders;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_17:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_dirs;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[6].o)))->F_id);
	}
label_11:;
	{
	LINE_NUMBER(369);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(385);
	((func_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:drawBlended", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blenders;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_environment_Floor_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_blocks_environment_Floor_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blenders;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o));
	LINE_NUMBER(393);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (8)) goto label_6;
	}
	{
	LINE_NUMBER(394);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(397);
	if ((frame[7].o) != nullptr) goto label_10;
	}
	goto label_11;
label_10:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_13;
	}
label_12:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_14:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(401);
	if ((frame[8].o) != (frame[4].o)) goto label_11;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_16;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_dirs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) != ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id)) goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_edge_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_edge_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[4].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y), ((jint(1)) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((jint(1)) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(403);
	sp[0].o = frame[9].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_11:;
	{
	LINE_NUMBER(393);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(406);
	goto label_2;
label_3:;
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:realBlendId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isAir_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isAir_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_OreBlock)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jint temp0 = (jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_blendId;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (-(temp0 | (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_blendId) << (15))));
	}
label_1:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendId);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:edges", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_blendGroup;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_edges;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_environment_Floor_edge_int_int_int_int_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:edge", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), ((jint(2)) - (frame[4].i))));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_environment_Floor_doEdge_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:doEdge", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(427);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int])(ctx, (frame[3].o), (frame[2].o));
	jint temp1 = (jint)((func_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 > temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (sp[0].o != nullptr) goto label_2;
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

jbool M_mindustry_world_blocks_environment_Floor_damages_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:damages", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_damageTaken), (jfloat(0)), -1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_status;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[0].o)))->F_status;
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_damage), (jfloat(0)), -1)) <= 0) goto label_2;
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

jfloat M_mindustry_world_blocks_environment_Floor_lambda$drawBlended$0_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/environment/Floor:lambda$drawBlended$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(390);
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == (frame[0].o)) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->i = jint(99999);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return (jfloat((sp[0].i + sp[1].i)));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_environment_Floor;
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

	{ // Field liquidDrop
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

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field edges
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[43]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_environment_Floor[] {
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
	(void *) M_mindustry_world_blocks_environment_Floor_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_blocks_environment_Floor_load,
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
	(void *) M_mindustry_world_blocks_environment_Floor_createIcons_mindustry_graphics_MultiPacker,
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
	(void *) M_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile,
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
	(void *) M_mindustry_world_blocks_environment_Floor_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_environment_Floor_getDisplayName_mindustry_world_Tile_R_java_lang_String,
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
	(void *) M_mindustry_world_blocks_environment_Floor_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_environment_Floor_checkAutotileSame_mindustry_world_Tile_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_variant_int_int_R_int,
	(void *) M_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int,
	(void *) M_mindustry_world_blocks_environment_Floor_drawOverlay_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_environment_Floor_shouldIndex_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_renderUpdate_mindustry_world_blocks_environment_Floor$UpdateRenderState,
	(void *) M_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_isDeep_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_drawNonLayer_mindustry_world_Tile_mindustry_graphics_CacheLayer,
	(void *) M_mindustry_world_blocks_environment_Floor_drawEdges_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_environment_Floor_edge_int_int_int_int_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_environment_Floor_doEdge_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_damages_R_boolean,
	(void *) M_mindustry_world_blocks_environment_Floor_lambda$drawBlended$0_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_float,
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
	{ "drawMain", "(Lmindustry/world/Tile;)V" },
	{ "checkAutotileSame", "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z" },
	{ "variant", "(II)I" },
	{ "variant", "(III)I" },
	{ "drawOverlay", "(Lmindustry/world/Tile;)V" },
	{ "floorChanged", "(Lmindustry/world/Tile;)V" },
	{ "shouldIndex", "(Lmindustry/world/Tile;)Z" },
	{ "updateRender", "(Lmindustry/world/Tile;)Z" },
	{ "renderUpdate", "(Lmindustry/world/blocks/environment/Floor$UpdateRenderState;)V" },
	{ "hasSurface", "()Z" },
	{ "isDeep", "()Z" },
	{ "drawNonLayer", "(Lmindustry/world/Tile;Lmindustry/graphics/CacheLayer;)V" },
	{ "drawEdges", "(Lmindustry/world/Tile;)V" },
	{ "drawBlended", "(Lmindustry/world/Tile;Z)V" },
	{ "realBlendId", "(Lmindustry/world/Tile;)I" },
	{ "edges", "(II)[[Larc/graphics/g2d/TextureRegion;" },
	{ "edge", "(IIII)Larc/graphics/g2d/TextureRegion;" },
	{ "doEdge", "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)Z" },
	{ "damages", "()Z" },
	{ "lambda$drawBlended$0", "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)F" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_environment_Floor$UpdateRenderState,
};

static FieldMetadata fields[] {
	{ "edge", &class_java_lang_String, offsetof(mindustry_world_blocks_environment_Floor, F_edge), "Ljava/lang/String;", 1 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_speedMultiplier), "F", 1 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_dragMultiplier), "F", 1 },
	{ "damageTaken", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_damageTaken), "F", 1 },
	{ "drownTime", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_drownTime), "F", 1 },
	{ "walkEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_environment_Floor, F_walkEffect), "Lmindustry/entities/Effect;", 1 },
	{ "walkSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_environment_Floor, F_walkSound), "Larc/audio/Sound;", 1 },
	{ "walkSoundVolume", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_walkSoundVolume), "F", 1 },
	{ "walkSoundPitchMin", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_walkSoundPitchMin), "F", 1 },
	{ "walkSoundPitchMax", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_walkSoundPitchMax), "F", 1 },
	{ "drownUpdateEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_environment_Floor, F_drownUpdateEffect), "Lmindustry/entities/Effect;", 1 },
	{ "status", &class_mindustry_type_StatusEffect, offsetof(mindustry_world_blocks_environment_Floor, F_status), "Lmindustry/type/StatusEffect;", 1 },
	{ "statusDuration", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_statusDuration), "F", 1 },
	{ "liquidDrop", &class_mindustry_type_Liquid, offsetof(mindustry_world_blocks_environment_Floor, F_liquidDrop), "Lmindustry/type/Liquid;", 1 },
	{ "liquidMultiplier", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_liquidMultiplier), "F", 1 },
	{ "isLiquid", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_isLiquid), "Z", 1 },
	{ "overlayAlpha", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_overlayAlpha), "F", 1 },
	{ "supportsOverlay", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_supportsOverlay), "Z", 1 },
	{ "supportsBeingOverlaid", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_supportsBeingOverlaid), "Z", 1 },
	{ "shallow", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_shallow), "Z", 1 },
	{ "blendGroup", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_environment_Floor, F_blendGroup), "Lmindustry/world/Block;", 1 },
	{ "oreDefault", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_oreDefault), "Z", 1 },
	{ "oreScale", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_oreScale), "F", 1 },
	{ "oreThreshold", &class_float, offsetof(mindustry_world_blocks_environment_Floor, F_oreThreshold), "F", 1 },
	{ "wall", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_environment_Floor, F_wall), "Lmindustry/world/Block;", 1 },
	{ "decoration", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_environment_Floor, F_decoration), "Lmindustry/world/Block;", 1 },
	{ "canShadow", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_canShadow), "Z", 1 },
	{ "forceDrawLight", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_forceDrawLight), "Z", 1 },
	{ "needsSurface", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_needsSurface), "Z", 1 },
	{ "allowCorePlacement", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_allowCorePlacement), "Z", 1 },
	{ "wallOre", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_wallOre), "Z", 1 },
	{ "blendId", &class_int, offsetof(mindustry_world_blocks_environment_Floor, F_blendId), "I", 1 },
	{ "tilingVariants", &class_int, offsetof(mindustry_world_blocks_environment_Floor, F_tilingVariants), "I", 1 },
	{ "autotile", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_autotile), "Z", 1 },
	{ "autotileMidVariants", &class_int, offsetof(mindustry_world_blocks_environment_Floor, F_autotileMidVariants), "I", 1 },
	{ "autotileVariants", &class_int, offsetof(mindustry_world_blocks_environment_Floor, F_autotileVariants), "I", 1 },
	{ "drawEdgeIn", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_drawEdgeIn), "Z", 1 },
	{ "drawEdgeOut", &class_boolean, offsetof(mindustry_world_blocks_environment_Floor, F_drawEdgeOut), "Z", 1 },
	{ "tilingRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 3), offsetof(mindustry_world_blocks_environment_Floor, F_tilingRegions), "[[[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "autotileRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_blocks_environment_Floor, F_autotileRegions), "[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "autotileMidRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_blocks_environment_Floor, F_autotileMidRegions), "[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "autotileVariantRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), offsetof(mindustry_world_blocks_environment_Floor, F_autotileVariantRegions), "[[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "tilingSize", &class_int, offsetof(mindustry_world_blocks_environment_Floor, F_tilingSize), "I", 4 },
	{ "edges", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), offsetof(mindustry_world_blocks_environment_Floor, F_edges), "[[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "blenders", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_environment_Floor, F_blenders), "Larc/struct/Seq;", 4 },
	{ "blended", &class_arc_struct_Bits, offsetof(mindustry_world_blocks_environment_Floor, F_blended), "Larc/struct/Bits;", 4 },
	{ "dirs", getArrayClass(&class_int, 1), offsetof(mindustry_world_blocks_environment_Floor, F_dirs), "[I", 4 },
	{ "edgeRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_environment_Floor, F_edgeRegion), "Larc/graphics/g2d/TextureRegion;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_environment_Floor_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_environment_Floor_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_blocks_environment_Floor_load, VTABLE_mindustry_world_blocks_environment_Floor_load, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_environment_Floor_init, VTABLE_mindustry_world_blocks_environment_Floor_init, "()V", 1 },
	{ "getDisplayIcon", (intptr_t) M_mindustry_world_blocks_environment_Floor_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_environment_Floor_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getDisplayName", (intptr_t) M_mindustry_world_blocks_environment_Floor_getDisplayName_mindustry_world_Tile_R_java_lang_String, VTABLE_mindustry_world_blocks_environment_Floor_getDisplayName_mindustry_world_Tile_R_java_lang_String, "(Lmindustry/world/Tile;)Ljava/lang/String;", 1 },
	{ "createIcons", (intptr_t) M_mindustry_world_blocks_environment_Floor_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_world_blocks_environment_Floor_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "drawBase", (intptr_t) M_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile, VTABLE_mindustry_world_blocks_environment_Floor_drawBase_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "drawMain", (intptr_t) M_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile, VTABLE_mindustry_world_blocks_environment_Floor_drawMain_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "checkAutotileSame", (intptr_t) M_mindustry_world_blocks_environment_Floor_checkAutotileSame_mindustry_world_Tile_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_checkAutotileSame_mindustry_world_Tile_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z", 1 },
	{ "variant", (intptr_t) M_mindustry_world_blocks_environment_Floor_variant_int_int_R_int, VTABLE_mindustry_world_blocks_environment_Floor_variant_int_int_R_int, "(II)I", 1 },
	{ "variant", (intptr_t) M_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int, VTABLE_mindustry_world_blocks_environment_Floor_variant_int_int_int_R_int, "(III)I", 1 },
	{ "drawOverlay", (intptr_t) M_mindustry_world_blocks_environment_Floor_drawOverlay_mindustry_world_Tile, VTABLE_mindustry_world_blocks_environment_Floor_drawOverlay_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_environment_Floor_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_environment_Floor_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "floorChanged", (intptr_t) M_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile, VTABLE_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "shouldIndex", (intptr_t) M_mindustry_world_blocks_environment_Floor_shouldIndex_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_shouldIndex_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "updateRender", (intptr_t) M_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "renderUpdate", (intptr_t) M_mindustry_world_blocks_environment_Floor_renderUpdate_mindustry_world_blocks_environment_Floor$UpdateRenderState, VTABLE_mindustry_world_blocks_environment_Floor_renderUpdate_mindustry_world_blocks_environment_Floor$UpdateRenderState, "(Lmindustry/world/blocks/environment/Floor$UpdateRenderState;)V", 1 },
	{ "hasSurface", (intptr_t) M_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean, "()Z", 1 },
	{ "isDeep", (intptr_t) M_mindustry_world_blocks_environment_Floor_isDeep_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean, "()Z", 1 },
	{ "drawNonLayer", (intptr_t) M_mindustry_world_blocks_environment_Floor_drawNonLayer_mindustry_world_Tile_mindustry_graphics_CacheLayer, VTABLE_mindustry_world_blocks_environment_Floor_drawNonLayer_mindustry_world_Tile_mindustry_graphics_CacheLayer, "(Lmindustry/world/Tile;Lmindustry/graphics/CacheLayer;)V", 1 },
	{ "drawEdges", (intptr_t) M_mindustry_world_blocks_environment_Floor_drawEdges_mindustry_world_Tile, VTABLE_mindustry_world_blocks_environment_Floor_drawEdges_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4 },
	{ "drawBlended", (intptr_t) M_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean, VTABLE_mindustry_world_blocks_environment_Floor_drawBlended_mindustry_world_Tile_boolean, "(Lmindustry/world/Tile;Z)V", 4 },
	{ "realBlendId", (intptr_t) M_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int, VTABLE_mindustry_world_blocks_environment_Floor_realBlendId_mindustry_world_Tile_R_int, "(Lmindustry/world/Tile;)I", 1 },
	{ "edges", (intptr_t) M_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_environment_Floor_edges_int_int_R_Array2_arc_graphics_g2d_TextureRegion, "(II)[[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "edge", (intptr_t) M_mindustry_world_blocks_environment_Floor_edge_int_int_int_int_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_environment_Floor_edge_int_int_int_int_R_arc_graphics_g2d_TextureRegion, "(IIII)Larc/graphics/g2d/TextureRegion;", 4 },
	{ "doEdge", (intptr_t) M_mindustry_world_blocks_environment_Floor_doEdge_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_doEdge_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_boolean, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)Z", 4 },
	{ "damages", (intptr_t) M_mindustry_world_blocks_environment_Floor_damages_R_boolean, VTABLE_mindustry_world_blocks_environment_Floor_damages_R_boolean, "()Z", 1 },
	{ "lambda$drawBlended$0", (intptr_t) M_mindustry_world_blocks_environment_Floor_lambda$drawBlended$0_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_float, VTABLE_mindustry_world_blocks_environment_Floor_lambda$drawBlended$0_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_R_float, "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)F", 4098 },
};

Class class_mindustry_world_blocks_environment_Floor{
		.nativeName = (intptr_t) "mindustry/world/blocks/environment/Floor",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_environment_Floor),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_environment_Floor,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_environment_Floor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_environment_Floor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 48,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 209,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_environment_Floor = registerClass(&class_mindustry_world_blocks_environment_Floor);

}
