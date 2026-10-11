#include "mindustry/graphics/BlockRenderer.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/LightRenderer.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Intc.h"
#include "mindustry/world/blocks/environment/Floor_UpdateRenderState.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "arc/graphics/Texture.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/graphics/BlockRenderer_CacheChunk.h"
#include "mindustry/game/Rules.h"
#include "mindustry/graphics/CacheLayer.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "mindustry/graphics/BlockRenderer_BlockLightQuadtree.h"
#include "arc/graphics/g2d/SpriteBatch.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Intc_9.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Intc_6.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Intc_8.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Intc_7.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Events.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "mindustry/graphics/BlockRenderer_FloorQuadtree.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/graphics/g2d/CacheBatch.h"
#include "java/lang/Throwable.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/struct/Queue.h"
#include "mindustry/graphics/BlockRenderer_OverlayQuadtree.h"
#include "mindustry/graphics/BlockRenderer_BlockQuadtree.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Intc_10.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Intc_11.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/Tiles.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_9.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "mindustry/graphics/Shaders_DarknessShader.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/graphics/BlockRenderer_invoke_java_lang_Runnable_2.h"
#include "mindustry/graphics/BlockRenderer_invoke_java_lang_Runnable_3.h"
#include "java/lang/Enum.h"
#include "arc/graphics/g2d/SpriteCache.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_10.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_11.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_12.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_13.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_14.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_15.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_16.h"
#include "mindustry/graphics/BlockRenderer_invoke_arc_func_Cons_17.h"

extern "C" {

jint SF_mindustry_graphics_BlockRenderer_crackRegions;
jint SF_mindustry_graphics_BlockRenderer_maxCrackSize;
jint SF_mindustry_graphics_BlockRenderer_chunkSize;
jint SF_mindustry_graphics_BlockRenderer_maxSpritesPerCacheTile;
jbool SF_mindustry_graphics_BlockRenderer_drawQuadtreeDebug;
jbool SF_mindustry_graphics_BlockRenderer_blockDrawCountDebug;
jobject SF_mindustry_graphics_BlockRenderer_shadowColor;
jobject SF_mindustry_graphics_BlockRenderer_blendShadowColor;
jint SF_mindustry_graphics_BlockRenderer_initialRequests;

void mark_mindustry_graphics_BlockRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_BlockRenderer_shadowColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BlockRenderer_shadowColor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BlockRenderer_shadowColor, mark, depth + 1);
		if (SF_mindustry_graphics_BlockRenderer_blendShadowColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BlockRenderer_blendShadowColor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BlockRenderer_blendShadowColor, mark, depth + 1);
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
	auto self = (mindustry_graphics_BlockRenderer *) object;
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_cracks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cracks)->clazz)->markFunction)((jobject) self->F_cracks, mark, depth + 1);
	if (self->F_chunksToDraw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chunksToDraw)->clazz)->markFunction)((jobject) self->F_chunksToDraw, mark, depth + 1);
	if (self->F_chunksToDrawSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chunksToDrawSet)->clazz)->markFunction)((jobject) self->F_chunksToDrawSet, mark, depth + 1);
	if (self->F_tileview)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tileview)->clazz)->markFunction)((jobject) self->F_tileview, mark, depth + 1);
	if (self->F_tileExtraCachedView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tileExtraCachedView)->clazz)->markFunction)((jobject) self->F_tileExtraCachedView, mark, depth + 1);
	if (self->F_tileWithConsumerView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tileWithConsumerView)->clazz)->markFunction)((jobject) self->F_tileWithConsumerView, mark, depth + 1);
	if (self->F_lightview)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightview)->clazz)->markFunction)((jobject) self->F_lightview, mark, depth + 1);
	if (self->F_updateFloors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateFloors)->clazz)->markFunction)((jobject) self->F_updateFloors, mark, depth + 1);
	if (self->F_lastTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTeam)->clazz)->markFunction)((jobject) self->F_lastTeam, mark, depth + 1);
	if (self->F_shadows)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadows)->clazz)->markFunction)((jobject) self->F_shadows, mark, depth + 1);
	if (self->F_dark)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dark)->clazz)->markFunction)((jobject) self->F_dark, mark, depth + 1);
	if (self->F_outArray2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outArray2)->clazz)->markFunction)((jobject) self->F_outArray2, mark, depth + 1);
	if (self->F_shadowEvents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowEvents)->clazz)->markFunction)((jobject) self->F_shadowEvents, mark, depth + 1);
	if (self->F_darkEvents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_darkEvents)->clazz)->markFunction)((jobject) self->F_darkEvents, mark, depth + 1);
	if (self->F_procLinks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_procLinks)->clazz)->markFunction)((jobject) self->F_procLinks, mark, depth + 1);
	if (self->F_procLights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_procLights)->clazz)->markFunction)((jobject) self->F_procLights, mark, depth + 1);
	if (self->F_blockTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockTree)->clazz)->markFunction)((jobject) self->F_blockTree, mark, depth + 1);
	if (self->F_blockCachedTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockCachedTree)->clazz)->markFunction)((jobject) self->F_blockCachedTree, mark, depth + 1);
	if (self->F_blockLightTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockLightTree)->clazz)->markFunction)((jobject) self->F_blockLightTree, mark, depth + 1);
	if (self->F_overlayTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlayTree)->clazz)->markFunction)((jobject) self->F_overlayTree, mark, depth + 1);
	if (self->F_floorTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floorTree)->clazz)->markFunction)((jobject) self->F_floorTree, mark, depth + 1);
	if (self->F_cacheChunks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cacheChunks)->clazz)->markFunction)((jobject) self->F_cacheChunks, mark, depth + 1);
	if (self->F_cbatch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cbatch)->clazz)->markFunction)((jobject) self->F_cbatch, mark, depth + 1);
	if (self->F_caches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_caches)->clazz)->markFunction)((jobject) self->F_caches, mark, depth + 1);
	if (self->F_queuedCacheDraws)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queuedCacheDraws)->clazz)->markFunction)((jobject) self->F_queuedCacheDraws, mark, depth + 1);
	if (self->F_queuedCacheIndices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queuedCacheIndices)->clazz)->markFunction)((jobject) self->F_queuedCacheIndices, mark, depth + 1);
	if (self->F_dirtyChunks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dirtyChunks)->clazz)->markFunction)((jobject) self->F_dirtyChunks, mark, depth + 1);
	if (self->F_blockDrawSprites)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockDrawSprites)->clazz)->markFunction)((jobject) self->F_blockDrawSprites, mark, depth + 1);
	if (self->F_blockDrawTotal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockDrawTotal)->clazz)->markFunction)((jobject) self->F_blockDrawTotal, mark, depth + 1);
}

void init_mindustry_graphics_BlockRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_FloorRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_FloorRenderer);
	init_mindustry_graphics_FloorRenderer(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_chunksToDraw = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_chunksToDrawSet = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (1024), (((jobject) &class_mindustry_world_Tile)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_tileview = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (1024), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_tileExtraCachedView = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (1024), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_tileWithConsumerView = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (1024), (((jobject) &class_mindustry_world_Tile)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_lightview = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_world_blocks_environment_Floor$UpdateRenderState)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_updateFloors = (jref) sp[1].o;
	LINE_NUMBER(52);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_brokenFade = (jfloat(0));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_shadows = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_dark = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_outArray2 = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_shadowEvents = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_darkEvents = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_procLinks = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_procLights = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockTree = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockCachedTree = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$BlockLightQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockLightQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	init_mindustry_graphics_BlockRenderer$BlockLightQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockLightTree = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$OverlayQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$OverlayQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	init_mindustry_graphics_BlockRenderer$OverlayQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_overlayTree = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$FloorQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$FloorQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	init_mindustry_graphics_BlockRenderer$FloorQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floorTree = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_CacheBatch(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_CacheBatch);
	init_arc_graphics_g2d_CacheBatch_arc_graphics_g2d_SpriteCache(ctx, sp[1].o, (jobject(nullptr)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_cbatch = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_caches = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_queuedCacheDraws = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_IntSeq, (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_queuedCacheIndices = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_dirtyChunks = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockDrawSprites = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockDrawTotal = (jref) sp[1].o;
	LINE_NUMBER(79);
	frame[1].i = (jint(0));
	}
label_29:;
	{
	if ((frame[1].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_30;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_caches;
	jint temp0 = frame[1].i;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheDraws;
	jint temp1 = frame[1].i;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheIndices;
	jint temp2 = frame[1].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(79);
	INST_IINC(1, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(85);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_newGame;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TilePreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:recacheBuilding", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(155);
	frame[3].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x) / (30));
	frame[4].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y) / (30));
	LINE_NUMBER(157);
	if ((frame[3].i) < 0) goto label_4;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	if (temp0 < (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length)) goto label_5;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (frame[4].i)));
	LINE_NUMBER(161);
	if ((frame[5].o) != nullptr) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_dirty;
	jint temp0 = (jint)((func_mindustry_graphics_BuildingCacheLayer_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_BuildingCacheLayer_ordinal_R_int])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(1));
	LINE_NUMBER(164);
	jint temp1 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	frame[6].i = temp1;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDrawSet;
	jint temp2 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, (frame[6].i));
	if (temp2 == 0) goto label_10;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dirtyChunks;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, (frame[6].i));
	}
label_10:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:cacheChunk", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(172);
	frame[4].i = (5400);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[3].i)));
	LINE_NUMBER(175);
	if ((frame[5].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	jint temp0 = frame[3].i;
	clinit_mindustry_graphics_BlockRenderer$CacheChunk(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$CacheChunk);
	init_mindustry_graphics_BlockRenderer$CacheChunk(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[5].o = sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_caches;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(180);
	if ((frame[6].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_caches;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[0].o)))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int])(ctx, (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[0].o)));
	jint temp1 = temp0 + (frame[4].i);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[7].o));
	jint temp2 = (jint)((func_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[0].o)))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int])(ctx, (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[0].o)));
	if (temp1 <= temp2) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteCache);
	init_arc_graphics_g2d_SpriteCache_int_boolean(ctx, sp[1].o, ((16382) - ((16382) % (frame[4].i))), (jint(1)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheDraws;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_caches;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[7].o));
	sp[1].o = checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[6].o = sp[1].o;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_spriteCacheIndices;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size) - (jint(1)));
	LINE_NUMBER(189);
	((func_arc_graphics_g2d_SpriteCache_beginCache) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_beginCache])(ctx, (frame[6].o));
	LINE_NUMBER(190);
	goto label_21;
	}
label_12:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_caches;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(192);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_cacheIds;
	((func_arc_graphics_g2d_SpriteCache_beginCache_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_beginCache_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	}
label_21:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cbatch;
	((arc_graphics_g2d_CacheBatch *) NULL_CHECK(sp[0].o))->F_cache = (jref) (frame[6].o);
	LINE_NUMBER(196);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(198);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cbatch;
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = sp[0].o;
	LINE_NUMBER(200);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(201);
	((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_lastSeenTeam = (jref) (frame[8].o);
	LINE_NUMBER(202);
	frame[9].i = ((frame[2].i) * (30));
	frame[10].i = ((frame[3].i) * (30));
	frame[11].i = ((frame[9].i) + (30));
	frame[12].i = ((frame[10].i) + (30));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockCachedTree;
	jfloat temp0 = jfloat((((frame[2].i) * (30)) * (8)));
	jfloat temp1 = jfloat((((frame[3].i) * (30)) * (8)));
	jfloat temp2 = jfloat(240.0f);
	jfloat temp3 = jfloat(240.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_13);
		proxy->F_field5 = (jref) (frame[8].o);
		proxy->F_field4 = (frame[1].i);
		proxy->F_field3 = (frame[12].i);
		proxy->F_field2 = (frame[10].i);
		proxy->F_field1 = (frame[11].i);
		proxy->F_field0 = (frame[9].i);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_graphics_BlockRenderer$BlockQuadtree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(226);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(227);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[7].o);
	LINE_NUMBER(228);
	goto label_34;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(226);
	INST_ASTORE(13);
	popExceptionFrame(frameRef);
	{
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(227);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = (frame[7].o);
	LINE_NUMBER(228);
	throwException(ctx, (frame[13].o));	}
label_34:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_dirty;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)) = (jint(0));
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_arc_graphics_g2d_SpriteCache_reserve_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_reserve_int_R_int])(ctx, (frame[6].o), (frame[4].i));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_cacheIds;
	jint temp1 = frame[1].i;
	jint temp2 = (jint)((func_arc_graphics_g2d_SpriteCache_endCache_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_endCache_R_int])(ctx, (frame[6].o));
	ARRAY_ACCESS(jint, sp[0].o, temp1) = temp2;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_reload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:reload", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, temp1, temp3, (jfloat(temp4)));
	init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockTree = (jref) sp[1].o;
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$BlockQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp5 = jfloat(0);
	jfloat temp6 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp8 = jfloat(temp7);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp9 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp5, temp6, temp8, (jfloat(temp9)));
	init_mindustry_graphics_BlockRenderer$BlockQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockCachedTree = (jref) sp[1].o;
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$BlockLightQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$BlockLightQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp10 = jfloat(0);
	jfloat temp11 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp12 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp13 = jfloat(temp12);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp14 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp10, temp11, temp13, (jfloat(temp14)));
	init_mindustry_graphics_BlockRenderer$BlockLightQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_blockLightTree = (jref) sp[1].o;
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$OverlayQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$OverlayQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp15 = jfloat(0);
	jfloat temp16 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp17 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp18 = jfloat(temp17);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp19 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp15, temp16, temp18, (jfloat(temp19)));
	init_mindustry_graphics_BlockRenderer$OverlayQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_overlayTree = (jref) sp[1].o;
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer$FloorQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer$FloorQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp20 = jfloat(0);
	jfloat temp21 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp22 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp23 = jfloat(temp22);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp24 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp20, temp21, temp23, (jfloat(temp24)));
	init_mindustry_graphics_BlockRenderer$FloorQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floorTree = (jref) sp[1].o;
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_caches;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[0].o));
	LINE_NUMBER(244);
	((func_arc_graphics_g2d_SpriteCache_dispose) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_dispose])(ctx, (frame[6].o));
	LINE_NUMBER(245);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[4].o));
	LINE_NUMBER(242);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(248);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp0)) / (jfloat(30.0f))));
	frame[1].i = temp1;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp2)) / (jfloat(30.0f))));
	frame[2].i = temp3;
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createMultiArray(ctx, &class_mindustry_graphics_BlockRenderer$CacheChunk, {(frame[1].i), (frame[2].i)});
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_cacheChunks = (jref) sp[1].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_updateFloors;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp4 = -99;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[1].o))->F_lastCamX = temp4;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_lastCamY = temp4;
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_hadMapLimit = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_limitMapArea);
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp8 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp7, temp8);
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp9 = jfloat(0);
	jfloat temp10 = jfloat(0);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp11 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp12 = jfloat(temp11);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp13 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp9, temp10, temp12, (jfloat(temp13)));
	LINE_NUMBER(261);
	clinit_mindustry_graphics_BlockRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BlockRenderer_blendShadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(264);
	((func_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_updateFloors;
	clinit_mindustry_world_blocks_environment_Floor$UpdateRenderState(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor$UpdateRenderState);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	init_mindustry_world_blocks_environment_Floor$UpdateRenderState_mindustry_world_Tile_mindustry_world_blocks_environment_Floor(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_30:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_updateRender_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_updateFloors;
	clinit_mindustry_world_blocks_environment_Floor$UpdateRenderState(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor$UpdateRenderState);
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	init_mindustry_world_blocks_environment_Floor$UpdateRenderState_mindustry_world_Tile_mindustry_world_blocks_environment_Floor(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_32:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[4].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	jlong temp0 = (jlong)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags;
	jlong temp1 = jlong(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	if ((longCompare((temp0 & (temp1 << ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id))), (jlong(0)))) == 0) goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible = (jint(1));
	}
label_34:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible) == 0) goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(279);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x))) + (jfloat(0.5f))), ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	}
label_36:;
	LINE_NUMBER(281);
	goto label_26;
label_27:;
	{
	LINE_NUMBER(283);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(284);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(287);
	((func_mindustry_graphics_BlockRenderer_updateDarkness) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateDarkness])(ctx, (frame[0].o));
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:updateShadows", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(294);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp5 = jfloat(temp4);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp6 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp2, temp3, temp5, (jfloat(temp6)));
	LINE_NUMBER(296);
	clinit_mindustry_graphics_BlockRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BlockRenderer_blendShadowColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(298);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible) == 0) goto label_9;
	}
label_10:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_11;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_11:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_12;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(300);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x))) + (jfloat(0.5f))), ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	}
label_9:;
	LINE_NUMBER(302);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(304);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(305);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_updateDarkness(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:updateDarkness", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_darkEvents;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp += 1;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_4;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_black;
	goto label_5;
label_4:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_5:;
	{
	sp -= 2;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(319);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_8;
	}
	{
	LINE_NUMBER(320);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(321);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, temp0, temp1, temp2, (jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight))));
	}
label_8:;
	{
	LINE_NUMBER(324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_14;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth) - (jint(1))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp3 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) - (jint(1))))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y))));
	if (temp3 != 0) goto label_14;
	}
	LINE_NUMBER(327);
	goto label_11;
label_14:;
	{
	LINE_NUMBER(330);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].f = temp0;
	LINE_NUMBER(332);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(333);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[3].f) + (jfloat(0.5f))) / (jfloat(4.0f))), (jfloat(1)));
	frame[4].f = (temp0 - temp1);
	LINE_NUMBER(334);
	SM_arc_graphics_g2d_Draw_colorl_float(ctx, (frame[4].f));
	LINE_NUMBER(335);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x))) + (jfloat(0.5f))), ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	}
label_17:;
	LINE_NUMBER(337);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(339);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(340);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:invalidateTile", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[2].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f)))));
	LINE_NUMBER(346);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[3].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f)))));
	LINE_NUMBER(347);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[4].i = ((jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(8.0f))) / (jfloat(2))))) + (jint(3)));
	LINE_NUMBER(348);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[5].i = ((jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(8.0f))) / (jfloat(2))))) + (jint(3)));
	LINE_NUMBER(350);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x)));
	if (temp0 > (frame[4].i)) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y)));
	if (temp0 > (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = -99;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[1].o))->F_lastCamX = temp0;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_lastCamY = temp0;
	}
label_5:;
	LINE_NUMBER(353);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:getShadowBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:removeFloorIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floorTree;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$FloorQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$FloorQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:addFloorIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floorTree;
	((func_mindustry_graphics_BlockRenderer$FloorQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$FloorQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(365);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:removeOverlayIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(368);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_overlayTree;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$OverlayQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$OverlayQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:addOverlayIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_overlayTree;
	((func_mindustry_graphics_BlockRenderer$OverlayQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$OverlayQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(373);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:indexBlock", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(377);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_cacheLayer;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_normal;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:indexBlockCached", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_1;
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

jbool M_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:indexOverlay", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_obstructsLight) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_emitLight) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if ((floatCompare(temp0, (jfloat(3.0f)), 1)) >= 0) goto label_1;
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

jbool M_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:indexFloor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_obstructsLight) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_emitLight) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if ((floatCompare(temp0, (jfloat(3.0f)), 1)) >= 0) goto label_1;
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

void M_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:recordIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockTree;
	((func_mindustry_graphics_BlockRenderer$BlockQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockLightTree;
	((func_mindustry_graphics_BlockRenderer$BlockLightQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockLightQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(398);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockCachedTree;
	((func_mindustry_graphics_BlockRenderer$BlockQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(399);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_overlayTree;
	((func_mindustry_graphics_BlockRenderer$OverlayQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$OverlayQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floorTree;
	((func_mindustry_graphics_BlockRenderer$FloorQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$FloorQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:recacheWall", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	frame[2].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) - (jint(4)));
	}
label_1:;
	{
	if ((frame[2].i) > (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) + (jint(4)))) goto label_2;
	}
	{
	LINE_NUMBER(405);
	frame[3].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) - (jint(4)));
	}
label_4:;
	{
	if ((frame[3].i) > (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) + (jint(4)))) goto label_5;
	}
	{
	LINE_NUMBER(406);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(407);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_darkEvents;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(410);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile])(ctx, sp[0].o, (frame[4].o));
	}
label_8:;
	{
	LINE_NUMBER(405);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(404);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(414);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_checkChanges(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:checkChanges", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_darkEvents;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_6(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_6 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_6);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_drawDarkness(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:drawDarkness", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_darkEvents;
	jint temp0 = (jint)((func_arc_struct_IntSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(427);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(430);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_darkEvents;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_7(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_7 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_7);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(441);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(442);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_darkEvents;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(446);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(449);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_darkness;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(450);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dark;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int_float(ctx, sp[0].o, temp0, temp1, (8), (jfloat(4.0f)));
	LINE_NUMBER(451);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_drawDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:drawDestroyed", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"destroyedblocks"_j))));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(457);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isPlacing_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_isPlacing_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isBreaking_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_isBreaking_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isRebuildSelecting_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_isRebuildSelecting_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasKeyboard_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasKeyboard_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_brokenFade), (jfloat(1)), (jfloat(0.1f)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_brokenFade = temp0;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_brokenFade), (jfloat(0)), (jfloat(0.1f)));
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_brokenFade = temp0;
	}
label_4:;
	{
	LINE_NUMBER(463);
	if ((floatCompare(((jfloat)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_brokenFade), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(464);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_block;
	frame[3].o = sp[0].o;
	LINE_NUMBER(466);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(16.0f)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_size) * (8)))));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, ((jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_x) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)), ((jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_y) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)));
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	goto label_7;
label_11:;
	{
	LINE_NUMBER(468);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat(0.33f)) * ((jfloat)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_brokenFade)));
	LINE_NUMBER(469);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = jfloat(0.2f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.2f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[3].o)))->F_fullIcon;
	jfloat temp2 = (jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_x) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset);
	jfloat temp3 = (jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_y) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset);
	sp[1].f = temp2;
	sp[2].f = temp3;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_rotate) == 0) goto label_14;
	}
	{
	jfloat temp0 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_rotation) * (90)));
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_visualRotationOffset);
	sp[0].f = temp1;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_FCONST(0);
label_15:;
	{
	sp -= 4;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(471);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(472);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_5:;
	LINE_NUMBER(474);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_processShadows(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:processShadows", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	((func_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:processShadows", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(482);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(485);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
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
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(488);
	if ((frame[4].o) != nullptr) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible) == 0) goto label_10;
	}
label_11:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_12;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
label_12:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_13;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
label_10:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_14;
label_13:;
	clinit_mindustry_graphics_BlockRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_BlockRenderer_blendShadowColor;
label_14:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(491);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x))) + (jfloat(0.5f))), ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(492);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(494);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(495);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(496);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(497);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(499);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(501);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_drawShadows(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:drawShadows", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	((func_mindustry_graphics_BlockRenderer_processShadows) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_processShadows])(ctx, (frame[0].o));
	LINE_NUMBER(506);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[1].f = (jfloat((temp0 * (8))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat((temp1 * (8))));
	LINE_NUMBER(507);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (jfloat(4.0f)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[4].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (jfloat(4.0f)));
	LINE_NUMBER(508);
	jfloat temp2 = frame[3].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[5].f = ((temp2 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))) / (frame[1].f));
	LINE_NUMBER(509);
	jfloat temp3 = frame[4].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[6].f = ((temp3 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) / (frame[2].f));
	LINE_NUMBER(510);
	jfloat temp4 = frame[3].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[7].f = ((temp4 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)))) / (frame[1].f));
	LINE_NUMBER(511);
	jfloat temp5 = frame[4].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[8].f = ((temp5 + (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)))) / (frame[2].f));
	LINE_NUMBER(513);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadows;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[1].o);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o)));
	LINE_NUMBER(514);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, (frame[5].f), (frame[8].f), (frame[7].f), (frame[6].f));
	LINE_NUMBER(516);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_darkness;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(517);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp8 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp6, temp7, temp8, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(518);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_processBlocks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:processBlocks", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(523);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[1].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f)))));
	LINE_NUMBER(524);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[2].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f)))));
	LINE_NUMBER(526);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[3].i = (jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(8.0f))) / (jfloat(2)))));
	LINE_NUMBER(527);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[4].i = (jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(8.0f))) / (jfloat(2)))));
	LINE_NUMBER(529);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_updateFloors;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_updateFloors;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[6].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_blocks_environment_Floor$UpdateRenderState, 1), sp[0].o));
	LINE_NUMBER(532);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(533);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor$UpdateRenderState *) NULL_CHECK((frame[8].o)))->F_floor;
	((func_mindustry_world_blocks_environment_Floor_renderUpdate_mindustry_world_blocks_environment_Floor$UpdateRenderState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_renderUpdate_mindustry_world_blocks_environment_Floor$UpdateRenderState])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(532);
	INST_IINC(7, 1);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(539);
	if ((frame[1].i) != ((jint)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastCamX)) goto label_13;
	}
	{
	if ((frame[2].i) != ((jint)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastCamY)) goto label_13;
	}
	{
	if (((jint)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastRangeX) != (frame[3].i)) goto label_13;
	}
	{
	if (((jint)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastRangeY) != (frame[4].i)) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastTeam;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_13;
	}
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDraw;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(544);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDrawSet;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_lastTeam = (jref) sp[1].o;
	LINE_NUMBER(546);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileview;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(547);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileExtraCachedView;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileWithConsumerView;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(549);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lightview;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(550);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_procLinks;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(551);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_procLights;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(552);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dirtyChunks;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(554);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(16.0f)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floorTree;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lightview;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_BlockRenderer$FloorQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$FloorQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_overlayTree;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lightview;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_BlockRenderer$OverlayQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$OverlayQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(560);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockLightTree;
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_BlockRenderer$BlockLightQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockLightQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(566);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(568);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockTree;
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Cons_17);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_graphics_BlockRenderer$BlockQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheIndices;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_31:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_32;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(602);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[10].o));
	LINE_NUMBER(601);
	INST_IINC(9, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheDraws;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_35:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_36;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_arc_struct_IntSeq, sp[0].o));
	LINE_NUMBER(607);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[12].o));
	LINE_NUMBER(608);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(605);
	INST_IINC(9, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDraw;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_8(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_8 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_8);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(640);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastCamX = (frame[1].i);
	LINE_NUMBER(641);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastCamY = (frame[2].i);
	LINE_NUMBER(642);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastRangeX = (frame[3].i);
	LINE_NUMBER(643);
	((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lastRangeY = (frame[4].i);
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:drawTree", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(648);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_blue;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(649);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_bounds;
	SM_arc_graphics_g2d_Lines_rect_arc_math_geom_Rect(ctx, sp[0].o);
	LINE_NUMBER(651);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_green;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(652);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(653);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(654);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[3].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_offset)), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_clipSize), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_clipSize));
	LINE_NUMBER(655);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	SM_arc_graphics_g2d_Lines_rect_arc_math_geom_Rect(ctx, sp[0].o);
	LINE_NUMBER(656);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(658);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_leaf) != 0) goto label_10;
	}
	{
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_botLeft;
	((func_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(660);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_botRight;
	((func_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(661);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_topLeft;
	((func_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(662);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[1].o)))->F_topRight;
	((func_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(664);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_drawBlocks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:drawBlocks", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(670);
	((func_mindustry_graphics_BlockRenderer_drawDestroyed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_drawDestroyed])(ctx, (frame[0].o));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDraw;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(674);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_3;
	}
	{
	LINE_NUMBER(675);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(676);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_layers;
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)));
	LINE_NUMBER(678);
	jfloat temp0 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(674);
	INST_IINC(2, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(715);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileview;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileview;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_world_Tile, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(717);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(719);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	frame[5].o = sp[0].o;
	LINE_NUMBER(721);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	LINE_NUMBER(723);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 != 0) goto label_18;
	}
label_17:;
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(725);
	sp[0].o = frame[4].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_22;
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_wasVisible) == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(726);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls = (jlong(0));
	LINE_NUMBER(727);
	((func_mindustry_world_Block_drawBase_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_drawBase_mindustry_world_Tile])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(728);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(729);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	LINE_NUMBER(731);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_customShadow) == 0) goto label_27;
	}
	{
	LINE_NUMBER(732);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.0f)));
	LINE_NUMBER(733);
	((func_mindustry_world_Block_drawShadow_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_drawShadow_mindustry_world_Tile])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(734);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	}
label_27:;
	{
	LINE_NUMBER(737);
	if ((frame[5].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(738);
	if ((frame[6].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(739);
	sp[0].o = frame[5].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags = (((jlong)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags) | ((jlong(1)) << ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)));
	LINE_NUMBER(740);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_wasVisible) != 0) goto label_33;
	}
	{
	LINE_NUMBER(741);
	((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_wasVisible = (jint(1));
	LINE_NUMBER(742);
	((func_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(743);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(744);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_drawCached) == 0) goto label_33;
	}
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	((func_mindustry_gen_Building_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_recache])(ctx, sp[0].o);
label_33:;
	{
	LINE_NUMBER(748);
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(749);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.1f)));
	LINE_NUMBER(750);
	((func_mindustry_gen_Building_drawCracks) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_drawCracks])(ctx, (frame[5].o));
	LINE_NUMBER(751);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	}
label_40:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_31;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawTeamOverlay) == 0) goto label_31;
	}
	{
	LINE_NUMBER(756);
	((func_mindustry_gen_Building_drawTeam) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_drawTeam])(ctx, (frame[5].o));
	LINE_NUMBER(757);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	}
label_31:;
	LINE_NUMBER(761);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_21:;
	{
	LINE_NUMBER(715);
	INST_IINC(2, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(802);
	frame[2].i = (jint(0));
	}
label_47:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileExtraCachedView;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_48;
	}
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileExtraCachedView;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(805);
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(807);
	if ((frame[4].i) != 0) goto label_54;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_wasVisible) == 0) goto label_55;
	}
label_54:;
	{
	LINE_NUMBER(808);
	if ((frame[4].i) == 0) goto label_56;
	}
	{
	LINE_NUMBER(809);
	sp[0].o = frame[3].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags = (((jlong)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags) | ((jlong(1)) << ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)));
	LINE_NUMBER(810);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_wasVisible) != 0) goto label_56;
	}
	{
	LINE_NUMBER(811);
	((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_wasVisible = (jint(1));
	LINE_NUMBER(812);
	((func_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(813);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(814);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_buildingCacheLayer;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_56:;
	{
	LINE_NUMBER(818);
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(819);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.1f)));
	LINE_NUMBER(820);
	((func_mindustry_gen_Building_drawCracks) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_drawCracks])(ctx, (frame[3].o));
	}
label_55:;
	{
	LINE_NUMBER(802);
	INST_IINC(2, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(825);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawStatus) == 0) goto label_65;
	}
	clinit_mindustry_graphics_Lod(ctx);
	(sp++)->i = SF_mindustry_graphics_Lod_l2;
	if ((--sp)->i == 0) goto label_65;
	{
	LINE_NUMBER(826);
	frame[2].i = (jint(0));
	}
label_67:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileWithConsumerView;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_65;
	}
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileWithConsumerView;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(828);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_wasVisible) == 0) goto label_70;
	}
	{
	LINE_NUMBER(830);
	((func_mindustry_gen_Building_drawStatus) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_drawStatus])(ctx, (frame[3].o));
	}
label_70:;
	{
	LINE_NUMBER(826);
	INST_IINC(2, 1);
	goto label_67;
	}
label_65:;
	{
	LINE_NUMBER(835);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	jint temp0 = (jint)((func_mindustry_graphics_LightRenderer_enabled_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(837);
	frame[2].i = (jint(0));
	}
label_74:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lightview;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_72;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lightview;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_world_Tile, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(839);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	frame[4].o = sp[0].o;
	LINE_NUMBER(841);
	if ((frame[4].o) == nullptr) goto label_78;
	}
	{
	LINE_NUMBER(842);
	((func_mindustry_gen_Building_drawLight) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_drawLight])(ctx, (frame[4].o));
	goto label_80;
	}
label_78:;
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_emitLight) == 0) goto label_80;
	}
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	((func_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].o));
	}
label_80:;
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_obstructsLight) != 0) goto label_82;
	}
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(849);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(851);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_obstructsLight) != 0) goto label_86;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_emitLight) == 0) goto label_86;
	}
	{
	LINE_NUMBER(852);
	((func_mindustry_world_blocks_environment_Floor_drawEnvironmentLight_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawEnvironmentLight_mindustry_world_Tile])(ctx, (frame[6].o), (frame[3].o));
	}
label_86:;
	{
	LINE_NUMBER(854);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[5].o)))->F_forceDrawLight) != 0) goto label_88;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_obstructsLight) != 0) goto label_82;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_emitLight) == 0) goto label_82;
	}
label_88:;
	{
	LINE_NUMBER(855);
	((func_mindustry_world_blocks_environment_Floor_drawEnvironmentLight_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_drawEnvironmentLight_mindustry_world_Tile])(ctx, (frame[5].o), (frame[3].o));
	}
label_82:;
	{
	LINE_NUMBER(837);
	INST_IINC(2, 1);
	goto label_74;
	}
label_72:;
	LINE_NUMBER(871);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:updateShadow", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[2].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[3].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_sizeOffset);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	frame[4].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	frame[5].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(877);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(878);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (((frame[6].i) + (frame[4].i)) + (frame[3].i)), (((frame[7].i) + (frame[5].i)) + (frame[3].i)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(878);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(877);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(882);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:updateShadowTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$drawBlocks$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(679);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dirtyChunks;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_9(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_9 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(690);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_dirtyChunks;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(693);
	sp[0].o = (jobject)SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(ctx);
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(694);
	sp[0].o = (jobject)SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(ctx);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projectionViewMatrix"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_mat;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(697);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheIndices;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_10(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_10 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_10);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$drawBlocks$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(698);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(699);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_caches;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_g2d_SpriteCache, sp[0].o));
	LINE_NUMBER(700);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheDraws;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_struct_IntSeq, sp[0].o));
	LINE_NUMBER(701);
	((func_arc_graphics_g2d_SpriteCache_begin_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_begin_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(702);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_11(ctx);
		auto proxy = (mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_11 *) gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer_invoke_arc_func_Intc_11);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(703);
	((func_arc_graphics_g2d_SpriteCache_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_end])(ctx, (frame[3].o));
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$drawBlocks$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(681);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[1].i));
	frame[2].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[1].i));
	frame[3].i = temp1;
	LINE_NUMBER(682);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[3].i)));
	LINE_NUMBER(684);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_5;
	}
	{
	LINE_NUMBER(685);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[4].o)))->F_dirty;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[5].i))) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(686);
	sp[0].o = frame[0].o;
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[1].i));
	jint temp2 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[1].i));
	((func_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_8:;
	{
	LINE_NUMBER(684);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(689);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$processBlocks$2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(613);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(614);
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[2].i));
	frame[4].i = temp1;
	LINE_NUMBER(615);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (frame[4].i)));
	LINE_NUMBER(616);
	if ((frame[5].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_lastSeenTeam;
	if (sp[0].o == (frame[1].o)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(617);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_7;
	}
	{
	LINE_NUMBER(618);
	((func_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(617);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_5:;
	{
	LINE_NUMBER(621);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	if ((frame[6].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_10;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_dirty;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[6].i))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(623);
	((func_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[3].i), (frame[4].i));
	}
label_13:;
	{
	LINE_NUMBER(621);
	INST_IINC(6, 1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cacheChunks;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (frame[4].i)));
	LINE_NUMBER(630);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_17;
	}
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheDraws;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_spriteCacheIndices;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	frame[7].o = (checkCast(ctx, &class_arc_struct_IntSeq, sp[0].o));
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_arc_struct_IntSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_isEmpty_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_queuedCacheIndices;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_spriteCacheIndices;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	}
label_20:;
	{
	LINE_NUMBER(636);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer$CacheChunk *) NULL_CHECK((frame[5].o)))->F_cacheIds;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	LINE_NUMBER(630);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(638);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$processBlocks$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	frame[3].o = sp[0].o;
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(572);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_drawCached) == 0) goto label_3;
	}
	{
	LINE_NUMBER(573);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x) / (30)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y) / (30)));
	frame[5].i = temp0;
	LINE_NUMBER(574);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDrawSet;
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, (frame[5].i));
	if (temp1 == 0) goto label_3;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_chunksToDraw;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[5].i));
	}
label_3:;
	{
	LINE_NUMBER(579);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasConsumers) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	if (sp[0].o != (frame[1].o)) goto label_7;
	}
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileWithConsumerView;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(583);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_drawDynamic) != 0) goto label_9;
	}
	{
	LINE_NUMBER(584);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileExtraCachedView;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	}
label_11:;
	LINE_NUMBER(585);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(588);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_procLinks;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_id));
	if (temp0 == 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileview;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_13:;
	{
	LINE_NUMBER(592);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_outArray2;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(594);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_procLinks;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_id));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_tileview;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	LINE_NUMBER(597);
	goto label_16;
label_14:;
	LINE_NUMBER(599);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$processBlocks$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_emitLight) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_procLights;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_lightview;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(564);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_BlockRenderer_lambda$drawDarkness$0_int(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$drawDarkness$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(433);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(434);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	frame[2].f = temp0;
	LINE_NUMBER(437);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) > 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[2].f) + (jfloat(0.5f))) / (jfloat(4.0f))), (jfloat(1)));
	jfloat temp2 = temp0 - temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_colorl_float(ctx, sp[0].f);
	LINE_NUMBER(438);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x))) + (jfloat(0.5f))), ((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y))) + (jfloat(0.5f))), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_BlockRenderer_lambda$checkChanges$0_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$checkChanges$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(419);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fillsTile) == 0) goto label_2;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte])(ctx, sp[1].o, (frame[1].o));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_data = temp0;
	}
label_2:;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_BlockRenderer_lambda$cacheChunk$0_int_int_int_int_int_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6) {
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$cacheChunk$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(206);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x) < (frame[0].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x) >= (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y) < (frame[2].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y) >= (frame[3].i)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildingCacheLayer;
	jint temp0 = (jint)((func_mindustry_graphics_BuildingCacheLayer_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BuildingCacheLayer_ordinal_R_int])(ctx, sp[0].o);
	if (temp0 == (frame[4].i)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	frame[8].o = sp[0].o;
	LINE_NUMBER(211);
	if ((frame[8].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[8].o), (frame[5].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(213);
	if ((frame[9].i) != 0) goto label_9;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_wasVisible) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(214);
	((func_mindustry_world_Block_drawBaseCached_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Block_drawBaseCached_mindustry_world_Tile])(ctx, (frame[7].o), (frame[6].o));
	LINE_NUMBER(215);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(216);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	LINE_NUMBER(218);
	if ((frame[8].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_team;
	if (sp[0].o == (frame[5].o)) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawTeamOverlay) == 0) goto label_14;
	}
	{
	LINE_NUMBER(219);
	((func_mindustry_gen_Building_drawTeam) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_drawTeam])(ctx, (frame[8].o));
	LINE_NUMBER(220);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	}
label_14:;
	LINE_NUMBER(222);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_10:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$new$4", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible = (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_7;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_buildingCacheLayer;
	sp[2].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(134);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_shadowEvents;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(138);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[3].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(8.0f)))));
	LINE_NUMBER(139);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[4].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(8.0f)))));
	LINE_NUMBER(140);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[5].i = ((jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(8.0f))) / (jfloat(2))))) + (jint(2)));
	LINE_NUMBER(141);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[6].i = ((jint(((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(8.0f))) / (jfloat(2))))) + (jint(2)));
	LINE_NUMBER(143);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x)));
	if (temp1 > (frame[5].i)) goto label_15;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y)));
	if (temp1 > (frame[6].i)) goto label_15;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = -99;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[1].o))->F_lastCamX = temp0;
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_lastCamY = temp0;
	}
label_15:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockTree;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floorTree;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_overlayTree;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_3;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_buildingCacheLayer;
	sp[2].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockTree;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$BlockQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockLightTree;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_graphics_BlockRenderer$BlockLightQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockLightQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_blockCachedTree;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$BlockQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$BlockQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_floorTree;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$FloorQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$FloorQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_overlayTree;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$OverlayQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer$OverlayQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$new$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$new$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	if (((jint)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_hadMapLimit) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) != 0) goto label_1;
	}
	{
	LINE_NUMBER(101);
	((func_mindustry_graphics_BlockRenderer_updateDarkness) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateDarkness])(ctx, (frame[0].o));
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_updateAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updateAll])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$new$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	((func_mindustry_graphics_BlockRenderer_reload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer_reload])(ctx, (frame[0].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:lambda$new$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {(7), (8)});
	((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_cracks = (jref) sp[1].o;
	LINE_NUMBER(87);
	frame[2].i = (jint(1));
	}
label_2:;
	{
	if ((frame[2].i) > (7)) goto label_3;
	}
	{
	LINE_NUMBER(88);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (8)) goto label_6;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK((frame[0].o)))->F_cracks;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[2].i) - (jint(1))));
	jint temp0 = frame[3].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"cracks-\u0001-\u0001"_j.string, 2, boxInteger(ctx, (frame[2].i)), boxInteger(ctx, (frame[3].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(88);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(87);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_BlockRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_BlockRenderer_crackRegions = jint(8);
	SF_mindustry_graphics_BlockRenderer_maxCrackSize = jint(7);
	SF_mindustry_graphics_BlockRenderer_chunkSize = jint(30);
	SF_mindustry_graphics_BlockRenderer_maxSpritesPerCacheTile = jint(6);
	SF_mindustry_graphics_BlockRenderer_drawQuadtreeDebug = jint(0);
	SF_mindustry_graphics_BlockRenderer_blockDrawCountDebug = jint(0);
	SF_mindustry_graphics_BlockRenderer_initialRequests = jint(1024);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer(ctx);
	{
	LINE_NUMBER(33);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.71f)));
	clinit_mindustry_graphics_BlockRenderer(ctx);
	SF_mindustry_graphics_BlockRenderer_shadowColor = sp[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	clinit_mindustry_graphics_BlockRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_BlockRenderer_shadowColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_a));
	clinit_mindustry_graphics_BlockRenderer(ctx);
	SF_mindustry_graphics_BlockRenderer_blendShadowColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_BlockRenderer[] {
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
	(void *) M_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int,
	(void *) M_mindustry_graphics_BlockRenderer_reload,
	(void *) M_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean,
	(void *) M_mindustry_graphics_BlockRenderer_updateDarkness,
	(void *) M_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer,
	(void *) M_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_checkChanges,
	(void *) M_mindustry_graphics_BlockRenderer_drawDarkness,
	(void *) M_mindustry_graphics_BlockRenderer_drawDestroyed,
	(void *) M_mindustry_graphics_BlockRenderer_processShadows,
	(void *) M_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean,
	(void *) M_mindustry_graphics_BlockRenderer_drawShadows,
	(void *) M_mindustry_graphics_BlockRenderer_processBlocks,
	(void *) M_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree,
	(void *) M_mindustry_graphics_BlockRenderer_drawBlocks,
	(void *) M_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building,
	(void *) M_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$new$2,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent,
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
	{ "recacheBuilding", "(Lmindustry/graphics/BuildingCacheLayer;Lmindustry/world/Tile;)V" },
	{ "cacheChunk", "(III)V" },
	{ "reload", "()V" },
	{ "updateShadows", "(ZZ)V" },
	{ "updateDarkness", "()V" },
	{ "invalidateTile", "(Lmindustry/world/Tile;)V" },
	{ "getShadowBuffer", "()Larc/graphics/gl/FrameBuffer;" },
	{ "removeFloorIndex", "(Lmindustry/world/Tile;)V" },
	{ "addFloorIndex", "(Lmindustry/world/Tile;)V" },
	{ "removeOverlayIndex", "(Lmindustry/world/Tile;)V" },
	{ "addOverlayIndex", "(Lmindustry/world/Tile;)V" },
	{ "indexBlock", "(Lmindustry/world/Tile;)Z" },
	{ "indexBlockCached", "(Lmindustry/world/Tile;)Z" },
	{ "indexOverlay", "(Lmindustry/world/Tile;)Z" },
	{ "indexFloor", "(Lmindustry/world/Tile;)Z" },
	{ "recordIndex", "(Lmindustry/world/Tile;)V" },
	{ "recacheWall", "(Lmindustry/world/Tile;)V" },
	{ "checkChanges", "()V" },
	{ "drawDarkness", "()V" },
	{ "drawDestroyed", "()V" },
	{ "processShadows", "()V" },
	{ "processShadows", "(ZZ)V" },
	{ "drawShadows", "()V" },
	{ "processBlocks", "()V" },
	{ "drawTree", "(Larc/math/geom/QuadTree;)V" },
	{ "drawBlocks", "()V" },
	{ "updateShadow", "(Lmindustry/gen/Building;)V" },
	{ "updateShadowTile", "(Lmindustry/world/Tile;)V" },
	{ "lambda$drawBlocks$0", "(I)V" },
	{ "lambda$drawBlocks$2", "(II)V" },
	{ "lambda$drawBlocks$1", "(I)V" },
	{ "lambda$processBlocks$2", "(Lmindustry/game/Team;I)V" },
	{ "lambda$processBlocks$1", "(Lmindustry/game/Team;Lmindustry/world/Tile;)V" },
	{ "lambda$processBlocks$0", "(Lmindustry/world/Tile;)V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$TileChangeEvent;)V" },
	{ "lambda$new$3", "(Lmindustry/game/EventType$TilePreChangeEvent;)V" },
	{ "lambda$new$2", "()V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_graphics_BlockRenderer$BlockQuadtree,
	&class_mindustry_graphics_BlockRenderer$BlockLightQuadtree,
	&class_mindustry_graphics_BlockRenderer$OverlayQuadtree,
	&class_mindustry_graphics_BlockRenderer$FloorQuadtree,
	&class_mindustry_graphics_BlockRenderer$CacheChunk,
};

static FieldMetadata fields[] {
	{ "crackRegions", &class_int, (intptr_t) &SF_mindustry_graphics_BlockRenderer_crackRegions, "I", 25 },
	{ "maxCrackSize", &class_int, (intptr_t) &SF_mindustry_graphics_BlockRenderer_maxCrackSize, "I", 25 },
	{ "chunkSize", &class_int, (intptr_t) &SF_mindustry_graphics_BlockRenderer_chunkSize, "I", 25 },
	{ "maxSpritesPerCacheTile", &class_int, (intptr_t) &SF_mindustry_graphics_BlockRenderer_maxSpritesPerCacheTile, "I", 25 },
	{ "drawQuadtreeDebug", &class_boolean, (intptr_t) &SF_mindustry_graphics_BlockRenderer_drawQuadtreeDebug, "Z", 25 },
	{ "blockDrawCountDebug", &class_boolean, (intptr_t) &SF_mindustry_graphics_BlockRenderer_blockDrawCountDebug, "Z", 25 },
	{ "shadowColor", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_BlockRenderer_shadowColor, "Larc/graphics/Color;", 25 },
	{ "blendShadowColor", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_BlockRenderer_blendShadowColor, "Larc/graphics/Color;", 25 },
	{ "initialRequests", &class_int, (intptr_t) &SF_mindustry_graphics_BlockRenderer_initialRequests, "I", 26 },
	{ "floor", &class_mindustry_graphics_FloorRenderer, offsetof(mindustry_graphics_BlockRenderer, F_floor), "Lmindustry/graphics/FloorRenderer;", 17 },
	{ "cracks", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), offsetof(mindustry_graphics_BlockRenderer, F_cracks), "[[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "chunksToDraw", &class_arc_struct_IntSeq, offsetof(mindustry_graphics_BlockRenderer, F_chunksToDraw), "Larc/struct/IntSeq;", 2 },
	{ "chunksToDrawSet", &class_arc_struct_IntSet, offsetof(mindustry_graphics_BlockRenderer, F_chunksToDrawSet), "Larc/struct/IntSet;", 2 },
	{ "tileview", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_tileview), "Larc/struct/Seq;", 2 },
	{ "tileExtraCachedView", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_tileExtraCachedView), "Larc/struct/Seq;", 2 },
	{ "tileWithConsumerView", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_tileWithConsumerView), "Larc/struct/Seq;", 2 },
	{ "lightview", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_lightview), "Larc/struct/Seq;", 2 },
	{ "updateFloors", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_updateFloors), "Larc/struct/Seq;", 2 },
	{ "hadMapLimit", &class_boolean, offsetof(mindustry_graphics_BlockRenderer, F_hadMapLimit), "Z", 2 },
	{ "lastCamX", &class_int, offsetof(mindustry_graphics_BlockRenderer, F_lastCamX), "I", 2 },
	{ "lastCamY", &class_int, offsetof(mindustry_graphics_BlockRenderer, F_lastCamY), "I", 2 },
	{ "lastRangeX", &class_int, offsetof(mindustry_graphics_BlockRenderer, F_lastRangeX), "I", 2 },
	{ "lastRangeY", &class_int, offsetof(mindustry_graphics_BlockRenderer, F_lastRangeY), "I", 2 },
	{ "lastTeam", &class_mindustry_game_Team, offsetof(mindustry_graphics_BlockRenderer, F_lastTeam), "Lmindustry/game/Team;", 2 },
	{ "brokenFade", &class_float, offsetof(mindustry_graphics_BlockRenderer, F_brokenFade), "F", 2 },
	{ "shadows", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_BlockRenderer, F_shadows), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "dark", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_BlockRenderer, F_dark), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "outArray2", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_outArray2), "Larc/struct/Seq;", 2 },
	{ "shadowEvents", &class_arc_struct_Seq, offsetof(mindustry_graphics_BlockRenderer, F_shadowEvents), "Larc/struct/Seq;", 2 },
	{ "darkEvents", &class_arc_struct_IntSet, offsetof(mindustry_graphics_BlockRenderer, F_darkEvents), "Larc/struct/IntSet;", 2 },
	{ "procLinks", &class_arc_struct_IntSet, offsetof(mindustry_graphics_BlockRenderer, F_procLinks), "Larc/struct/IntSet;", 2 },
	{ "procLights", &class_arc_struct_IntSet, offsetof(mindustry_graphics_BlockRenderer, F_procLights), "Larc/struct/IntSet;", 2 },
	{ "blockTree", &class_mindustry_graphics_BlockRenderer$BlockQuadtree, offsetof(mindustry_graphics_BlockRenderer, F_blockTree), "Lmindustry/graphics/BlockRenderer$BlockQuadtree;", 2 },
	{ "blockCachedTree", &class_mindustry_graphics_BlockRenderer$BlockQuadtree, offsetof(mindustry_graphics_BlockRenderer, F_blockCachedTree), "Lmindustry/graphics/BlockRenderer$BlockQuadtree;", 2 },
	{ "blockLightTree", &class_mindustry_graphics_BlockRenderer$BlockLightQuadtree, offsetof(mindustry_graphics_BlockRenderer, F_blockLightTree), "Lmindustry/graphics/BlockRenderer$BlockLightQuadtree;", 2 },
	{ "overlayTree", &class_mindustry_graphics_BlockRenderer$OverlayQuadtree, offsetof(mindustry_graphics_BlockRenderer, F_overlayTree), "Lmindustry/graphics/BlockRenderer$OverlayQuadtree;", 2 },
	{ "floorTree", &class_mindustry_graphics_BlockRenderer$FloorQuadtree, offsetof(mindustry_graphics_BlockRenderer, F_floorTree), "Lmindustry/graphics/BlockRenderer$FloorQuadtree;", 2 },
	{ "cacheChunks", getArrayClass(&class_mindustry_graphics_BlockRenderer$CacheChunk, 2), offsetof(mindustry_graphics_BlockRenderer, F_cacheChunks), "[[Lmindustry/graphics/BlockRenderer$CacheChunk;", 2 },
	{ "cbatch", &class_arc_graphics_g2d_CacheBatch, offsetof(mindustry_graphics_BlockRenderer, F_cbatch), "Larc/graphics/g2d/CacheBatch;", 2 },
	{ "caches", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_graphics_BlockRenderer, F_caches), "[Larc/struct/Seq;", 2 },
	{ "queuedCacheDraws", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_graphics_BlockRenderer, F_queuedCacheDraws), "[Larc/struct/Seq;", 2 },
	{ "queuedCacheIndices", getArrayClass(&class_arc_struct_IntSeq, 1), offsetof(mindustry_graphics_BlockRenderer, F_queuedCacheIndices), "[Larc/struct/IntSeq;", 2 },
	{ "dirtyChunks", &class_arc_struct_IntSet, offsetof(mindustry_graphics_BlockRenderer, F_dirtyChunks), "Larc/struct/IntSet;", 2 },
	{ "blockDrawSprites", &class_arc_struct_ObjectIntMap, offsetof(mindustry_graphics_BlockRenderer, F_blockDrawSprites), "Larc/struct/ObjectIntMap;", 2 },
	{ "blockDrawTotal", &class_arc_struct_ObjectIntMap, offsetof(mindustry_graphics_BlockRenderer, F_blockDrawTotal), "Larc/struct/ObjectIntMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_BlockRenderer, 0, "()V", 1 },
	{ "recacheBuilding", (intptr_t) M_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile, "(Lmindustry/graphics/BuildingCacheLayer;Lmindustry/world/Tile;)V", 1 },
	{ "cacheChunk", (intptr_t) M_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int, VTABLE_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int, "(III)V", 1 },
	{ "reload", (intptr_t) M_mindustry_graphics_BlockRenderer_reload, VTABLE_mindustry_graphics_BlockRenderer_reload, "()V", 1 },
	{ "updateShadows", (intptr_t) M_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean, VTABLE_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean, "(ZZ)V", 1 },
	{ "updateDarkness", (intptr_t) M_mindustry_graphics_BlockRenderer_updateDarkness, VTABLE_mindustry_graphics_BlockRenderer_updateDarkness, "()V", 1 },
	{ "invalidateTile", (intptr_t) M_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "getShadowBuffer", (intptr_t) M_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer, VTABLE_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer, "()Larc/graphics/gl/FrameBuffer;", 1 },
	{ "removeFloorIndex", (intptr_t) M_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "addFloorIndex", (intptr_t) M_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "removeOverlayIndex", (intptr_t) M_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "addOverlayIndex", (intptr_t) M_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "indexBlock", (intptr_t) M_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean, VTABLE_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "indexBlockCached", (intptr_t) M_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean, VTABLE_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "indexOverlay", (intptr_t) M_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean, VTABLE_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "indexFloor", (intptr_t) M_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean, VTABLE_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "recordIndex", (intptr_t) M_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 0 },
	{ "recacheWall", (intptr_t) M_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "checkChanges", (intptr_t) M_mindustry_graphics_BlockRenderer_checkChanges, VTABLE_mindustry_graphics_BlockRenderer_checkChanges, "()V", 1 },
	{ "drawDarkness", (intptr_t) M_mindustry_graphics_BlockRenderer_drawDarkness, VTABLE_mindustry_graphics_BlockRenderer_drawDarkness, "()V", 1 },
	{ "drawDestroyed", (intptr_t) M_mindustry_graphics_BlockRenderer_drawDestroyed, VTABLE_mindustry_graphics_BlockRenderer_drawDestroyed, "()V", 1 },
	{ "processShadows", (intptr_t) M_mindustry_graphics_BlockRenderer_processShadows, VTABLE_mindustry_graphics_BlockRenderer_processShadows, "()V", 1 },
	{ "processShadows", (intptr_t) M_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean, VTABLE_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean, "(ZZ)V", 1 },
	{ "drawShadows", (intptr_t) M_mindustry_graphics_BlockRenderer_drawShadows, VTABLE_mindustry_graphics_BlockRenderer_drawShadows, "()V", 1 },
	{ "processBlocks", (intptr_t) M_mindustry_graphics_BlockRenderer_processBlocks, VTABLE_mindustry_graphics_BlockRenderer_processBlocks, "()V", 1 },
	{ "drawTree", (intptr_t) M_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree, VTABLE_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree, "(Larc/math/geom/QuadTree;)V", 0 },
	{ "drawBlocks", (intptr_t) M_mindustry_graphics_BlockRenderer_drawBlocks, VTABLE_mindustry_graphics_BlockRenderer_drawBlocks, "()V", 1 },
	{ "updateShadow", (intptr_t) M_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building, VTABLE_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "updateShadowTile", (intptr_t) M_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "lambda$drawBlocks$0", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int, VTABLE_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int, "(I)V", 4098 },
	{ "lambda$drawBlocks$2", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int, VTABLE_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int, "(II)V", 4098 },
	{ "lambda$drawBlocks$1", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int, VTABLE_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int, "(I)V", 4098 },
	{ "lambda$processBlocks$2", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int, VTABLE_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int, "(Lmindustry/game/Team;I)V", 4098 },
	{ "lambda$processBlocks$1", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile, "(Lmindustry/game/Team;Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$processBlocks$0", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile, VTABLE_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$drawDarkness$0", (intptr_t) SM_mindustry_graphics_BlockRenderer_lambda$drawDarkness$0_int, 0, "(I)V", 4106 },
	{ "lambda$checkChanges$0", (intptr_t) SM_mindustry_graphics_BlockRenderer_lambda$checkChanges$0_int, 0, "(I)V", 4106 },
	{ "lambda$cacheChunk$0", (intptr_t) SM_mindustry_graphics_BlockRenderer_lambda$cacheChunk$0_int_int_int_int_int_mindustry_game_Team_mindustry_world_Tile, 0, "(IIIIILmindustry/game/Team;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$new$4", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent, VTABLE_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent, "(Lmindustry/game/EventType$TilePreChangeEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$new$2, VTABLE_mindustry_graphics_BlockRenderer_lambda$new$2, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_BlockRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_BlockRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/BlockRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_BlockRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_BlockRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_BlockRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_BlockRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 45,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_BlockRenderer = registerClass(&class_mindustry_graphics_BlockRenderer);

}
