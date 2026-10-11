#include "mindustry/core/Renderer.h"
#include "arc/assets/AssetDescriptor.h"
#include "mindustry/graphics/Pixelator.h"
#include "java/util/concurrent/Future.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/LightRenderer.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "mindustry/graphics/DebugCollisionRenderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "arc/util/ScreenUtils.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/ui/fragments/PlanConfigFragment.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/maps/MapPreviewLoader.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_7.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_8.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_9.h"
#include "mindustry/game/EventType_DisposeEvent.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_41.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_40.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "mindustry/graphics/CacheLayer.h"
#include "arc/func/Cons.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "mindustry/core/Renderer_1.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "mindustry/graphics/Shaders_ShieldShader.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Buffers.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/graphics/Shaders_BuildBeamShader.h"
#include "mindustry/graphics/FogRenderer.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_22.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_21.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Events.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_29.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_28.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_27.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_26.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_25.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_24.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_23.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/nio/Buffer.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_33.h"
#include "mindustry/graphics/EnvRenderers.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_32.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_31.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_30.h"
#include "mindustry/core/PerfCounter.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_39.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_38.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_37.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_36.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_35.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/core/Renderer_invoke_java_lang_Runnable_34.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_12.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_13.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "arc/graphics/g2d/Bloom.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_10.h"
#include "arc/graphics/Camera.h"
#include "mindustry/core/Renderer_invoke_arc_func_Cons_11.h"
#include "mindustry/graphics/OverlayRenderer.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/ui/fragments/BlockInventoryFragment.h"
#include "mindustry/gen/Groups.h"
#include "java/lang/Float.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "arc/graphics/PixmapIO.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "arc/ApplicationListener.h"
#include "mindustry/gen/Player.h"
#include "mindustry/core/Renderer_EnvRenderer.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_core_Renderer_laserOpacity;
jfloat SF_mindustry_core_Renderer_unitLaserOpacity;
jfloat SF_mindustry_core_Renderer_bridgeOpacity;

void mark_mindustry_core_Renderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_Renderer *) object;
	if (self->F_blocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocks)->clazz)->markFunction)((jobject) self->F_blocks, mark, depth + 1);
	if (self->F_fog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fog)->clazz)->markFunction)((jobject) self->F_fog, mark, depth + 1);
	if (self->F_minimap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minimap)->clazz)->markFunction)((jobject) self->F_minimap, mark, depth + 1);
	if (self->F_overlays)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlays)->clazz)->markFunction)((jobject) self->F_overlays, mark, depth + 1);
	if (self->F_lights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lights)->clazz)->markFunction)((jobject) self->F_lights, mark, depth + 1);
	if (self->F_pixelator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixelator)->clazz)->markFunction)((jobject) self->F_pixelator, mark, depth + 1);
	if (self->F_planets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planets)->clazz)->markFunction)((jobject) self->F_planets, mark, depth + 1);
	if (self->F_bloom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bloom)->clazz)->markFunction)((jobject) self->F_bloom, mark, depth + 1);
	if (self->F_backgroundBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backgroundBuffer)->clazz)->markFunction)((jobject) self->F_backgroundBuffer, mark, depth + 1);
	if (self->F_effectBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effectBuffer)->clazz)->markFunction)((jobject) self->F_effectBuffer, mark, depth + 1);
	if (self->F_envRenderers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_envRenderers)->clazz)->markFunction)((jobject) self->F_envRenderers, mark, depth + 1);
	if (self->F_customBackgrounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customBackgrounds)->clazz)->markFunction)((jobject) self->F_customBackgrounds, mark, depth + 1);
	if (self->F_bubbles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bubbles)->clazz)->markFunction)((jobject) self->F_bubbles, mark, depth + 1);
	if (self->F_splashes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splashes)->clazz)->markFunction)((jobject) self->F_splashes, mark, depth + 1);
	if (self->F_fluidFrames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fluidFrames)->clazz)->markFunction)((jobject) self->F_fluidFrames, mark, depth + 1);
	if (self->F_launchAnimator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchAnimator)->clazz)->markFunction)((jobject) self->F_launchAnimator, mark, depth + 1);
	if (self->F_clearColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clearColor)->clazz)->markFunction)((jobject) self->F_clearColor, mark, depth + 1);
	if (self->F_camShakeOffset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camShakeOffset)->clazz)->markFunction)((jobject) self->F_camShakeOffset, mark, depth + 1);
}

void init_mindustry_core_Renderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(75);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BlockRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_BlockRenderer);
	init_mindustry_graphics_BlockRenderer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_FogRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_FogRenderer);
	init_mindustry_graphics_FogRenderer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_fog = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MinimapRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_MinimapRenderer);
	init_mindustry_graphics_MinimapRenderer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_OverlayRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_OverlayRenderer);
	init_mindustry_graphics_OverlayRenderer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_overlays = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_LightRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LightRenderer);
	init_mindustry_graphics_LightRenderer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pixelator(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Pixelator);
	init_mindustry_graphics_Pixelator(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelator = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_effectBuffer = (jref) sp[1].o;
	LINE_NUMBER(42);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_drawWeather = (jint(1));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_drawDisplays = (jint(1));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_drawLight = (jint(1));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_pixelate = (jint(0));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_showPings = (jint(1));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_showOtherBuildPlans = (jint(1));
	LINE_NUMBER(45);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minZoom = (jfloat(1.5f));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_maxZoom = (jfloat(6.0f));
	LINE_NUMBER(48);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minZoomInGame = (jfloat(0.5f));
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_maxZoomInGame = (jfloat(6.0f));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_envRenderers = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_customBackgrounds = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (16));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_bubbles = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (12));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_splashes = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_clearColor = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(59);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, temp0);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_targetscale = temp1;
	LINE_NUMBER(57);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale = ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_targetscale);
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camShakeOffset = (jref) sp[1].o;
	LINE_NUMBER(76);
	clinit_arc_graphics_Camera(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Camera);
	init_arc_graphics_Camera(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	SF_arc_Core_camera = sp[0].o;
	LINE_NUMBER(77);
	SM_mindustry_graphics_Shaders_init(ctx);
	LINE_NUMBER(79);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_shake_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:shake", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeIntensity;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(100.0f)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeIntensity = temp2;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeTime), (frame[2].f));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeTime = temp3;
	LINE_NUMBER(88);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeReduction = (((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeIntensity) / ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeTime));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:addEnvRenderer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_envRenderers;
	clinit_mindustry_core_Renderer$EnvRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_Renderer$EnvRenderer);
	init_mindustry_core_Renderer$EnvRenderer_int_java_lang_Runnable(ctx, sp[1].o, (frame[1].i), (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:addCustomBackground", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_customBackgrounds;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetRenderer);
	init_mindustry_graphics_g3d_PlanetRenderer(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_planets = (jref) sp[1].o;
	LINE_NUMBER(103);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bloom"_j))), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(104);
	((func_mindustry_core_Renderer_setupBloom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_setupBloom])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(107);
	SM_mindustry_graphics_EnvRenderers_init(ctx);
	LINE_NUMBER(108);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bubbles;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bubbles;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"bubble-\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(109);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_splashes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_splashes;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"splash-\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(1, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(111);
	((func_mindustry_core_Renderer_loadFluidFrames) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_loadFluidFrames])(ctx, (frame[0].o));
	LINE_NUMBER(113);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/clouds.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_9);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_loadFluidFrames(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:loadFluidFrames", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {(jint(2)), (50)});
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_fluidFrames = (jref) sp[1].o;
	LINE_NUMBER(134);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"liquid"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"gas"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(136);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(138);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (50)) goto label_7;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_fluidFrames;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	jint temp0 = frame[3].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"fluid-\u0001-\u0001"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))), boxInteger(ctx, (frame[3].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(138);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(136);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:getFluidFrames", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_fluidFrames;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_fluidFrames;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jint(0))))))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(146);
	((func_mindustry_core_Renderer_loadFluidFrames) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_loadFluidFrames])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_fluidFrames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_render;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(154);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(156);
	frame[1].f = ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_targetscale);
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutscene) == 0) goto label_4;
	}
	{
	LINE_NUMBER(159);
	jfloat temp0 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minZoom;
	jfloat temp1 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_maxZoom;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutsceneZoom));
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(162);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_core_Renderer_maxScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_maxScale_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	frame[2].f = temp3;
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale), (frame[2].f), (jfloat(0.1f)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camerascale = temp4;
	LINE_NUMBER(164);
	jint temp5 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale), (frame[2].f), (jfloat(1,000000e-03f)));
	if (temp5 == 0) goto label_8;
	}
	{
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale = (frame[2].f);
	}
label_8:;
	{
	LINE_NUMBER(165);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitlaseropacity"_j))));
	clinit_mindustry_core_Renderer(ctx);
	SF_mindustry_core_Renderer_unitLaserOpacity = ((jfloat(temp0)) / (jfloat(100.0f)));
	LINE_NUMBER(166);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lasersopacity"_j))));
	clinit_mindustry_core_Renderer(ctx);
	SF_mindustry_core_Renderer_laserOpacity = ((jfloat(temp1)) / (jfloat(100.0f)));
	LINE_NUMBER(167);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp2 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bridgeopacity"_j))));
	clinit_mindustry_core_Renderer(ctx);
	SF_mindustry_core_Renderer_bridgeOpacity = ((jfloat(temp2)) / (jfloat(100.0f)));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp3 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"animatedwater"_j))));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateWater = temp3;
	LINE_NUMBER(169);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_animateShields = ((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_animateWater);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp4 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"blockstatus"_j))));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawStatus = temp4;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp5 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"effects"_j))));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_enableEffects = temp5;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp6 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"hidedisplays"_j))));
	sp += 1;
	if (temp6 != 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 2;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawDisplays = sp[1].i;
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jfloat temp0 = (jfloat)((func_arc_Settings_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getFloat_java_lang_String_float_R_float])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"maxzoomingamemultiplier"_j))), (jfloat(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_maxZoomInGame = (temp0 * ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_maxZoom));
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minZoom;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jfloat temp2 = (jfloat)((func_arc_Settings_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getFloat_java_lang_String_float_R_float])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"minzoomingamemultiplier"_j))), (jfloat(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minZoomInGame = (temp1 / temp2);
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp3 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"drawlight"_j))), (jint(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawLight = temp3;
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp4 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"showpings"_j))), (jint(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_showPings = temp4;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp5 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"showotherbuildplans"_j))), (jint(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_showOtherBuildPlans = temp5;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp6 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"pixelate"_j))));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate = temp6;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime = (jfloat(0));
	}
label_25:;
	{
	LINE_NUMBER(182);
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime), (jfloat(0)), -1)) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	((func_mindustry_world_blocks_LaunchAnimator_updateLaunch) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_updateLaunch, sp[0].o))(ctx, sp[0].o);
	}
label_28:;
	{
	LINE_NUMBER(185);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_weatherAlpha = (jfloat(0));
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camerascale = temp0;
	LINE_NUMBER(188);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_31;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_landTime = (((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_landTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	goto label_31;
	}
label_26:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_weatherAlpha), (jfloat(1)), (jfloat(0.08f)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha = temp0;
	}
label_31:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime), (jfloat(0)), 1)) > 0) goto label_32;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	((func_mindustry_world_blocks_LaunchAnimator_endLaunch) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_endLaunch, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(195);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator = (jref) (jobject(nullptr));
	}
label_32:;
	{
	LINE_NUMBER(198);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width = ((jfloat(temp0)) / ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale));
	LINE_NUMBER(199);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height = ((jfloat(temp1)) / ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale));
	LINE_NUMBER(201);
	SM_mindustry_graphics_Lod_update(ctx);
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp2 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_38;
	}
	{
	LINE_NUMBER(204);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime = (jfloat(0));
	LINE_NUMBER(205);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((func_arc_Graphics_clear_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_clear_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update])(ctx, sp[0].o);
	LINE_NUMBER(209);
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeTime), (jfloat(0)), -1)) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(210);
	jfloat temp0 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeIntensity;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"screenshake"_j))), (jint(4)));
	frame[3].f = ((temp0 * ((jfloat(temp1)) / (jfloat(4.0f)))) * (jfloat(0.75f)));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camShakeOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2);
	LINE_NUMBER(212);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camShakeOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeIntensity = (((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeIntensity) - (((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeReduction) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeTime = (((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeIntensity), (jfloat(0)), (jfloat(100.0f)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeIntensity = temp3;
	LINE_NUMBER(216);
	goto label_51;
	}
label_43:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camShakeOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(218);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_shakeIntensity = (jfloat(0));
	}
label_51:;
	{
	LINE_NUMBER(221);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate) == 0) goto label_53;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_pixelator;
	((func_mindustry_graphics_Pixelator_drawPixelate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Pixelator_drawPixelate])(ctx, sp[0].o);
	goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(224);
	((func_mindustry_core_Renderer_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_draw])(ctx, (frame[0].o));
	}
label_55:;
	{
	LINE_NUMBER(227);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camShakeOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_41:;
	{
	LINE_NUMBER(231);
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_glErrors) >= (100)) goto label_56;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare((temp0 % (jlong(10ll))), (jlong(0)))) != 0) goto label_56;
	}
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)SM_arc_graphics_Gl_getError_R_int(ctx);
	frame[3].i = temp0;
	LINE_NUMBER(233);
	if ((frame[3].i) == 0) goto label_56;
	}
	{
	LINE_NUMBER(234);
	switch((frame[3].i)) {
		case 1280: goto label_60;
		case 1281: goto label_61;
		case 1282: goto label_62;
		case 1283: goto label_63;
		case 1284: goto label_63;
		case 1285: goto label_64;
		case 1286: goto label_65;
		default: goto label_63;
	}
	}
label_61:;
	{
	LINE_NUMBER(235);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"invalid value"_j));
	sp += 1;
	goto label_66;
	}
label_62:;
	{
	LINE_NUMBER(236);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"invalid operation"_j));
	sp += 1;
	goto label_66;
	}
label_65:;
	{
	LINE_NUMBER(237);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"invalid framebuffer operation"_j));
	sp += 1;
	goto label_66;
	}
label_60:;
	{
	LINE_NUMBER(238);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"invalid enum"_j));
	sp += 1;
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(239);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"out of memory"_j));
	sp += 1;
	goto label_66;
	}
label_63:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"unknown error (\u0001)"_j.string, 1, boxInteger(ctx, (frame[3].i)));
	sp += 1;
	}
label_66:;
	{
	sp -= 1;
	LINE_NUMBER(241);
	frame[4].o = sp[0].o;
	LINE_NUMBER(243);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Error: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[4].o);
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_glErrors = (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_glErrors) + (jint(1)));
	}
label_56:;
	{
	LINE_NUMBER(248);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_render;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_updateAllDarkness(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:updateAllDarkness", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_updateDarkness) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateDarkness])(ctx, sp[0].o);
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_updateAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_updateAll])(ctx, sp[0].o);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_Renderer_isCutscene_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:isCutscene", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime), (jfloat(0)), -1)) <= 0) goto label_1;
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

jfloat M_mindustry_core_Renderer_landScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:landScale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	clinit_mindustry_game_EventType$DisposeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$DisposeEvent);
	init_mindustry_game_EventType$DisposeEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:resume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bloom"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_resume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_resume])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_setupBloom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:setupBloom", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_dispose])(ctx, sp[0].o);
	LINE_NUMBER(281);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom = (jref) (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_Bloom(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_Bloom);
	init_arc_graphics_g2d_Bloom_boolean(ctx, sp[1].o, (jint(1)));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_bloom = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(288);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(284);
	frame[1].o = sp[0].o;
	LINE_NUMBER(285);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bloom"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o != nullptr) {
		((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@error.bloom"_j))));
	}
	LINE_NUMBER(287);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_7:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_toggleBloom_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:toggleBloom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(292);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(294);
	((func_mindustry_core_Renderer_setupBloom) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_setupBloom])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_dispose])(ctx, sp[0].o);
	LINE_NUMBER(299);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom = (jref) (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(302);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_preDraw;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(306);
	SM_mindustry_maps_MapPreviewLoader_checkPreviews(ctx);
	LINE_NUMBER(308);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((func_arc_graphics_Camera_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_update])(ctx, sp[0].o);
	LINE_NUMBER(310);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(311);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(314);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_clearColor;
	((func_arc_Graphics_clear_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_clear_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(315);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(317);
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_animateWater) != 0) goto label_8;
	}
	{
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_animateShields) == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_9:;
	{
	LINE_NUMBER(321);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, sp[0].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_checkChanges) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_checkChanges])(ctx, sp[0].o);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_processBlocks) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_processBlocks])(ctx, sp[0].o);
	LINE_NUMBER(326);
	SM_arc_graphics_g2d_Draw_sort_boolean(ctx, (jint(1)));
	LINE_NUMBER(328);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_draw;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(329);
	SM_mindustry_maps_MapPreviewLoader_checkPreviews(ctx);
	LINE_NUMBER(331);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate) == 0) goto label_16;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_pixelator;
	((func_mindustry_graphics_Pixelator_register) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Pixelator_register])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(335);
	jfloat temp0 = jfloat(-10.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(336);
	jfloat temp1 = jfloat(0);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	LINE_NUMBER(337);
	jfloat temp2 = jfloat(29.0f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp2, sp[0].o);
	LINE_NUMBER(338);
	jfloat temp3 = jfloat(29.91f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp3, sp[0].o);
	LINE_NUMBER(343);
	jfloat temp4 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_25);
		sp[0].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_26);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_drawRange_float_java_lang_Runnable_java_lang_Runnable(ctx, temp4, sp[0].o, sp[1].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_envRenderers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_core_Renderer$EnvRenderer, sp[0].o));
	LINE_NUMBER(347);
	jint temp0 = (jint)((mindustry_core_Renderer$EnvRenderer *) NULL_CHECK((frame[2].o)))->F_env;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if ((temp0 & ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env)) != ((jint)((mindustry_core_Renderer$EnvRenderer *) NULL_CHECK((frame[2].o)))->F_env)) goto label_26;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_core_Renderer$EnvRenderer *) NULL_CHECK((frame[2].o)))->F_renderer;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_26:;
	LINE_NUMBER(350);
	goto label_23;
label_24:;
	{
	LINE_NUMBER(353);
	jfloat temp0 = jfloat(4.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	frame[1].f = (temp0 / temp1);
	LINE_NUMBER(354);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_11);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_game_MapObjectives_eachRunning_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_worldMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_30:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(363);
	sp[0].o = frame[3].o;
	sp += 1;
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[3].o)))->F_autoscale) == 0) goto label_33;
	}
	INST_FLOAD(1);
	goto label_34;
label_33:;
	INST_FCONST(1);
label_34:;
	{
	sp -= 2;
	((func_mindustry_game_MapObjectives$ObjectiveMarker_draw_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_draw_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(364);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(365);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_lights;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_graphics_LightRenderer_add_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting) == 0) goto label_38;
	}
	{
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_drawLight) == 0) goto label_38;
	}
	{
	LINE_NUMBER(384);
	jfloat temp0 = jfloat(140.0f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_lights;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_38:;
	{
	LINE_NUMBER(387);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_enableDarkness) == 0) goto label_40;
	}
	{
	LINE_NUMBER(388);
	jfloat temp0 = jfloat(80.0f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_40:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_graphics_g2d_Bloom_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp2 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bloomintensity"_j))), (6));
	((func_arc_graphics_g2d_Bloom_setBloomIntensity_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_setBloomIntensity_float])(ctx, sp[0].o, (((jfloat(temp2)) / (jfloat(4.0f))) + (jfloat(1))));
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp3 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bloomblur"_j))), (jint(1)));
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_blurPasses = temp3;
	LINE_NUMBER(395);
	jfloat temp4 = jfloat(99.98f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp4, sp[0].o);
	LINE_NUMBER(396);
	jfloat temp5 = jfloat(110.02f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp5, sp[0].o);
	}
label_42:;
	{
	LINE_NUMBER(399);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((func_mindustry_input_InputHandler_drawCommanded) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawCommanded])(ctx, sp[0].o);
	LINE_NUMBER(401);
	jfloat temp0 = jfloat(85.0f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_overlays;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(403);
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_animateShields) == 0) goto label_50;
	}
	clinit_mindustry_graphics_Shaders(ctx);
	(sp++)->o = SF_mindustry_graphics_Shaders_shield;
	if ((--sp)->o == nullptr) goto label_50;
	{
	LINE_NUMBER(405);
	jfloat temp0 = jfloat(125.0f);
	jfloat temp1 = jfloat(1);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_drawRange_float_float_java_lang_Runnable_java_lang_Runnable(ctx, temp0, temp1, sp[0].o, sp[1].o);
	LINE_NUMBER(410);
	jfloat temp2 = jfloat(122.0f);
	jfloat temp3 = jfloat(1);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_drawRange_float_float_java_lang_Runnable_java_lang_Runnable(ctx, temp2, temp3, sp[0].o, sp[1].o);
	}
label_50:;
	{
	LINE_NUMBER(416);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(418);
	jfloat temp0 = jfloat(120.0f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_overlays;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_37);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(419);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_55;
	}
	{
	jfloat temp0 = jfloat(155.0f);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_55:;
	{
	LINE_NUMBER(420);
	jfloat temp0 = jfloat(160.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	if (sp[0].o == nullptr) goto label_57;
	}
	{
	LINE_NUMBER(425);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(160.0f)));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	((func_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(427);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_57:;
	{
	LINE_NUMBER(430);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_drawOver;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(431);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_drawBlocks) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_drawBlocks])(ctx, sp[0].o);
	LINE_NUMBER(433);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_12);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_draw_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_draw_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(435);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drawhitboxes"_j))));
	if (temp0 == 0) goto label_64;
	}
	LINE_NUMBER(436);
	SM_mindustry_graphics_DebugCollisionRenderer_draw(ctx);
label_64:;
	{
	LINE_NUMBER(439);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(440);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(441);
	SM_arc_graphics_g2d_Draw_sort_boolean(ctx, (jint(0)));
	LINE_NUMBER(443);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_postDraw;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_drawBackground(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:drawBackground", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_backgroundTexture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planetBackground;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planetBackground;
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_drawSkybox) != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(449);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_backgroundTexture;
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_graphics_Texture)));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(450);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getFileHandleResolver_R_arc_assets_loaders_FileHandleResolver) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getFileHandleResolver_R_arc_assets_loaders_FileHandleResolver])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_backgroundTexture;
	sp[0].o = (jobject)((func_arc_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_assets_loaders_FileHandleResolver, INDEX_arc_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(453);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_extEquals_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"png"_j))));
	if (temp0 != 0) goto label_7;
	}
label_6:;
	LINE_NUMBER(454);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(457);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_backgroundTexture;
	sp[2].o = ((jobject) &class_arc_graphics_Texture);
	clinit_mindustry_core_Renderer$1(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_core_Renderer$1);
	init_mindustry_core_Renderer$1_mindustry_core_Renderer(ctx, sp[3].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(462);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	((func_arc_assets_AssetManager_finishLoadingAsset_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_finishLoadingAsset_arc_assets_AssetDescriptor])(ctx, sp[0].o, (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(465);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_backgroundTexture;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_graphics_Texture)));
	frame[1].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(466);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(467);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_u = (jfloat(0));
	LINE_NUMBER(468);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_v = (jfloat(0));
	LINE_NUMBER(470);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[2].f = (temp0 / ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(471);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_backgroundScl);
	LINE_NUMBER(473);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_u2 = (frame[3].f);
	LINE_NUMBER(474);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_v2 = ((frame[3].f) / (frame[2].f));
	LINE_NUMBER(476);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	LINE_NUMBER(478);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_backgroundSpeed));
	if (temp1 != 0) goto label_19;
	}
	{
	LINE_NUMBER(479);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].f = (temp0 / ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_backgroundSpeed));
	LINE_NUMBER(480);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[5].f = (temp1 / ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_backgroundSpeed));
	}
label_19:;
	{
	LINE_NUMBER(483);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp0 = frame[4].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_backgroundOffsetX);
	jfloat temp2 = -(frame[5].f);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((func_arc_graphics_g2d_TextureRegion_scroll_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scroll_float_float])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_backgroundOffsetY)));
	LINE_NUMBER(485);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp5 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp3, temp4, temp5, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height));
	}
label_1:;
	{
	LINE_NUMBER(488);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planetBackground;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(489);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[1].i = temp2;
	LINE_NUMBER(491);
	frame[2].i = (jint(0));
	LINE_NUMBER(492);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	if (sp[0].o != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(493);
	frame[2].i = (jint(1));
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[1].o, (frame[1].i), (frame[1].i));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_backgroundBuffer = (jref) sp[1].o;
	}
label_27:;
	{
	LINE_NUMBER(497);
	if ((frame[2].i) != 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[1].i));
	if (temp0 == 0) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(500);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planetBackground;
	frame[3].o = sp[0].o;
	LINE_NUMBER(503);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[3].o)))->F_viewW = (frame[1].i);
	LINE_NUMBER(504);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[3].o)))->F_viewH = (frame[1].i);
	LINE_NUMBER(505);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[3].o)))->F_alwaysDrawAtmosphere = (jint(1));
	LINE_NUMBER(506);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[3].o)))->F_drawUi = (jint(0));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_planets;
	((func_mindustry_graphics_g3d_PlanetRenderer_render_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_render_mindustry_graphics_g3d_PlanetParams])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(513);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height));
	frame[3].f = temp1;
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (frame[3].f), (-(frame[3].f)));
	}
label_23:;
	{
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_customBackgroundCallback;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_customBackgrounds;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_customBackgroundCallback;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_customBackgrounds;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_customBackgroundCallback;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (checkCast(ctx, &class_java_lang_Runnable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_lang_Runnable, sp[0].o)));
	}
label_40:;
	LINE_NUMBER(520);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_scaleCamera_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:scaleCamera", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_targetscale = (((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_targetscale) * (((frame[1].f) / (jfloat(4.0f))) + (jfloat(1))));
	LINE_NUMBER(524);
	((func_mindustry_core_Renderer_clampScale) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_clampScale])(ctx, (frame[0].o));
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_clampScale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:clampScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_targetscale;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_core_Renderer_maxScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_maxScale_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_targetscale = temp3;
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_core_Renderer_getDisplayScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:getDisplayScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camerascale);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_core_Renderer_minScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:minScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutscene) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minZoom));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_minZoomInGame));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_core_Renderer_maxScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:maxScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(540);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCutscene) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_maxZoom));
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_maxZoomInGame));
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp0);
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	INST_I2F();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_core_Renderer_getScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:getScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_targetscale);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(548);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_targetscale = (frame[1].f);
	LINE_NUMBER(549);
	((func_mindustry_core_Renderer_clampScale) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_clampScale])(ctx, (frame[0].o));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_Renderer_isLaunching_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:isLaunching", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return ((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launching);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_core_Renderer_getLandTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:getLandTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_core_Renderer_getLandTimeIn_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:getLandTimeIn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(562);
	jfloat temp0 = (jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 / temp1);
	LINE_NUMBER(563);
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launching) != 0) goto label_3;
	}
	{
	frame[1].f = ((jfloat(1)) - (frame[1].f));
	}
label_3:;
	{
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:showLanding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(568);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator = (jref) (frame[1].o);
	LINE_NUMBER(569);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launching = (jint(0));
	LINE_NUMBER(570);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_landTime = temp0;
	LINE_NUMBER(572);
	((func_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camerascale = temp1;
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:showLaunch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(577);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	LINE_NUMBER(578);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_planConfig;
	((func_mindustry_ui_fragments_PlanConfigFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(579);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_inv;
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(581);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator = (jref) (frame[1].o);
	LINE_NUMBER(582);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launching = (jint(1));
	LINE_NUMBER(583);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_landTime = temp0;
	LINE_NUMBER(585);
	((func_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_takeMapScreenshot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:takeMapScreenshot", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 * (8));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[2].i = (temp1 * (8));
	LINE_NUMBER(590);
	frame[3].i = (((((frame[1].i) * (frame[2].i)) * (jint(4))) / (1024)) / (1024));
	LINE_NUMBER(592);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_checkScreenshotMemory) == 0) goto label_0;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_14;
	}
	INST_BIPUSH(65);
	goto label_15;
label_14:;
	INST_BIPUSH(120);
label_15:;
	sp -= 2; if (sp[0].i < sp[1].i) goto label_0;
	{
	LINE_NUMBER(593);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@screenshot.invalid"_j))));
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(598);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_disable = (jint(1));
	LINE_NUMBER(599);
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(601);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_drawWeather = (jint(0));
	LINE_NUMBER(602);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[5].f = ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[6].f = ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(603);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_disableUI = (jint(1));
	LINE_NUMBER(604);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width = (jfloat((frame[1].i)));
	LINE_NUMBER(605);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height = (jfloat((frame[2].i)));
	LINE_NUMBER(606);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat((frame[1].i))) / (jfloat(2))) + (jfloat(4.0f)));
	LINE_NUMBER(607);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat((frame[2].i))) / (jfloat(2))) + (jfloat(4.0f)));
	LINE_NUMBER(608);
	sp[0].o = frame[4].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(609);
	((func_mindustry_core_Renderer_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_draw])(ctx, (frame[0].o));
	LINE_NUMBER(610);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(611);
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferPixels_int_int_int_int_boolean_R_Array1_byte(ctx, (jint(0)), (jint(0)), (frame[1].i), (frame[2].i), (jint(1)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(612);
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, (frame[4].o));
	LINE_NUMBER(613);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_disableUI = (jint(0));
	LINE_NUMBER(614);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width = (frame[5].f);
	LINE_NUMBER(615);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height = (frame[6].f);
	LINE_NUMBER(616);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f), (frame[8].f));
	LINE_NUMBER(617);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_drawWeather = (jint(1));
	LINE_NUMBER(618);
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, (frame[4].o));
	LINE_NUMBER(620);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_40);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(635);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_disable = (jint(0));
	LINE_NUMBER(636);
	goto label_42;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(631);
	frame[4].o = sp[0].o;
	LINE_NUMBER(632);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[4].o));
	LINE_NUMBER(633);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@screenshot.error"_j))), (frame[4].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(635);
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_disable = (jint(0));
	LINE_NUMBER(636);
	goto label_42;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(635);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	clinit_mindustry_graphics_Lod(ctx);
	SF_mindustry_graphics_Lod_disable = (jint(0));
	LINE_NUMBER(636);
	throwException(ctx, (frame[10].o));	}
label_42:;
	LINE_NUMBER(638);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$takeMapScreenshot$0_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$takeMapScreenshot$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(621);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(622);
	ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[3].i) + (jint(3)))) = (jint(-1));
	LINE_NUMBER(621);
	INST_IINC(3, 4);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(624);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(625);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_pixels;
	SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(ctx, sp[0].o, temp0, sp[1].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(626);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_screenshotDirectory;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"screenshot-\u0001.png"_j.string, 1, boxLong(ctx, temp1));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(627);
	SM_arc_graphics_PixmapIO_writePng_arc_files_Fi_arc_graphics_Pixmap(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(628);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[3].o));
	LINE_NUMBER(629);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_java_lang_Runnable_41);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$takeMapScreenshot$1_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$takeMapScreenshot$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(629);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"screenshot"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((func_arc_files_Fi_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_toString_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$draw$9(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_landTime), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_launchAnimator;
	((func_mindustry_world_blocks_LaunchAnimator_drawLaunch) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_LaunchAnimator, INDEX_mindustry_world_blocks_LaunchAnimator_drawLaunch, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$draw$8(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_buildBeam;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$draw$7(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$draw$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_shield;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$draw$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_effectBuffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$draw$3_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(368);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Renderer_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_core_Renderer_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_core_Renderer_invoke_arc_func_Cons_13);
		proxy->F_field0 = (frame[0].f);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_game_MapObjectives_eachRunning_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(376);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_lightMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(377);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[2].o)))->F_autoscale) == 0) goto label_5;
	}
	INST_FLOAD(0);
	goto label_6;
label_5:;
	INST_FCONST(1);
label_6:;
	{
	sp -= 2;
	((func_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(378);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(380);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$draw$4_float_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jfloat param0, jobject param1) {
	if (!param1) return;
	auto obj = (mindustry_game_MapObjectives$MapObjective *) param1;
	if (!obj->F_markers) return;

	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_markers;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	if (!frame[5].o) goto label_6;
	LINE_NUMBER(370);
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[5].o)))->F_light) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[5].o;
	sp += 1;
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[5].o)))->F_autoscale) == 0) goto label_8;
	}
	INST_FLOAD(0);
	goto label_9;
label_8:;
	INST_FCONST(1);
label_9:;
	POP_N(2); // Pop method args
	((func_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float])(ctx, sp[0].o, sp[1].f);
label_6:;
	{
	LINE_NUMBER(369);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$draw$2_float_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jfloat param0, jobject param1) {
	if (!param1) return;
	auto obj = (mindustry_game_MapObjectives$MapObjective *) param1;
	if (!obj->F_markers) return;

	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_markers;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	if (!frame[5].o) goto label_6;
	LINE_NUMBER(356);
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[5].o)))->F_world) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = frame[5].o;
	sp += 1;
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[5].o)))->F_autoscale) == 0) goto label_8;
	}
	INST_FLOAD(0);
	goto label_9;
label_8:;
	INST_FCONST(1);
label_9:;
	POP_N(2); // Pop method args
	((func_mindustry_game_MapObjectives$ObjectiveMarker_draw_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_draw_float])(ctx, sp[0].o, sp[1].f);
label_6:;
	{
	LINE_NUMBER(355);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$draw$1(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	{
	LINE_NUMBER(343);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader_boolean(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$draw$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_beginDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_beginDraw])(ctx, sp[0].o);
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	((func_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$init$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(126);
	((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_backgroundBuffer = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Renderer_lambda$init$1_arc_graphics_Texture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$init$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$init$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	((func_mindustry_core_Renderer_loadFluidFrames) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Renderer_loadFluidFrames])(ctx, (frame[0].o));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_core_Renderer *) NULL_CHECK(sp[2].o))->F_shakeReduction = temp0;
	((mindustry_core_Renderer *) NULL_CHECK(sp[1].o))->F_shakeIntensity = temp0;
	((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_shakeTime = temp0;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK((frame[0].o)))->F_camShakeOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_core_Renderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer(ctx);
	{
	LINE_NUMBER(29);
	clinit_mindustry_core_Renderer(ctx);
	SF_mindustry_core_Renderer_laserOpacity = (jfloat(0.5f));
	clinit_mindustry_core_Renderer(ctx);
	SF_mindustry_core_Renderer_unitLaserOpacity = (jfloat(1));
	clinit_mindustry_core_Renderer(ctx);
	SF_mindustry_core_Renderer_bridgeOpacity = (jfloat(0.75f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_Renderer;
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

	{ // Field bloom
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field backgroundBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Field launchAnimator
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[33]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_core_Renderer[] {
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
	(void *) M_mindustry_core_Renderer_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_mindustry_core_Renderer_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_mindustry_core_Renderer_resume,
	(void *) M_mindustry_core_Renderer_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
	(void *) M_mindustry_core_Renderer_shake_float_float,
	(void *) M_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable,
	(void *) M_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable,
	(void *) M_mindustry_core_Renderer_loadFluidFrames,
	(void *) M_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_core_Renderer_updateAllDarkness,
	(void *) M_mindustry_core_Renderer_isCutscene_R_boolean,
	(void *) M_mindustry_core_Renderer_landScale_R_float,
	(void *) M_mindustry_core_Renderer_setupBloom,
	(void *) M_mindustry_core_Renderer_toggleBloom_boolean,
	(void *) M_mindustry_core_Renderer_draw,
	(void *) M_mindustry_core_Renderer_drawBackground,
	(void *) M_mindustry_core_Renderer_scaleCamera_float,
	(void *) M_mindustry_core_Renderer_clampScale,
	(void *) M_mindustry_core_Renderer_getDisplayScale_R_float,
	(void *) M_mindustry_core_Renderer_minScale_R_float,
	(void *) M_mindustry_core_Renderer_maxScale_R_float,
	(void *) M_mindustry_core_Renderer_getScale_R_float,
	(void *) M_mindustry_core_Renderer_setScale_float,
	(void *) M_mindustry_core_Renderer_isLaunching_R_boolean,
	(void *) M_mindustry_core_Renderer_getLandTime_R_float,
	(void *) M_mindustry_core_Renderer_getLandTimeIn_R_float,
	(void *) M_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator,
	(void *) M_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator,
	(void *) M_mindustry_core_Renderer_takeMapScreenshot,
	(void *) M_mindustry_core_Renderer_lambda$draw$9,
	(void *) M_mindustry_core_Renderer_lambda$draw$8,
	(void *) M_mindustry_core_Renderer_lambda$draw$7,
	(void *) M_mindustry_core_Renderer_lambda$draw$6,
	(void *) M_mindustry_core_Renderer_lambda$draw$5,
	(void *) M_mindustry_core_Renderer_lambda$draw$0,
	(void *) M_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent,
	(void *) M_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
	{ "shake", "(FF)V" },
	{ "addEnvRenderer", "(ILjava/lang/Runnable;)V" },
	{ "addCustomBackground", "(Ljava/lang/String;Ljava/lang/Runnable;)V" },
	{ "loadFluidFrames", "()V" },
	{ "getFluidFrames", "()[[Larc/graphics/g2d/TextureRegion;" },
	{ "updateAllDarkness", "()V" },
	{ "isCutscene", "()Z" },
	{ "landScale", "()F" },
	{ "setupBloom", "()V" },
	{ "toggleBloom", "(Z)V" },
	{ "draw", "()V" },
	{ "drawBackground", "()V" },
	{ "scaleCamera", "(F)V" },
	{ "clampScale", "()V" },
	{ "getDisplayScale", "()F" },
	{ "minScale", "()F" },
	{ "maxScale", "()F" },
	{ "getScale", "()F" },
	{ "setScale", "(F)V" },
	{ "isLaunching", "()Z" },
	{ "getLandTime", "()F" },
	{ "getLandTimeIn", "()F" },
	{ "showLanding", "(Lmindustry/world/blocks/LaunchAnimator;)V" },
	{ "showLaunch", "(Lmindustry/world/blocks/LaunchAnimator;)V" },
	{ "takeMapScreenshot", "()V" },
	{ "lambda$draw$9", "()V" },
	{ "lambda$draw$8", "()V" },
	{ "lambda$draw$7", "()V" },
	{ "lambda$draw$6", "()V" },
	{ "lambda$draw$5", "()V" },
	{ "lambda$draw$0", "()V" },
	{ "lambda$init$2", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$init$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ResetEvent;)V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, };

static jclass innerClasses[] {
	&class_mindustry_core_Renderer$EnvRenderer,
};

static FieldMetadata fields[] {
	{ "laserOpacity", &class_float, (intptr_t) &SF_mindustry_core_Renderer_laserOpacity, "F", 9 },
	{ "unitLaserOpacity", &class_float, (intptr_t) &SF_mindustry_core_Renderer_unitLaserOpacity, "F", 9 },
	{ "bridgeOpacity", &class_float, (intptr_t) &SF_mindustry_core_Renderer_bridgeOpacity, "F", 9 },
	{ "blocks", &class_mindustry_graphics_BlockRenderer, offsetof(mindustry_core_Renderer, F_blocks), "Lmindustry/graphics/BlockRenderer;", 17 },
	{ "fog", &class_mindustry_graphics_FogRenderer, offsetof(mindustry_core_Renderer, F_fog), "Lmindustry/graphics/FogRenderer;", 17 },
	{ "minimap", &class_mindustry_graphics_MinimapRenderer, offsetof(mindustry_core_Renderer, F_minimap), "Lmindustry/graphics/MinimapRenderer;", 17 },
	{ "overlays", &class_mindustry_graphics_OverlayRenderer, offsetof(mindustry_core_Renderer, F_overlays), "Lmindustry/graphics/OverlayRenderer;", 17 },
	{ "lights", &class_mindustry_graphics_LightRenderer, offsetof(mindustry_core_Renderer, F_lights), "Lmindustry/graphics/LightRenderer;", 17 },
	{ "pixelator", &class_mindustry_graphics_Pixelator, offsetof(mindustry_core_Renderer, F_pixelator), "Lmindustry/graphics/Pixelator;", 17 },
	{ "planets", &class_mindustry_graphics_g3d_PlanetRenderer, offsetof(mindustry_core_Renderer, F_planets), "Lmindustry/graphics/g3d/PlanetRenderer;", 1 },
	{ "bloom", &class_arc_graphics_g2d_Bloom, offsetof(mindustry_core_Renderer, F_bloom), "Larc/graphics/g2d/Bloom;", 1 },
	{ "backgroundBuffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_core_Renderer, F_backgroundBuffer), "Larc/graphics/gl/FrameBuffer;", 1 },
	{ "effectBuffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_core_Renderer, F_effectBuffer), "Larc/graphics/gl/FrameBuffer;", 1 },
	{ "animateShields", &class_boolean, offsetof(mindustry_core_Renderer, F_animateShields), "Z", 1 },
	{ "animateWater", &class_boolean, offsetof(mindustry_core_Renderer, F_animateWater), "Z", 1 },
	{ "drawWeather", &class_boolean, offsetof(mindustry_core_Renderer, F_drawWeather), "Z", 1 },
	{ "drawStatus", &class_boolean, offsetof(mindustry_core_Renderer, F_drawStatus), "Z", 1 },
	{ "enableEffects", &class_boolean, offsetof(mindustry_core_Renderer, F_enableEffects), "Z", 1 },
	{ "drawDisplays", &class_boolean, offsetof(mindustry_core_Renderer, F_drawDisplays), "Z", 1 },
	{ "drawLight", &class_boolean, offsetof(mindustry_core_Renderer, F_drawLight), "Z", 1 },
	{ "pixelate", &class_boolean, offsetof(mindustry_core_Renderer, F_pixelate), "Z", 1 },
	{ "showPings", &class_boolean, offsetof(mindustry_core_Renderer, F_showPings), "Z", 1 },
	{ "showOtherBuildPlans", &class_boolean, offsetof(mindustry_core_Renderer, F_showOtherBuildPlans), "Z", 1 },
	{ "weatherAlpha", &class_float, offsetof(mindustry_core_Renderer, F_weatherAlpha), "F", 1 },
	{ "minZoom", &class_float, offsetof(mindustry_core_Renderer, F_minZoom), "F", 1 },
	{ "maxZoom", &class_float, offsetof(mindustry_core_Renderer, F_maxZoom), "F", 1 },
	{ "minZoomInGame", &class_float, offsetof(mindustry_core_Renderer, F_minZoomInGame), "F", 1 },
	{ "maxZoomInGame", &class_float, offsetof(mindustry_core_Renderer, F_maxZoomInGame), "F", 1 },
	{ "envRenderers", &class_arc_struct_Seq, offsetof(mindustry_core_Renderer, F_envRenderers), "Larc/struct/Seq;", 1 },
	{ "customBackgrounds", &class_arc_struct_ObjectMap, offsetof(mindustry_core_Renderer, F_customBackgrounds), "Larc/struct/ObjectMap;", 1 },
	{ "bubbles", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_core_Renderer, F_bubbles), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "splashes", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_core_Renderer, F_splashes), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "fluidFrames", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), offsetof(mindustry_core_Renderer, F_fluidFrames), "[[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "launchAnimator", &class_mindustry_world_blocks_LaunchAnimator, offsetof(mindustry_core_Renderer, F_launchAnimator), "Lmindustry/world/blocks/LaunchAnimator;", 2 },
	{ "clearColor", &class_arc_graphics_Color, offsetof(mindustry_core_Renderer, F_clearColor), "Larc/graphics/Color;", 2 },
	{ "targetscale", &class_float, offsetof(mindustry_core_Renderer, F_targetscale), "F", 1 },
	{ "camerascale", &class_float, offsetof(mindustry_core_Renderer, F_camerascale), "F", 1 },
	{ "landTime", &class_float, offsetof(mindustry_core_Renderer, F_landTime), "F", 1 },
	{ "shakeIntensity", &class_float, offsetof(mindustry_core_Renderer, F_shakeIntensity), "F", 1 },
	{ "shakeReduction", &class_float, offsetof(mindustry_core_Renderer, F_shakeReduction), "F", 1 },
	{ "shakeTime", &class_float, offsetof(mindustry_core_Renderer, F_shakeTime), "F", 1 },
	{ "launching", &class_boolean, offsetof(mindustry_core_Renderer, F_launching), "Z", 2 },
	{ "camShakeOffset", &class_arc_math_geom_Vec2, offsetof(mindustry_core_Renderer, F_camShakeOffset), "Larc/math/geom/Vec2;", 2 },
	{ "glErrors", &class_int, offsetof(mindustry_core_Renderer, F_glErrors), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_Renderer, 0, "()V", 1 },
	{ "shake", (intptr_t) M_mindustry_core_Renderer_shake_float_float, VTABLE_mindustry_core_Renderer_shake_float_float, "(FF)V", 1 },
	{ "addEnvRenderer", (intptr_t) M_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable, VTABLE_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable, "(ILjava/lang/Runnable;)V", 1 },
	{ "addCustomBackground", (intptr_t) M_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable, VTABLE_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable, "(Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "init", (intptr_t) M_mindustry_core_Renderer_init, VTABLE_mindustry_core_Renderer_init, "()V", 1 },
	{ "loadFluidFrames", (intptr_t) M_mindustry_core_Renderer_loadFluidFrames, VTABLE_mindustry_core_Renderer_loadFluidFrames, "()V", 1 },
	{ "getFluidFrames", (intptr_t) M_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion, "()[[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "update", (intptr_t) M_mindustry_core_Renderer_update, VTABLE_mindustry_core_Renderer_update, "()V", 1 },
	{ "updateAllDarkness", (intptr_t) M_mindustry_core_Renderer_updateAllDarkness, VTABLE_mindustry_core_Renderer_updateAllDarkness, "()V", 1 },
	{ "isCutscene", (intptr_t) M_mindustry_core_Renderer_isCutscene_R_boolean, VTABLE_mindustry_core_Renderer_isCutscene_R_boolean, "()Z", 1 },
	{ "landScale", (intptr_t) M_mindustry_core_Renderer_landScale_R_float, VTABLE_mindustry_core_Renderer_landScale_R_float, "()F", 1 },
	{ "dispose", (intptr_t) M_mindustry_core_Renderer_dispose, VTABLE_mindustry_core_Renderer_dispose, "()V", 1 },
	{ "resume", (intptr_t) M_mindustry_core_Renderer_resume, VTABLE_mindustry_core_Renderer_resume, "()V", 1 },
	{ "setupBloom", (intptr_t) M_mindustry_core_Renderer_setupBloom, VTABLE_mindustry_core_Renderer_setupBloom, "()V", 0 },
	{ "toggleBloom", (intptr_t) M_mindustry_core_Renderer_toggleBloom_boolean, VTABLE_mindustry_core_Renderer_toggleBloom_boolean, "(Z)V", 1 },
	{ "draw", (intptr_t) M_mindustry_core_Renderer_draw, VTABLE_mindustry_core_Renderer_draw, "()V", 1 },
	{ "drawBackground", (intptr_t) M_mindustry_core_Renderer_drawBackground, VTABLE_mindustry_core_Renderer_drawBackground, "()V", 4 },
	{ "scaleCamera", (intptr_t) M_mindustry_core_Renderer_scaleCamera_float, VTABLE_mindustry_core_Renderer_scaleCamera_float, "(F)V", 1 },
	{ "clampScale", (intptr_t) M_mindustry_core_Renderer_clampScale, VTABLE_mindustry_core_Renderer_clampScale, "()V", 1 },
	{ "getDisplayScale", (intptr_t) M_mindustry_core_Renderer_getDisplayScale_R_float, VTABLE_mindustry_core_Renderer_getDisplayScale_R_float, "()F", 1 },
	{ "minScale", (intptr_t) M_mindustry_core_Renderer_minScale_R_float, VTABLE_mindustry_core_Renderer_minScale_R_float, "()F", 1 },
	{ "maxScale", (intptr_t) M_mindustry_core_Renderer_maxScale_R_float, VTABLE_mindustry_core_Renderer_maxScale_R_float, "()F", 1 },
	{ "getScale", (intptr_t) M_mindustry_core_Renderer_getScale_R_float, VTABLE_mindustry_core_Renderer_getScale_R_float, "()F", 1 },
	{ "setScale", (intptr_t) M_mindustry_core_Renderer_setScale_float, VTABLE_mindustry_core_Renderer_setScale_float, "(F)V", 1 },
	{ "isLaunching", (intptr_t) M_mindustry_core_Renderer_isLaunching_R_boolean, VTABLE_mindustry_core_Renderer_isLaunching_R_boolean, "()Z", 1 },
	{ "getLandTime", (intptr_t) M_mindustry_core_Renderer_getLandTime_R_float, VTABLE_mindustry_core_Renderer_getLandTime_R_float, "()F", 1 },
	{ "getLandTimeIn", (intptr_t) M_mindustry_core_Renderer_getLandTimeIn_R_float, VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float, "()F", 1 },
	{ "showLanding", (intptr_t) M_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator, VTABLE_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator, "(Lmindustry/world/blocks/LaunchAnimator;)V", 1 },
	{ "showLaunch", (intptr_t) M_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator, VTABLE_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator, "(Lmindustry/world/blocks/LaunchAnimator;)V", 1 },
	{ "takeMapScreenshot", (intptr_t) M_mindustry_core_Renderer_takeMapScreenshot, VTABLE_mindustry_core_Renderer_takeMapScreenshot, "()V", 1 },
	{ "lambda$takeMapScreenshot$0", (intptr_t) SM_mindustry_core_Renderer_lambda$takeMapScreenshot$0_Array1_byte_int_int, 0, "([BII)V", 4106 },
	{ "lambda$takeMapScreenshot$1", (intptr_t) SM_mindustry_core_Renderer_lambda$takeMapScreenshot$1_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$draw$9", (intptr_t) M_mindustry_core_Renderer_lambda$draw$9, VTABLE_mindustry_core_Renderer_lambda$draw$9, "()V", 4098 },
	{ "lambda$draw$8", (intptr_t) M_mindustry_core_Renderer_lambda$draw$8, VTABLE_mindustry_core_Renderer_lambda$draw$8, "()V", 4098 },
	{ "lambda$draw$7", (intptr_t) M_mindustry_core_Renderer_lambda$draw$7, VTABLE_mindustry_core_Renderer_lambda$draw$7, "()V", 4098 },
	{ "lambda$draw$6", (intptr_t) M_mindustry_core_Renderer_lambda$draw$6, VTABLE_mindustry_core_Renderer_lambda$draw$6, "()V", 4098 },
	{ "lambda$draw$5", (intptr_t) M_mindustry_core_Renderer_lambda$draw$5, VTABLE_mindustry_core_Renderer_lambda$draw$5, "()V", 4098 },
	{ "lambda$draw$3", (intptr_t) SM_mindustry_core_Renderer_lambda$draw$3_float, 0, "(F)V", 4106 },
	{ "lambda$draw$4", (intptr_t) SM_mindustry_core_Renderer_lambda$draw$4_float_mindustry_game_MapObjectives$MapObjective, 0, "(FLmindustry/game/MapObjectives$MapObjective;)V", 4106 },
	{ "lambda$draw$2", (intptr_t) SM_mindustry_core_Renderer_lambda$draw$2_float_mindustry_game_MapObjectives$MapObjective, 0, "(FLmindustry/game/MapObjectives$MapObjective;)V", 4106 },
	{ "lambda$draw$1", (intptr_t) SM_mindustry_core_Renderer_lambda$draw$1, 0, "()V", 4106 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_core_Renderer_lambda$draw$0, VTABLE_mindustry_core_Renderer_lambda$draw$0, "()V", 4098 },
	{ "lambda$init$2", (intptr_t) M_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_core_Renderer_lambda$init$1_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 4106 },
	{ "lambda$init$0", (intptr_t) M_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_core_Renderer, 0, "()V", 8 },
};

Class class_mindustry_core_Renderer{
		.nativeName = (intptr_t) "mindustry/core/Renderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_Renderer),
		.classVtable = (intptr_t) vtable_mindustry_core_Renderer,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Renderer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_Renderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 44,
		.nativeFields = (intptr_t) fields,
		.methodCount = 47,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_Renderer = registerClass(&class_mindustry_core_Renderer);

}
